/*
 * XREFs of ExAcquireTimeRefreshLock @ 0x14075FB44
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x140201B70 (ExCleanTimerResolutionRequest.c)
 *     ExpQuerySystemInformation @ 0x140726A50 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x14075F020 (NtSetSystemInformation.c)
 *     NtSetTimerResolution @ 0x1407DCDF0 (NtSetTimerResolution.c)
 *     PspSetProcessTimerResolutionPolicy @ 0x1407DFED0 (PspSetProcessTimerResolutionPolicy.c)
 *     ExpRefreshSystemTime @ 0x14083EDF4 (ExpRefreshSystemTime.c)
 *     ExpReadLeapSecondData @ 0x140853A14 (ExpReadLeapSecondData.c)
 *     PopPolicyTimeChange @ 0x140994740 (PopPolicyTimeChange.c)
 *     ExpSetTimeZoneInformation @ 0x1409F78BC (ExpSetTimeZoneInformation.c)
 *     ExTraceTimerResolution @ 0x1409F7E38 (ExTraceTimerResolution.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F8348 (ExpTimeZoneInitSiloState.c)
 *     NtSetSystemTime @ 0x1409F8520 (NtSetSystemTime.c)
 *     ExpTimeRefreshWork @ 0x140A92200 (ExpTimeRefreshWork.c)
 *     PoBroadcastSystemState @ 0x140AA68D8 (PoBroadcastSystemState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 *     KdpTimeSlipWork @ 0x140AB0480 (KdpTimeSlipWork.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
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
