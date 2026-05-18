/*
 * XREFs of sub_18005BB38 @ 0x18005BB38
 * Callers:
 *     sub_18005A490 @ 0x18005A490 (sub_18005A490.c)
 * Callees:
 *     sub_18005D990 @ 0x18005D990 (sub_18005D990.c)
 *     sub_18005E124 @ 0x18005E124 (sub_18005E124.c)
 */

_QWORD *__fastcall sub_18005BB38(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  if ( (unsigned __int8)sub_18005E124() )
    sub_18005D990(a1);
  result = a2;
  *a2 = *(_QWORD *)(a1 + 1596);
  return result;
}
