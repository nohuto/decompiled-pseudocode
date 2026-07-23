/*
 * XREFs of NtRevertContainerImpersonation @ 0x1405A4650
 * Callers:
 *     <none>
 * Callees:
 *     PspRevertContainerImpersonation @ 0x14025A0CC (PspRevertContainerImpersonation.c)
 */

NTSTATUS NtRevertContainerImpersonation(void)
{
  return PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread());
}
