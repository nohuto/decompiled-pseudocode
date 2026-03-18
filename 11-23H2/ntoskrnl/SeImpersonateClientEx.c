/*
 * XREFs of SeImpersonateClientEx @ 0x1407F5DF0
 * Callers:
 *     NtAlpcImpersonateClientOfPort @ 0x14071CBA0 (NtAlpcImpersonateClientOfPort.c)
 *     NtImpersonateThread @ 0x1407F5C80 (NtImpersonateThread.c)
 *     EtwpDelayCreate @ 0x1407F6A54 (EtwpDelayCreate.c)
 *     SeImpersonateClient @ 0x1409CEF40 (SeImpersonateClient.c)
 * Callees:
 *     PsImpersonateClient @ 0x140734A30 (PsImpersonateClient.c)
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
