/*
 * XREFs of HalpTimerMarkHiberPhase @ 0x1404FE724
 * Callers:
 *     HaliLocateHiberRanges @ 0x140A95CA0 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x14058E8A0 (PoSetHiberRange.c)
 */

void __fastcall HalpTimerMarkHiberPhase(__int64 a1)
{
  if ( !a1 )
  {
    if ( HalpTimerReferencePage )
      PoSetHiberRange(0LL, 0x10000u, HalpTimerReferencePage, 0x1000uLL, 0x636C6168u);
  }
}
