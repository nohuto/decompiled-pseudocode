/*
 * XREFs of ?SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x1C001B7D8
 * Callers:
 *     SmmCreatePhysicalObject @ 0x1C001B724 (SmmCreatePhysicalObject.c)
 *     DxgkOpenPhysicalMemoryObjectCB @ 0x1C0054B70 (DxgkOpenPhysicalMemoryObjectCB.c)
 *     ?SysMmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C006ECB0 (-SysMmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@PEAPEAUSYSMM_ADAPTER_.c)
 * Callees:
 *     SmmClosePhysicalObject @ 0x1C001B364 (SmmClosePhysicalObject.c)
 *     SmmAddObjectToAdapter @ 0x1C001B8B0 (SmmAddObjectToAdapter.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C00541B0 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     SmmMapNonPagedObjectToIommu @ 0x1C006E278 (SmmMapNonPagedObjectToIommu.c)
 *     SmmMapPagedObjectToIommu @ 0x1C006E424 (SmmMapPagedObjectToIommu.c)
 *     ?SmmAllocateLogicalAddress@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_KPEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x1C006F90C (-SmmAllocateLogicalAddress@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_KPEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z.c)
 */

__int64 __fastcall SmmOpenPhysicalObject(struct SYSMM_PHYSICAL_OBJECT *a1, struct SYSMM_ADAPTER *a2)
{
  int v4; // edi
  KIRQL v5; // r12
  __int64 v6; // rdx
  int v7; // r8d
  int v8; // r8d
  int LogicalAddress; // eax
  char *v11; // r8
  char *v12; // rdx
  int v13; // eax

  ExAcquirePushLockExclusiveEx((char *)a1 + 32, 0LL);
  if ( (*((_DWORD *)a2 + 20) & 1) == 0 || (dword_1C0130B08 & 0x18) != 0 )
  {
    v4 = 0;
  }
  else
  {
    LogicalAddress = SmmAllocateLogicalAddress(
                       *((struct SYSMM_LOGICAL_ALLOCATOR **)a2 + 44),
                       *(_QWORD *)a1,
                       (char *)a1 + 64,
                       (struct SYSMM_LOGICAL_BLOCK **)a1 + 11);
    v4 = LogicalAddress;
    if ( LogicalAddress < 0 )
    {
      WdLogSingleEntry2(3LL, a1, LogicalAddress);
      goto LABEL_13;
    }
  }
  v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)a2 + 18);
  if ( !*((_DWORD *)a2 + 23) )
  {
    v11 = (char *)a2 + 64;
    v12 = (char *)a1 + 64;
    v13 = (*((_DWORD *)a1 + 11) & 1) != 0
        ? SmmMapNonPagedObjectToIommu(a1, v12, v11)
        : SmmMapPagedObjectToIommu(a1, v12, v11);
    v4 = v13;
    if ( v13 < 0 )
      WdLogSingleEntry2(3LL, a1, v13);
  }
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)a2 + 18, v5);
  if ( v4 >= 0 )
  {
    SmmAddObjectToAdapter(a2, (char *)a1 + 64);
    goto LABEL_6;
  }
LABEL_13:
  if ( *((_QWORD *)a1 + 10) )
    SmmClosePhysicalObject((__int64 *)a1 + 8, v6, v7);
LABEL_6:
  ExReleasePushLockExclusiveEx((char *)a1 + 32, 0LL);
  if ( v4 >= 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)a1 + 10);
    if ( (Microsoft_Windows_DxgKrnl_SysMmEnableBits & 1) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(
        (unsigned int)&SysMmControlGuid_Context,
        (unsigned int)"\a",
        v8,
        (_DWORD)a2,
        (char)a1,
        (_BYTE)a1 + 64);
  }
  return (unsigned int)v4;
}
