/*
 * XREFs of RtlGetSuiteMask @ 0x1800504F0
 * Callers:
 *     RtlGetVersion @ 0x18004ED20 (RtlGetVersion.c)
 *     SwitchedRtlGetVersion @ 0x180051CD0 (SwitchedRtlGetVersion.c)
 *     RtlQueryResourcePolicy @ 0x1800533F0 (RtlQueryResourcePolicy.c)
 *     RtlpActivateLowFragmentationHeap @ 0x180053710 (RtlpActivateLowFragmentationHeap.c)
 *     LdrpEnableParallelLoading @ 0x180074450 (LdrpEnableParallelLoading.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x18008E05C (RtlpQueryDiskSpeedPolicy.c)
 *     RtlInitializeHeapManager @ 0x1800B0C34 (RtlInitializeHeapManager.c)
 *     RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit @ 0x1800FF7F0 (RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x1800FF8E8 (RtlpHpOptIntoSegmentHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 */

ULONG RtlGetSuiteMask(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return *((_DWORD *)NtCurrentPeb()->SharedData + 5);
  else
    return MEMORY[0x7FFE02D0];
}
