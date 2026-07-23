/*
 * XREFs of MmGetMinWsPagePriority @ 0x1402FC030
 * Callers:
 *     XmEmulateStream @ 0x1403BE6C0 (XmEmulateStream.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiComputeProcessUserVa @ 0x1406B3148 (MiComputeProcessUserVa.c)
 *     MiCommitPageTablesForVad @ 0x1406F9680 (MiCommitPageTablesForVad.c)
 *     NtSetInformationThread @ 0x1407337A0 (NtSetInformationThread.c)
 *     MiReturnPageTablePageCommitment @ 0x140764B80 (MiReturnPageTablePageCommitment.c)
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 *     PspUpdateJobEffectivePriorityLimits @ 0x1407D7564 (PspUpdateJobEffectivePriorityLimits.c)
 *     KiVerifyXcpt15 @ 0x140B17320 (KiVerifyXcpt15.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMinWsPagePriority()
{
  return 1LL;
}
