/*
 * XREFs of AnFwDisableBackgroundUpdateTimer @ 0x140AEF6DC
 * Callers:
 *     AnFwDisplayBackgroundUpdate @ 0x140AEC0B8 (AnFwDisplayBackgroundUpdate.c)
 *     BgpFwLibraryDisable @ 0x140AEC1EC (BgpFwLibraryDisable.c)
 *     AnFwDisplayFade @ 0x140AEC9E8 (AnFwDisplayFade.c)
 *     ResFwFreeContext @ 0x140AF1EE4 (ResFwFreeContext.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140AF21F0 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x140252B60 (KeCancelTimer.c)
 */

BOOLEAN AnFwDisableBackgroundUpdateTimer()
{
  BOOLEAN result; // al

  if ( byte_140D18048 )
  {
    result = KeCancelTimer(&stru_140D1B0E0);
    byte_140D18048 = 0;
  }
  return result;
}
