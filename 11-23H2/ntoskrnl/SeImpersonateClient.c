/*
 * XREFs of SeImpersonateClient @ 0x1409CF140
 * Callers:
 *     <none>
 * Callees:
 *     SeImpersonateClientEx @ 0x1407F60C0 (SeImpersonateClientEx.c)
 */

void __stdcall SeImpersonateClient(PSECURITY_CLIENT_CONTEXT ClientContext, PETHREAD ServerThread)
{
  SeImpersonateClientEx(ClientContext, ServerThread);
}
