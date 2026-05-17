/*
 * XREFs of RtlSetThreadWorkOnBehalfTicket @ 0x18004EF50
 * Callers:
 *     TpWorkOnBehalfSetTicket @ 0x18004EC50 (TpWorkOnBehalfSetTicket.c)
 *     TppWorkCallbackPrologRelease @ 0x18004EC88 (TppWorkCallbackPrologRelease.c)
 * Callees:
 *     NtSetInformationThread @ 0x18009EF90 (NtSetInformationThread.c)
 */

__int64 __fastcall RtlSetThreadWorkOnBehalfTicket(_QWORD *a1)
{
  __int64 result; // rax

  if ( !a1 )
    return 3221225485LL;
  if ( *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket == *a1 )
    return 0LL;
  result = NtSetInformationThread(-2LL, 44LL, a1);
  if ( (int)result >= 0 )
    *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *a1;
  return result;
}
