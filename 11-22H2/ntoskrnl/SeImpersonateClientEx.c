/*
 * XREFs of SeImpersonateClientEx @ 0x1407F6460
 * Callers:
 *     NtAlpcImpersonateClientOfPort @ 0x14071CC10 (NtAlpcImpersonateClientOfPort.c)
 *     NtImpersonateThread @ 0x1407F62F0 (NtImpersonateThread.c)
 *     EtwpDelayCreate @ 0x1407F70C4 (EtwpDelayCreate.c)
 *     SeImpersonateClient @ 0x1409CEFF0 (SeImpersonateClient.c)
 * Callees:
 *     PsImpersonateClient @ 0x140734F30 (PsImpersonateClient.c)
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
