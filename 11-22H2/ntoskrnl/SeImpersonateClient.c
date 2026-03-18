/*
 * XREFs of SeImpersonateClient @ 0x1409CEFF0
 * Callers:
 *     <none>
 * Callees:
 *     SeImpersonateClientEx @ 0x1407F6460 (SeImpersonateClientEx.c)
 */

void __stdcall SeImpersonateClient(PSECURITY_CLIENT_CONTEXT ClientContext, PETHREAD ServerThread)
{
  SeImpersonateClientEx(ClientContext, ServerThread);
}
