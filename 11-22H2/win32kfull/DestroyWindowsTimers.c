/*
 * XREFs of DestroyWindowsTimers @ 0x1C003BD44
 * Callers:
 *     ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1C003BC00 (-xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z.c)
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 * Callees:
 *     FreeTimer @ 0x1C003C040 (FreeTimer.c)
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsage @ 0x1C0139694 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 DestroyWindowsTimers()
{
  return gtmrListHead;
}
