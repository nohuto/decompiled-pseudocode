/*
 * XREFs of PopResetIdleTime @ 0x1403B4C48
 * Callers:
 *     PopSystemRequiredSet @ 0x1403B4C2C (PopSystemRequiredSet.c)
 *     PopSetSystemState @ 0x14058E40C (PopSetSystemState.c)
 *     PopUserPresentSet @ 0x14058E454 (PopUserPresentSet.c)
 * Callees:
 *     PopHandleSystemIdleReset @ 0x1403B4C78 (PopHandleSystemIdleReset.c)
 *     Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage @ 0x140411580 (Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage.c)
 */

__int64 __fastcall PopResetIdleTime(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = a1;
  KeGetCurrentIrql();
  if ( !PopPlatformAoAc )
    Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage(a1, a2);
  return PopHandleSystemIdleReset(v2);
}
