/*
 * XREFs of RtlClearThreadWorkOnBehalfTicket @ 0x180035590
 * Callers:
 *     TpWorkOnBehalfClearTicket @ 0x180033EB0 (TpWorkOnBehalfClearTicket.c)
 *     TppWorkerThread @ 0x180035600 (TppWorkerThread.c)
 *     TppCallbackPerformDeferredWork @ 0x18007EC38 (TppCallbackPerformDeferredWork.c)
 * Callees:
 *     NtSetInformationThread @ 0x1800A1050 (NtSetInformationThread.c)
 */

__int64 RtlClearThreadWorkOnBehalfTicket()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( !*(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket )
    return 0LL;
  result = NtSetInformationThread(-2LL, 44LL, &v1);
  if ( (int)result >= 0 )
    *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = v1;
  return result;
}
