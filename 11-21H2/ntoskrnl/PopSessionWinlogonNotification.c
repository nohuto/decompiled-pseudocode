/*
 * XREFs of PopSessionWinlogonNotification @ 0x14099CBC8
 * Callers:
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 * Callees:
 *     PopPrintEx @ 0x140369B48 (PopPrintEx.c)
 *     PopSetPowerSettingValueAcDc @ 0x1407525EC (PopSetPowerSettingValueAcDc.c)
 *     PopDiagTraceSessionStates @ 0x1407ED774 (PopDiagTraceSessionStates.c)
 *     PopAcquireAdaptiveLock @ 0x1407EF098 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EF120 (PopReleaseAdaptiveLock.c)
 *     PopNotifyConsoleUserPresent @ 0x1407F2A20 (PopNotifyConsoleUserPresent.c)
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
  PopDiagTraceSessionStates(v5, a1, *(unsigned __int8 *)(a2 + 4));
  v6 = "Locked";
  if ( !v2 )
    v6 = "Unlocked";
  v7 = "Console";
  if ( !v3 )
    v7 = "Remote";
  result = PopPrintEx(3LL, (__int64)"PopAdaptive:>>>>> %s session %u is %s\n", v7, a1, v6);
  v9 = 0;
  if ( v3 )
  {
    PopAcquireAdaptiveLock(0);
    if ( v2 )
    {
      byte_140C1F3A1 = 1;
    }
    else
    {
      byte_140C1F3A1 = 0;
      v9 = byte_140C1F3A2 == 0;
    }
    PopReleaseAdaptiveLock();
    v10 = v2 != 0;
    result = PopSetPowerSettingValueAcDc(&GUID_CONSOLE_LOCKED, 4u, &v10);
    if ( v9 )
      return PopNotifyConsoleUserPresent(0, 0xAu);
  }
  return result;
}
