/*
 * XREFs of PopDirectedDripsClearDisengageReason @ 0x14035E638
 * Callers:
 *     PnpDeviceActionWorker @ 0x140359430 (PnpDeviceActionWorker.c)
 *     PnpRemoveDeviceActionRequests @ 0x1403D6540 (PnpRemoveDeviceActionRequests.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x14056265C (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PopDirectedDripsDisengageTimerCallback @ 0x140586E90 (PopDirectedDripsDisengageTimerCallback.c)
 *     PopDirectedDripsNotify @ 0x1408754E4 (PopDirectedDripsNotify.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x140993734 (PopPowerAggregatorEngageModernStandby.c)
 *     PopDripsWatchdogCallbackWorker @ 0x14099C190 (PopDripsWatchdogCallbackWorker.c)
 * Callees:
 *     PopQueueDirectedDripsWork @ 0x14035E6A4 (PopQueueDirectedDripsWork.c)
 */

__int64 __fastcall PopDirectedDripsClearDisengageReason(char a1)
{
  int v1; // edx
  signed __int32 v2; // r8d
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // ett

  v1 = 1 << a1;
  _m_prefetchw(&dword_140C3F164);
  v2 = _InterlockedAnd(&dword_140C3F164, ~(1 << a1));
  _m_prefetchw(&PopDirectedDripsState);
  LODWORD(result) = PopDirectedDripsState.HandleAttributes;
  do
  {
    v4 = (unsigned int)result;
    v5 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&PopDirectedDripsState,
                             result,
                             result);
  }
  while ( v5 != (_DWORD)result );
  if ( (result & 1) != 0 && (v2 & v1) != 0 )
    return PopQueueDirectedDripsWork(v4, 2LL);
  return result;
}
