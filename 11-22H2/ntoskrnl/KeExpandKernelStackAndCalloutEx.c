/*
 * XREFs of KeExpandKernelStackAndCalloutEx @ 0x14022E6C0
 * Callers:
 *     sub_1407BBAA4 @ 0x1407BBAA4 (sub_1407BBAA4.c)
 *     IopIssueSystemEnvironmentRequest @ 0x1409510B8 (IopIssueSystemEnvironmentRequest.c)
 *     ViPtLogStackTrace @ 0x140AE005C (ViPtLogStackTrace.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x14022E6F0 (KeExpandKernelStackAndCalloutInternal.c)
 */

NTSTATUS __stdcall KeExpandKernelStackAndCalloutEx(
        PEXPAND_STACK_CALLOUT Callout,
        PVOID Parameter,
        SIZE_T Size,
        BOOLEAN Wait,
        PVOID Context)
{
  return KeExpandKernelStackAndCalloutInternal((ULONG_PTR)Callout, (ULONG_PTR)Parameter, (__int64)Context);
}
