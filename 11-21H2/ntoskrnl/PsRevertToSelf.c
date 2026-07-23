/*
 * XREFs of PsRevertToSelf @ 0x1407F6CB0
 * Callers:
 *     sub_140713F8C @ 0x140713F8C (sub_140713F8C.c)
 * Callees:
 *     PsImpersonateClient @ 0x1407AF1B0 (PsImpersonateClient.c)
 */

void PsRevertToSelf(void)
{
  PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
}
