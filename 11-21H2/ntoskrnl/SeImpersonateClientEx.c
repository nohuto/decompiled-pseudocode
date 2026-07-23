/*
 * XREFs of SeImpersonateClientEx @ 0x1406BFE80
 * Callers:
 *     sub_1406BFD10 @ 0x1406BFD10 (sub_1406BFD10.c)
 *     sub_1406F0C9C @ 0x1406F0C9C (sub_1406F0C9C.c)
 *     sub_1407B0A20 @ 0x1407B0A20 (sub_1407B0A20.c)
 *     SeImpersonateClient @ 0x1409CC010 (SeImpersonateClient.c)
 * Callees:
 *     PsImpersonateClient @ 0x1407AF1B0 (PsImpersonateClient.c)
 */

NTSTATUS __stdcall SeImpersonateClientEx(PSECURITY_CLIENT_CONTEXT ClientContext, PETHREAD ServerThread)
{
  struct _KTHREAD *CurrentThread; // r10
  BOOLEAN DirectAccessEffectiveOnly; // r9

  CurrentThread = ServerThread;
  if ( ClientContext->DirectlyAccessClientToken )
    DirectAccessEffectiveOnly = ClientContext->DirectAccessEffectiveOnly;
  else
    DirectAccessEffectiveOnly = ClientContext->SecurityQos.EffectiveOnly;
  if ( !ServerThread )
    CurrentThread = KeGetCurrentThread();
  return PsImpersonateClient(
           CurrentThread,
           ClientContext->ClientToken,
           1u,
           DirectAccessEffectiveOnly,
           ClientContext->SecurityQos.ImpersonationLevel);
}
