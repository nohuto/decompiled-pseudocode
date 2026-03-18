/*
 * XREFs of PopHandleSystemIdleReset @ 0x1403B4A98
 * Callers:
 *     PopResetIdleTime @ 0x1403B4A68 (PopResetIdleTime.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x14032CB64 (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x14032CBB8 (PopCheckForWork.c)
 *     Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage @ 0x140411374 (Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage.c)
 */

__int64 __fastcall PopHandleSystemIdleReset(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 result; // rax

  v2 = a1;
  if ( !PopPlatformAoAc )
    result = Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage(a1, a2);
  if ( PopIdleScanInterval )
  {
    if ( v2 == 2 )
    {
      _InterlockedOr(&PopPendingSystemIdleResetMask, 4u);
      PopGetPolicyWorker(128);
      return PopCheckForWork();
    }
  }
  return result;
}
