/*
 * XREFs of SmmUnmapNonPagedObjectFromIommu @ 0x1C006E694
 * Callers:
 *     SmmClosePhysicalObject @ 0x1C001B364 (SmmClosePhysicalObject.c)
 *     SmmMapAdapterObjectsToDomain @ 0x1C006E000 (SmmMapAdapterObjectsToDomain.c)
 * Callees:
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x1C001BB40 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     SmmUnmapIommu @ 0x1C002FC9C (SmmUnmapIommu.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     SmmIommuUnmapReferenced @ 0x1C006DFAC (SmmIommuUnmapReferenced.c)
 *     ?SmmUnmapContiguousRangeFromIommu@@YAXPEAUSYSMM_IOMMU@@_K11_N@Z @ 0x1C006E504 (-SmmUnmapContiguousRangeFromIommu@@YAXPEAUSYSMM_IOMMU@@_K11_N@Z.c)
 */

void __fastcall SmmUnmapNonPagedObjectFromIommu(__int64 a1, __int64 a2, struct SYSMM_IOMMU *a3)
{
  bool v3; // bl
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 LogicalAddress; // rax
  __int64 v11; // rsi
  int v12; // edx
  _DWORD *v13; // r8
  PHYSICAL_ADDRESS v14; // r8

  v3 = 1;
  if ( (*(_DWORD *)(a1 + 44) & 1) == 0 )
  {
    WdLogSingleEntry1(1LL, 1250LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v8,
          v7,
          v9,
          0LL,
          2,
          -1,
          L"pPhysicalObject->Flags.NonPaged == 1",
          1250LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  LogicalAddress = SmmGetLogicalAddress(*(const struct SYSMM_LOGICAL_BLOCK **)(a2 + 24));
  v11 = LogicalAddress;
  if ( (*(_DWORD *)(a1 + 44) & 0x200) == 0 && (dword_1C0130B08 & 4) == 0 )
    v3 = 0;
  v12 = *(_DWORD *)(a1 + 44) & 0x1E;
  if ( v12 == 4 )
  {
    v13 = *(_DWORD **)(a1 + 8);
    if ( v3 )
      SmmIommuUnmapReferenced((__int64)a3, LogicalAddress, (__int64)v13);
    else
      SmmUnmapIommu((__int64)a3, LogicalAddress, v13);
  }
  else
  {
    if ( v12 == 10 )
    {
      v14.QuadPart = (unsigned __int64)MmGetPhysicalAddress(*(PVOID *)(a1 + 8)).QuadPart >> 12;
    }
    else
    {
      if ( v12 != 6 )
        return;
      v14.QuadPart = *(_QWORD *)(a1 + 8) >> 12;
    }
    SmmUnmapContiguousRangeFromIommu(a3, v11, (struct _MDL *)v14.QuadPart, *(_QWORD *)a1, v3);
  }
}
