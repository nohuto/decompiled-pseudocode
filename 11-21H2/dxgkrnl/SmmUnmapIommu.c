/*
 * XREFs of SmmUnmapIommu @ 0x1C002FC9C
 * Callers:
 *     ?SysMmUnmapIommuRange@@YAXPEAUSYSMM_ADAPTER@@_KPEAU_MDL@@_N@Z @ 0x1C002FE30 (-SysMmUnmapIommuRange@@YAXPEAUSYSMM_ADAPTER@@_KPEAU_MDL@@_N@Z.c)
 *     SmmIoMmuUnmapStagingMdl @ 0x1C006DBA8 (SmmIoMmuUnmapStagingMdl.c)
 *     ?SmmMapContiguousRangeToIommu@@YAJPEAUSYSMM_IOMMU@@_K11_N@Z @ 0x1C006E0E4 (-SmmMapContiguousRangeToIommu@@YAJPEAUSYSMM_IOMMU@@_K11_N@Z.c)
 *     ?SmmUnmapContiguousRangeFromIommu@@YAXPEAUSYSMM_IOMMU@@_K11_N@Z @ 0x1C006E504 (-SmmUnmapContiguousRangeFromIommu@@YAXPEAUSYSMM_IOMMU@@_K11_N@Z.c)
 *     SmmUnmapNonPagedObjectFromIommu @ 0x1C006E694 (SmmUnmapNonPagedObjectFromIommu.c)
 *     SmmUnmapPagedObjectFromIommu @ 0x1C006E7C8 (SmmUnmapPagedObjectFromIommu.c)
 *     SmmUnmapLockedPagesFromIommu @ 0x1C0070E18 (SmmUnmapLockedPagesFromIommu.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

char __fastcall SmmUnmapIommu(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rcx
  int v4; // eax
  _DWORD *v5; // rdx
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  _DWORD v10[2]; // [rsp+60h] [rbp-28h] BYREF
  _DWORD *v11; // [rsp+68h] [rbp-20h]
  unsigned __int64 v12; // [rsp+70h] [rbp-18h]

  v3 = *(_QWORD *)(a1 + 32);
  if ( a2 )
  {
    v4 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64))qword_1C0130A90)(
           v3,
           a2,
           (unsigned __int64)(unsigned int)a3[10] >> 12);
  }
  else
  {
    if ( dword_1C0130A48 == 2 )
    {
      v10[1] = 0;
      v11 = a3 + 12;
      v5 = v10;
      v12 = (unsigned __int64)(unsigned int)a3[10] >> 12;
      v10[0] = 2;
    }
    else
    {
      v5 = a3;
    }
    v4 = ((__int64 (__fastcall *)(__int64, _DWORD *))qword_1C0130AA0)(v3, v5);
  }
  if ( v4 < 0 )
  {
    LOBYTE(v4) = WdLogSingleEntry1(1LL, 342LL);
    if ( bTracingEnabled )
    {
      LOBYTE(v4) = BYTE3(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        LOBYTE(v4) = McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                       v7,
                       v6,
                       v8,
                       0,
                       2,
                       -1,
                       (__int64)L"(((NTSTATUS)(Status)) >= 0)",
                       342LL,
                       0LL,
                       0LL,
                       0LL,
                       0LL);
    }
  }
  return v4;
}
