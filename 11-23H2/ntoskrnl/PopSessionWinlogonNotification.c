/*
 * XREFs of PopSessionWinlogonNotification @ 0x140682D5C
 * Callers:
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1407ED33C (PopPowerInformationInternal.c)
 * Callees:
 *     PopPrintEx @ 0x14032A93C (PopPrintEx.c)
 *     PopSetPowerSettingValueAcDc @ 0x1407A7760 (PopSetPowerSettingValueAcDc.c)
 *     PopNotifyConsoleUserPresent @ 0x1407D3A14 (PopNotifyConsoleUserPresent.c)
 *     PopDiagTraceSessionStates @ 0x1407EBB2C (PopDiagTraceSessionStates.c)
 *     PopAcquireAdaptiveLock @ 0x1407EC16C (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EC218 (PopReleaseAdaptiveLock.c)
 */

__int64 __fastcall PopSessionWinlogonNotification(unsigned int a1, __int64 a2)
{
  char v2; // si
  char v3; // di
  const EVENT_DESCRIPTOR *v5; // rcx
  const char *v6; // rax
  const char *v7; // r8
  __int64 result; // rax
  bool v9; // bl
  BOOL v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_BYTE *)(a2 + 5);
  v3 = *(_BYTE *)(a2 + 4);
  v5 = (const EVENT_DESCRIPTOR *)POP_ETW_ADPM_SESSION_LOCKED;
  if ( !v2 )
    v5 = &POP_ETW_ADPM_SESSION_UNLOCKED;
  PopDiagTraceSessionStates(v5);
  v6 = "Locked";
  if ( !v2 )
    v6 = "Unlocked";
  v7 = "Console";
  if ( !v3 )
    v7 = "Remote";
  result = PopPrintEx(3u, (__int64)"PopAdaptive:>>>>> %s session %u is %s\n", v7, a1, v6);
  v9 = 0;
  if ( v3 )
  {
    PopAcquireAdaptiveLock(0LL);
    if ( v2 )
    {
      byte_140C39C41 = 1;
    }
    else
    {
      byte_140C39C41 = 0;
      v9 = byte_140C39C42 == 0;
    }
    PopReleaseAdaptiveLock();
    v10 = v2 != 0;
    result = PopSetPowerSettingValueAcDc(&GUID_CONSOLE_LOCKED, 4LL, &v10);
    if ( v9 )
      return PopNotifyConsoleUserPresent(0LL, 10LL);
  }
  return result;
}
