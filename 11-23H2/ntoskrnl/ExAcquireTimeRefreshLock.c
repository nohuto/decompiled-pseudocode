/*
 * XREFs of ExAcquireTimeRefreshLock @ 0x14075F954
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x140201B70 (ExCleanTimerResolutionRequest.c)
 *     ExpQuerySystemInformation @ 0x140726850 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x14075EE30 (NtSetSystemInformation.c)
 *     NtSetTimerResolution @ 0x1407DCB20 (NtSetTimerResolution.c)
 *     PspSetProcessTimerResolutionPolicy @ 0x1407DFC00 (PspSetProcessTimerResolutionPolicy.c)
 *     ExpRefreshSystemTime @ 0x14083EAF4 (ExpRefreshSystemTime.c)
 *     ExpReadLeapSecondData @ 0x140853714 (ExpReadLeapSecondData.c)
 *     PopPolicyTimeChange @ 0x140994540 (PopPolicyTimeChange.c)
 *     ExpSetTimeZoneInformation @ 0x1409F762C (ExpSetTimeZoneInformation.c)
 *     ExTraceTimerResolution @ 0x1409F7BA8 (ExTraceTimerResolution.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F80B8 (ExpTimeZoneInitSiloState.c)
 *     NtSetSystemTime @ 0x1409F8290 (NtSetSystemTime.c)
 *     ExpTimeRefreshWork @ 0x140A92380 (ExpTimeRefreshWork.c)
 *     PoBroadcastSystemState @ 0x140AA6A68 (PoBroadcastSystemState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 *     KdpTimeSlipWork @ 0x140AB0480 (KdpTimeSlipWork.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390E0 (ExAcquireResourceExclusiveLite.c)
 */

char __fastcall ExAcquireTimeRefreshLock(BOOLEAN a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireResourceExclusiveLite(&ExpTimeRefreshLock, a1) )
    return 1;
  KeLeaveCriticalRegion();
  return 0;
}
