/*
 * XREFs of sub_18005BA14 @ 0x18005BA14
 * Callers:
 *     sub_18005A490 @ 0x18005A490 (sub_18005A490.c)
 * Callees:
 *     sub_18005D990 @ 0x18005D990 (sub_18005D990.c)
 *     sub_18005E124 @ 0x18005E124 (sub_18005E124.c)
 */

_QWORD *__fastcall sub_18005BA14(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  if ( (unsigned __int8)sub_18005E124() )
    sub_18005D990(a1);
  result = a2;
  *a2 = *(_QWORD *)(a1 + 1604);
  return result;
}
