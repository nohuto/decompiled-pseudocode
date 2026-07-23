/*
 * XREFs of PopSetSessionDisplayStatus @ 0x1407A5D20
 * Callers:
 *     PopSessionDisconnected @ 0x140683338 (PopSessionDisconnected.c)
 *     PopSessionConnected @ 0x1407EBAAC (PopSessionConnected.c)
 *     PopSetDisplayStatus @ 0x1408853A8 (PopSetDisplayStatus.c)
 * Callees:
 *     PopPrintEx @ 0x14032A93C (PopPrintEx.c)
 *     PopSetPowerSettingValue @ 0x140782BE8 (PopSetPowerSettingValue.c)
 *     PopDiagTraceSessionState @ 0x1407A60D8 (PopDiagTraceSessionState.c)
 */

__int64 __fastcall PopSetSessionDisplayStatus(unsigned int a1, int a2, char a3)
{
  const char *v6; // r8
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  PopDiagTraceSessionState(&POP_ETW_ADPM_SESSION_DISPLAY_STATE);
  v6 = ">>>>>";
  if ( !a3 )
    v6 = &byte_14088CB20;
  PopPrintEx(3u, (__int64)"PopAdaptive: %sSession %u display state: %u\n", v6, a1, a2);
  PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 0, 4u, &v8);
  return PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 1, 4u, &v8);
}
