/*
 * XREFs of RtlGetSuiteMask @ 0x18004A560
 * Callers:
 *     RtlGetVersion @ 0x18002F7F0 (RtlGetVersion.c)
 *     RtlpActivateLowFragmentationHeap @ 0x180049ADC (RtlpActivateLowFragmentationHeap.c)
 *     RtlQueryResourcePolicy @ 0x180049E30 (RtlQueryResourcePolicy.c)
 *     SwitchedRtlGetVersion @ 0x18004A378 (SwitchedRtlGetVersion.c)
 *     LdrpEnableParallelLoading @ 0x18004B7A4 (LdrpEnableParallelLoading.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x180088C00 (RtlpQueryDiskSpeedPolicy.c)
 *     RtlInitializeHeapManager @ 0x1800AE4B8 (RtlInitializeHeapManager.c)
 *     RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit @ 0x1800FF4F0 (RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x1800FF514 (RtlpHpOptIntoSegmentHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 */

ULONG RtlGetSuiteMask(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return *((_DWORD *)NtCurrentPeb()->SharedData + 5);
  else
    return MEMORY[0x7FFE02D0];
}
