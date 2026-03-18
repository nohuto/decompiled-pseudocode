/*
 * XREFs of MiUnlockDriverPages @ 0x140875B2C
 * Callers:
 *     MiUnlockAndFreeDvPatchImage @ 0x1406411C4 (MiUnlockAndFreeDvPatchImage.c)
 *     MmWriteSystemImageTracepoint @ 0x14064336C (MmWriteSystemImageTracepoint.c)
 *     MiCompleteSecureDriverLoad @ 0x140885888 (MiCompleteSecureDriverLoad.c)
 *     MiUnlockEntireDriver @ 0x140A34540 (MiUnlockEntireDriver.c)
 *     MiApplyDriverHotPatch @ 0x140A34878 (MiApplyDriverHotPatch.c)
 *     MiApplySingleSessionPatch @ 0x140A360A0 (MiApplySingleSessionPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x140A3BD68 (MiUnapplyDriverHotPatch.c)
 *     MmReapplyBootPatchImports @ 0x140B743BC (MmReapplyBootPatchImports.c)
 * Callees:
 *     MiGetPteAddress @ 0x1402DE00C (MiGetPteAddress.c)
 *     RtlFindSetBitsEx @ 0x140341000 (RtlFindSetBitsEx.c)
 *     MiUnlockCodePage @ 0x140367988 (MiUnlockCodePage.c)
 *     KeReservePrivilegedPages @ 0x1403D70F0 (KeReservePrivilegedPages.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockDriverPages(__int64 *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  unsigned __int64 v5; // rdi
  __int64 PteAddress; // r14
  unsigned __int64 SetBits; // rax
  signed __int64 **v8; // rdi
  unsigned __int64 v9; // rbp

  v2 = (void *)a1[7];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    a1[7] = 0LL;
  }
  v3 = (void *)a1[9];
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    a1[9] = 0LL;
  }
  v4 = (void *)a1[11];
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    a1[11] = 0LL;
  }
  if ( a1[5] )
  {
    v5 = *a1;
    if ( (a1[12] & 1) != 0 )
      KeReservePrivilegedPages();
    PteAddress = MiGetPteAddress(*(_QWORD *)(v5 + 48));
    SetBits = RtlFindSetBitsEx((unsigned __int64 *)a1 + 4, 1uLL, 0LL);
    v8 = (signed __int64 **)(a1 + 5);
    while ( 1 )
    {
      v9 = SetBits;
      if ( SetBits == -1LL )
        break;
      MiUnlockCodePage(PteAddress + 8 * SetBits, PteAddress + 8 * SetBits, (*((_DWORD *)a1 + 24) >> 1) & 1);
      _bittestandreset64(*v8, v9);
      SetBits = RtlFindSetBitsEx((unsigned __int64 *)a1 + 4, 1uLL, v9);
    }
    ExFreePoolWithTag(*v8, 0);
    *v8 = 0LL;
  }
}
