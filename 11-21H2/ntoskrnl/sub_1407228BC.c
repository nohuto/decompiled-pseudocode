/*
 * XREFs of sub_1407228BC @ 0x1407228BC
 * Callers:
 *     sub_140722584 @ 0x140722584 (sub_140722584.c)
 *     sub_1407227B0 @ 0x1407227B0 (sub_1407227B0.c)
 *     sub_140722890 @ 0x140722890 (sub_140722890.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x140725730 (ObDereferenceSecurityDescriptor.c)
 */

signed __int64 __fastcall sub_1407228BC(__int64 a1, __int64 a2)
{
  signed __int64 result; // rax
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a2 + 40));
  result = *(_QWORD *)(a2 + 40);
  if ( (a1 ^ (unsigned __int64)result) >= 0xF )
    return ObDereferenceSecurityDescriptor(a1, 1LL);
  while ( 1 )
  {
    v3 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 40), result + 1, result);
    if ( v3 == result )
      break;
    if ( (a1 ^ (unsigned __int64)result) >= 0xF )
      return ObDereferenceSecurityDescriptor(a1, 1LL);
  }
  return result;
}
