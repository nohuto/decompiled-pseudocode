/*
 * XREFs of AnFwDisableBackgroundUpdateTimer @ 0x140AF06E8
 * Callers:
 *     AnFwDisplayBackgroundUpdate @ 0x140AED07C (AnFwDisplayBackgroundUpdate.c)
 *     BgpFwLibraryDisable @ 0x140AED1B0 (BgpFwLibraryDisable.c)
 *     AnFwDisplayFade @ 0x140AED9AC (AnFwDisplayFade.c)
 *     ResFwFreeContext @ 0x140AF2ED4 (ResFwFreeContext.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140AF31E0 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x140252980 (KeCancelTimer.c)
 */

BOOLEAN AnFwDisableBackgroundUpdateTimer()
{
  BOOLEAN result; // al

  if ( byte_140D18108 )
  {
    result = KeCancelTimer(&stru_140D1B1A0);
    byte_140D18108 = 0;
  }
  return result;
}
