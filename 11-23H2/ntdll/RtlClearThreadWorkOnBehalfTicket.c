/*
 * XREFs of RtlClearThreadWorkOnBehalfTicket @ 0x180035590
 * Callers:
 *     TpWorkOnBehalfClearTicket @ 0x180033EB0 (TpWorkOnBehalfClearTicket.c)
 *     TppWorkerThread @ 0x180035600 (TppWorkerThread.c)
 *     TppCallbackPerformDeferredWork @ 0x18007EC38 (TppCallbackPerformDeferredWork.c)
 * Callees:
 *     NtSetInformationThread @ 0x1800A1050 (NtSetInformationThread.c)
 */

NTSTATUS RtlClearThreadWorkOnBehalfTicket()
{
  NTSTATUS result; // eax
  __int64 ThreadInformation; // [rsp+30h] [rbp+8h] BYREF

  ThreadInformation = 0LL;
  if ( !*(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket )
    return 0;
  result = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadWorkOnBehalfTicket, &ThreadInformation, 8u);
  if ( result >= 0 )
    *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = ThreadInformation;
  return result;
}
