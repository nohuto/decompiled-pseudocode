/*
 * XREFs of AnFwProgressIndicatorTransition @ 0x140AF2184
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140AEDC78 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140252620 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x1402BE8F0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1402BFC30 (KeInitializeDpc.c)
 */

BOOLEAN AnFwProgressIndicatorTransition()
{
  BOOLEAN result; // al

  if ( byte_140CF7AE9 )
  {
    KeInitializeTimerEx(&stru_140D16980, NotificationTimer);
    KeInitializeDpc(&stru_140D16900, (PKDEFERRED_ROUTINE)AnFwpProgressIndicatorTimer, 0LL);
    return KeSetCoalescableTimer(&stru_140D16980, 0LL, 0x1Eu, 0, &stru_140D16900);
  }
  return result;
}
