/*
 * XREFs of KeExpandKernelStackAndCalloutEx @ 0x14022E7B0
 * Callers:
 *     sub_1407BB7E4 @ 0x1407BB7E4 (sub_1407BB7E4.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140951208 (IopIssueSystemEnvironmentRequest.c)
 *     ViPtLogStackTrace @ 0x140ADF07C (ViPtLogStackTrace.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x14022E7E0 (KeExpandKernelStackAndCalloutInternal.c)
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
