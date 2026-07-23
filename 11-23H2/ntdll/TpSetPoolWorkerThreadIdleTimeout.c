/*
 * XREFs of TpSetPoolWorkerThreadIdleTimeout @ 0x18004B740
 * Callers:
 *     LdrpEnableParallelLoading @ 0x18004B644 (LdrpEnableParallelLoading.c)
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x1800A4460 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x180127248 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __fastcall TpSetPoolWorkerThreadIdleTimeout(__int64 a1, _PEB_LDR_DATA *Ldr, __int64 a3)
{
  _PEB_LDR_DATA *WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  WorkerFactoryInformation = Ldr;
  if ( a1 )
  {
    if ( (__int64)Ldr < 0 )
    {
      Ldr = NtCurrentPeb()->Ldr;
      if ( !Ldr->ShutdownInProgress )
        return NtSetInformationWorkerFactory(
                 *(HANDLE *)(a1 + 56),
                 WorkerFactoryIdleTimeout,
                 &WorkerFactoryInformation,
                 8u);
    }
  }
  TppRaiseInvalidParameter(a1, Ldr, a3);
  return -1073741811;
}
