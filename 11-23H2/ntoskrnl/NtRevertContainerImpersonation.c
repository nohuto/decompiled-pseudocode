/*
 * XREFs of NtRevertContainerImpersonation @ 0x1405A40E0
 * Callers:
 *     <none>
 * Callees:
 *     PspRevertContainerImpersonation @ 0x140259E3C (PspRevertContainerImpersonation.c)
 */

__int64 NtRevertContainerImpersonation()
{
  return PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread());
}
