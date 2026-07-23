/*
 * XREFs of HalpTimerMarkHiberPhase @ 0x1404FEC74
 * Callers:
 *     HaliLocateHiberRanges @ 0x140A95B10 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x14058ED90 (PoSetHiberRange.c)
 */

void __fastcall HalpTimerMarkHiberPhase(__int64 a1)
{
  if ( !a1 )
  {
    if ( HalpTimerReferencePage )
      PoSetHiberRange(0LL, 0x10000u, HalpTimerReferencePage, 0x1000uLL, 0x636C6168u);
  }
}
