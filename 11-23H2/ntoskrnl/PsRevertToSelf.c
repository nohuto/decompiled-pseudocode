/*
 * XREFs of PsRevertToSelf @ 0x1409B1CB0
 * Callers:
 *     <none>
 * Callees:
 *     PsImpersonateClient @ 0x140734A30 (PsImpersonateClient.c)
 */

void PsRevertToSelf(void)
{
  PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
}
