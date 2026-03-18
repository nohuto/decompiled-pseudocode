/*
 * XREFs of KeExpandKernelStackAndCalloutEx @ 0x14022E6A0
 * Callers:
 *     sub_1407BB514 @ 0x1407BB514 (sub_1407BB514.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140951008 (IopIssueSystemEnvironmentRequest.c)
 *     ViPtLogStackTrace @ 0x140ADF08C (ViPtLogStackTrace.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x14022E6D0 (KeExpandKernelStackAndCalloutInternal.c)
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
