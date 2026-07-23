/*
 * XREFs of sub_140AAB5FC @ 0x140AAB5FC
 * Callers:
 *     sub_140AAD490 @ 0x140AAD490 (sub_140AAD490.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 */

BOOLEAN sub_140AAB5FC()
{
  BOOLEAN result; // al

  if ( byte_140CE1AE0 )
  {
    KeInitializeTimerEx(&stru_140CF7400, NotificationTimer);
    KeInitializeDpc(&stru_140CF73C0, sub_140AACEA0, 0LL);
    return KeSetCoalescableTimer(&stru_140CF7400, 0LL, 0x1Eu, 0, &stru_140CF73C0);
  }
  return result;
}
