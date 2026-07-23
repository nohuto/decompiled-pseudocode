/*
 * XREFs of WdtpArmTimer @ 0x14031DD04
 * Callers:
 *     WdtpTimerCallback @ 0x1406746E0 (WdtpTimerCallback.c)
 *     PnpWatchdogTimerStart @ 0x140785800 (PnpWatchdogTimerStart.c)
 * Callees:
 *     ExSetTimer @ 0x14031E080 (ExSetTimer.c)
 */

__int64 __fastcall WdtpArmTimer(__int64 a1, int a2)
{
  *(_QWORD *)(a1 + 120) = MEMORY[0xFFFFF78000000008];
  *(_DWORD *)(a1 + 128) = a2;
  return ExSetTimer(*(_QWORD *)(a1 + 48));
}
