/*
 * XREFs of MiUnlockDriverPages @ 0x140875FFC
 * Callers:
 *     MiUnlockAndFreeDvPatchImage @ 0x140641234 (MiUnlockAndFreeDvPatchImage.c)
 *     MmWriteSystemImageTracepoint @ 0x1406433DC (MmWriteSystemImageTracepoint.c)
 *     MiCompleteSecureDriverLoad @ 0x140885D58 (MiCompleteSecureDriverLoad.c)
 *     MiUnlockEntireDriver @ 0x140A345B0 (MiUnlockEntireDriver.c)
 *     MiApplyDriverHotPatch @ 0x140A348E8 (MiApplyDriverHotPatch.c)
 *     MiApplySingleSessionPatch @ 0x140A36110 (MiApplySingleSessionPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x140A3BDD8 (MiUnapplyDriverHotPatch.c)
 *     MmReapplyBootPatchImports @ 0x140B750B4 (MmReapplyBootPatchImports.c)
 * Callees:
 *     MiGetPteAddress @ 0x1402DE00C (MiGetPteAddress.c)
 *     RtlFindSetBitsEx @ 0x140340B10 (RtlFindSetBitsEx.c)
 *     MiUnlockCodePage @ 0x140367338 (MiUnlockCodePage.c)
 *     KeReservePrivilegedPages @ 0x1403D6A90 (KeReservePrivilegedPages.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockDriverPages(_RTL_BITMAP_EX *a1)
{
  unsigned __int64 *Buffer; // rcx
  unsigned __int64 *v3; // rcx
  unsigned __int64 *v4; // rcx
  unsigned __int64 SizeOfBitMap; // rdi
  __int64 PteAddress; // r14
  ULONG64 SetBits; // rax
  signed __int64 **p_Buffer; // rdi
  unsigned __int64 v9; // rbp

  Buffer = a1[3].Buffer;
  if ( Buffer )
  {
    ExFreePoolWithTag(Buffer, 0);
    a1[3].Buffer = 0LL;
  }
  v3 = a1[4].Buffer;
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    a1[4].Buffer = 0LL;
  }
  v4 = a1[5].Buffer;
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    a1[5].Buffer = 0LL;
  }
  if ( a1[2].Buffer )
  {
    SizeOfBitMap = a1->SizeOfBitMap;
    if ( (a1[6].SizeOfBitMap & 1) != 0 )
      KeReservePrivilegedPages();
    PteAddress = MiGetPteAddress(*(_QWORD *)(SizeOfBitMap + 48));
    SetBits = RtlFindSetBitsEx(a1 + 2, 1uLL, 0LL);
    p_Buffer = (signed __int64 **)&a1[2].Buffer;
    while ( 1 )
    {
      v9 = SetBits;
      if ( SetBits == -1LL )
        break;
      MiUnlockCodePage(PteAddress + 8 * SetBits, PteAddress + 8 * SetBits, (LODWORD(a1[6].SizeOfBitMap) >> 1) & 1);
      _bittestandreset64(*p_Buffer, v9);
      SetBits = RtlFindSetBitsEx(a1 + 2, 1uLL, v9);
    }
    ExFreePoolWithTag(*p_Buffer, 0);
    *p_Buffer = 0LL;
  }
}
