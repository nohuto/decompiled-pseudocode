/*
 * XREFs of TpWorkOnBehalfSetTicket @ 0x18004EC50
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetThreadWorkOnBehalfTicket @ 0x18004EF50 (RtlSetThreadWorkOnBehalfTicket.c)
 */

__int64 __fastcall TpWorkOnBehalfSetTicket(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = RtlSetThreadWorkOnBehalfTicket(a2);
  if ( (int)result >= 0 )
    *(_QWORD *)(a1 + 248) = *a2;
  return result;
}
