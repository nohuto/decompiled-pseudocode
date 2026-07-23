/*
 * XREFs of PopSetSessionDisplayStatus @ 0x1407A6040
 * Callers:
 *     PopSessionDisconnected @ 0x140683338 (PopSessionDisconnected.c)
 *     PopSessionConnected @ 0x1407EBD5C (PopSessionConnected.c)
 *     PopSetDisplayStatus @ 0x140885638 (PopSetDisplayStatus.c)
 * Callees:
 *     PopPrintEx @ 0x14032A4CC (PopPrintEx.c)
 *     PopSetPowerSettingValue @ 0x140782F08 (PopSetPowerSettingValue.c)
 *     PopDiagTraceSessionState @ 0x1407A63F8 (PopDiagTraceSessionState.c)
 */

__int64 __fastcall PopSetSessionDisplayStatus(unsigned int a1, int a2, char a3)
{
  const char *v6; // r8
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  PopDiagTraceSessionState(&POP_ETW_ADPM_SESSION_DISPLAY_STATE);
  v6 = ">>>>>";
  if ( !a3 )
    v6 = &byte_14088CDB0;
  PopPrintEx(3u, (__int64)"PopAdaptive: %sSession %u display state: %u\n", v6, a1, a2);
  PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 0, 4u, &v8);
  return PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 1, 4u, &v8);
}
