/*
 * XREFs of NtRevertContainerImpersonation @ 0x1405A4170
 * Callers:
 *     <none>
 * Callees:
 *     PspRevertContainerImpersonation @ 0x140259D1C (PspRevertContainerImpersonation.c)
 */

NTSTATUS NtRevertContainerImpersonation(void)
{
  return PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread());
}
