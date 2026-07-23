/*
 * XREFs of PsRevertToSelf @ 0x1409B1EB0
 * Callers:
 *     <none>
 * Callees:
 *     PsImpersonateClient @ 0x140734C20 (PsImpersonateClient.c)
 */

void PsRevertToSelf(void)
{
  PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
}
