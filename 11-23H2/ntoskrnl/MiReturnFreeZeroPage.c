/*
 * XREFs of MiReturnFreeZeroPage @ 0x1402E8204
 * Callers:
 *     MiMigratePfn @ 0x140263370 (MiMigratePfn.c)
 *     MiGetPerfectColorHeadPage @ 0x14026DEA0 (MiGetPerfectColorHeadPage.c)
 *     MiCoalesceFreePages @ 0x1402D4C00 (MiCoalesceFreePages.c)
 *     MiWalkEntireImage @ 0x1402DB270 (MiWalkEntireImage.c)
 *     MiReleaseFreshPage @ 0x1402E81B0 (MiReleaseFreshPage.c)
 *     MiFreeLargeInitializationCodePages @ 0x1403955CC (MiFreeLargeInitializationCodePages.c)
 *     MiTradePage @ 0x1403BAB40 (MiTradePage.c)
 *     MiDemoteSlabEntry @ 0x1403CD5CC (MiDemoteSlabEntry.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140651DA4 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065DC10 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140660958 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x140660DA8 (MiLockSpecialPurposeMemoryCachedPage.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 *     MiIsFreeZeroPfnCold @ 0x1402E8860 (MiIsFreeZeroPfnCold.c)
 */

void __fastcall MiReturnFreeZeroPage(__int64 a1)
{
  char v1; // al
  int IsFreeZeroPfnCold; // eax
  __int16 v3; // r8
  ULONG_PTR v4; // r9
  __int16 v5; // r10
  __int16 v6; // dx

  if ( (*(_BYTE *)(a1 + 34) & 7) == 6 )
    *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  v1 = *(_BYTE *)(a1 + 34) & 0xC7;
  *(_WORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 34) = v1;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  *(_BYTE *)(a1 + 35) &= ~0x10u;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  IsFreeZeroPfnCold = MiIsFreeZeroPfnCold(a1);
  v6 = v3 | 0x400;
  if ( !IsFreeZeroPfnCold )
    v6 = v3;
  MiInsertPageInFreeOrZeroedList(v4, v5 | v6);
}
