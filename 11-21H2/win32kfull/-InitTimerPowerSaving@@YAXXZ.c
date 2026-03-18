/*
 * XREFs of ?InitTimerPowerSaving@@YAXXZ @ 0x1C01223E8
 * Callers:
 *     RawInputThread @ 0x1C005CC60 (RawInputThread.c)
 * Callees:
 *     <none>
 */

void InitTimerPowerSaving(void)
{
  FastGetProfileDword(0LL, 2LL, L"RITdemonTimerPowerSaveElapse", 43200000LL, &gdwRITdaemonTimerPowerSaveElapse);
  FastGetProfileDword(0LL, 2LL, L"RITdemonTimerPowerSaveCoalescing", 43200000LL, &gdwRITdaemonTimerPowerSaveCoalescing);
}
