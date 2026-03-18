/*
 * XREFs of SeImpersonateClient @ 0x1409CEF40
 * Callers:
 *     <none>
 * Callees:
 *     SeImpersonateClientEx @ 0x1407F5DF0 (SeImpersonateClientEx.c)
 */

void __stdcall SeImpersonateClient(PSECURITY_CLIENT_CONTEXT ClientContext, PETHREAD ServerThread)
{
  SeImpersonateClientEx(ClientContext, ServerThread);
}
