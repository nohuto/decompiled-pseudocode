/*
 * XREFs of ExReleaseTimeRefreshLock @ 0x14075FE40
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x140201B70 (ExCleanTimerResolutionRequest.c)
 *     ExpTimeRefreshWork @ 0x140A920C0 (ExpTimeRefreshWork.c)
 *     PoBroadcastSystemState @ 0x140AA6B28 (PoBroadcastSystemState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 *     KdpTimeSlipWork @ 0x140AB1480 (KdpTimeSlipWork.c)
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 */

void ExReleaseTimeRefreshLock()
{
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
