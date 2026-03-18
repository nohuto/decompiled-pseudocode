/*
 * XREFs of MmGetMinWsPagePriority @ 0x1402FBDA0
 * Callers:
 *     XmEmulateStream @ 0x1403BE4E0 (XmEmulateStream.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiComputeProcessUserVa @ 0x1406B3118 (MiComputeProcessUserVa.c)
 *     MiCommitPageTablesForVad @ 0x1406F9470 (MiCommitPageTablesForVad.c)
 *     NtSetInformationThread @ 0x1407335B0 (NtSetInformationThread.c)
 *     MiReturnPageTablePageCommitment @ 0x140764990 (MiReturnPageTablePageCommitment.c)
 *     NtSetInformationProcess @ 0x140774540 (NtSetInformationProcess.c)
 *     PspUpdateJobEffectivePriorityLimits @ 0x1407D7294 (PspUpdateJobEffectivePriorityLimits.c)
 *     KiVerifyXcpt15 @ 0x140B17320 (KiVerifyXcpt15.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMinWsPagePriority()
{
  return 1LL;
}
