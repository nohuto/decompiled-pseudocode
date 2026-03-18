/*
 * XREFs of PsGetThreadExitStatus @ 0x1406E2920
 * Callers:
 *     NtQueryInformationThread @ 0x1407BF670 (NtQueryInformationThread.c)
 *     MiInjectThreadForHotPatch @ 0x140973B80 (MiInjectThreadForHotPatch.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 */

NTSTATUS __stdcall PsGetThreadExitStatus(PETHREAD Thread)
{
  struct _EX_RUNDOWN_REF *p_WaitStatus; // rdi

  p_WaitStatus = (struct _EX_RUNDOWN_REF *)&Thread[1].WaitStatus;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
    return Thread[1].Timer.DueTime.LowPart;
  ExReleaseRundownProtection(p_WaitStatus);
  return 259;
}
