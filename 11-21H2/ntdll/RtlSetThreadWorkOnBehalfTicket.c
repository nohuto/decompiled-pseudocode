/*
 * XREFs of RtlSetThreadWorkOnBehalfTicket @ 0x18006D4D0
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationThread @ 0x1800A4210 (NtSetInformationThread.c)
 */

__int64 __fastcall RtlSetThreadWorkOnBehalfTicket(_QWORD *a1)
{
  __int64 result; // rax

  if ( !a1 )
    return 3221225485LL;
  if ( *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket == *a1 )
    return 0LL;
  result = NtSetInformationThread(-2LL, 44LL, a1, 8LL);
  if ( (int)result >= 0 )
    *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *a1;
  return result;
}
