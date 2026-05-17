/*
 * XREFs of RtlClearThreadWorkOnBehalfTicket @ 0x1800356F0
 * Callers:
 *     TpWorkOnBehalfClearTicket @ 0x180034010 (TpWorkOnBehalfClearTicket.c)
 *     TppWorkerThread @ 0x180035760 (TppWorkerThread.c)
 *     TppCallbackPerformDeferredWork @ 0x18007E5C8 (TppCallbackPerformDeferredWork.c)
 * Callees:
 *     NtSetInformationThread @ 0x18009EF90 (NtSetInformationThread.c)
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
