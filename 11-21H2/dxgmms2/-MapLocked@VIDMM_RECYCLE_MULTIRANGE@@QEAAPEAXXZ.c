/*
 * XREFs of ?MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ @ 0x1C00E6A40
 * Callers:
 *     ?MapLocked@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX@Z @ 0x1C00E69F0 (-MapLocked@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX@Z.c)
 * Callees:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0001280 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C007C35C (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C00E772C (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 */

void *__fastcall VIDMM_RECYCLE_MULTIRANGE::MapLocked(VIDMM_RECYCLE_MULTIRANGE *this)
{
  void *result; // rax
  void *v3; // r14
  __int64 v4; // rcx
  int v5; // edx
  char v6; // si
  int v7; // eax
  struct _MDL *Mdl; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _EPROCESS *v17; // rsi
  __int64 v18; // r9
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v19; // rax
  __int64 v20; // rcx
  PVOID v21; // rax
  struct _MDL *v22; // rcx
  struct _EPROCESS *CurrentProcess; // rsi
  __int64 v24; // r9
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  unsigned __int8 v26; // [rsp+50h] [rbp-68h] BYREF
  char v27; // [rsp+51h] [rbp-67h]
  PVOID MappedBase; // [rsp+58h] [rbp-60h] BYREF
  PVOID VirtualAddress[3]; // [rsp+60h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-40h] BYREF

  VirtualAddress[2] = this;
  result = (void *)*((_QWORD *)this + 22);
  if ( !result )
  {
    VirtualAddress[0] = 0LL;
    MappedBase = 0LL;
    v3 = (void *)(*((_QWORD *)this + 5) - *((_QWORD *)this + 6));
    VirtualAddress[1] = v3;
    v26 = 0;
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(
      **(PRKPROCESS **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL),
      &ApcState);
    v4 = *((_QWORD *)this + 10);
    v5 = **(_DWORD **)(v4 + 32);
    if ( (unsigned int)(v5 - 3) > 1 )
    {
      v6 = 0;
      v27 = 0;
      VirtualAddress[0] = *((PVOID *)this + 6);
    }
    else
    {
      v6 = 1;
      v27 = 1;
      v7 = VidMmRecycleHeapMapSection(
             *(PVOID *)(v4 + 56),
             *((_QWORD *)this + 6),
             (unsigned __int64)v3,
             v5 == 4,
             VirtualAddress,
             &MappedBase,
             0,
             &v26);
      if ( v7 < 0 )
      {
        WdLogSingleEntry5(
          3LL,
          v3,
          *((_QWORD *)this + 6),
          *((_QWORD *)this + 10),
          v7,
          **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL));
LABEL_32:
        KeUnstackDetachProcess(&ApcState);
        return 0LL;
      }
    }
    Mdl = IoAllocateMdl(VirtualAddress[0], (ULONG)v3, 0, 0, 0LL);
    *((_QWORD *)this + 23) = Mdl;
    if ( !Mdl )
    {
      _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
      WdLogSingleEntry1(6LL, 4447LL);
      DxgkLogInternalTriageEvent(v9, 262145LL);
      v22 = (struct _MDL *)*((_QWORD *)this + 23);
      if ( v22 )
      {
        IoFreeMdl(v22);
        *((_QWORD *)this + 23) = 0LL;
      }
      if ( v6 )
      {
        if ( v26 )
          CurrentProcess = 0LL;
        else
          CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v22, v10, v11, v12);
        if ( (unsigned __int64)v3 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(
                                       *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this + 10) + 32LL),
                                       (unsigned int)(**(_DWORD **)(*((_QWORD *)this + 10) + 32LL) - 5) <= 1) )
        {
          if ( CurrentProcess )
          {
            VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
            (*((void (__fastcall **)(struct _EPROCESS *, PVOID))VirtualMemoryInterface + 4))(CurrentProcess, MappedBase);
          }
          else
          {
            MmUnmapViewInSystemSpace(MappedBase);
          }
        }
        else
        {
          VidMmUnmapViewAsync(CurrentProcess, *(void **)(v24 + 56), MappedBase);
        }
      }
      goto LABEL_32;
    }
    MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
    if ( v6 )
    {
      if ( v26 )
        v17 = 0LL;
      else
        v17 = (struct _EPROCESS *)PsGetCurrentProcess(v14, v13, v15, v16);
      if ( (unsigned __int64)v3 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(
                                     *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this + 10) + 32LL),
                                     (unsigned int)(**(_DWORD **)(*((_QWORD *)this + 10) + 32LL) - 5) <= 1) )
      {
        if ( v17 )
        {
          v19 = DxgkGetVirtualMemoryInterface();
          (*((void (__fastcall **)(struct _EPROCESS *, PVOID))v19 + 4))(v17, MappedBase);
        }
        else
        {
          MmUnmapViewInSystemSpace(MappedBase);
        }
      }
      else
      {
        VidMmUnmapViewAsync(v17, *(void **)(v18 + 56), MappedBase);
      }
    }
    v20 = *((_QWORD *)this + 23);
    if ( (*(_BYTE *)(v20 + 10) & 5) != 0 )
      v21 = *(PVOID *)(v20 + 24);
    else
      v21 = MmMapLockedPagesSpecifyCache((PMDL)v20, 0, MmCached, 0LL, 0, 0x40000010u);
    *((_QWORD *)this + 22) = v21;
    KeUnstackDetachProcess(&ApcState);
    return (void *)*((_QWORD *)this + 22);
  }
  return result;
}
