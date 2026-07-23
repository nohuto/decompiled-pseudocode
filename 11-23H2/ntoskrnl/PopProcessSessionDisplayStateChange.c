/*
 * XREFs of PopProcessSessionDisplayStateChange @ 0x1407A93C8
 * Callers:
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 *     PopMonitorInvocation @ 0x1407A911C (PopMonitorInvocation.c)
 * Callees:
 *     Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage @ 0x140411580 (Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage.c)
 *     TtmIsEnabled @ 0x1407A6280 (TtmIsEnabled.c)
 *     PopTriggerMonitorPowerEvent @ 0x1407A942C (PopTriggerMonitorPowerEvent.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x1407AA20C (PopDisarmIdlePhaseWatchdog.c)
 *     PopArmIdlePhaseWatchdog @ 0x140883AB4 (PopArmIdlePhaseWatchdog.c)
 */

__int64 __fastcall PopProcessSessionDisplayStateChange(char a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx

  v2 = 0;
  if ( !PopPlatformAoAc )
    Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage();
  if ( a1 )
    PopDisarmIdlePhaseWatchdog();
  else
    PopArmIdlePhaseWatchdog(a2);
  if ( !TtmIsEnabled() )
  {
    LOBYTE(v5) = a1;
    return (unsigned int)PopTriggerMonitorPowerEvent(v5, a2);
  }
  return v2;
}
