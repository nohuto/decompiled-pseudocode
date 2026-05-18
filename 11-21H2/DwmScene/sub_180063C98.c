/*
 * XREFs of sub_180063C98 @ 0x180063C98
 * Callers:
 *     sub_180062060 @ 0x180062060 (sub_180062060.c)
 * Callees:
 *     sub_180065D00 @ 0x180065D00 (sub_180065D00.c)
 *     sub_1800664E8 @ 0x1800664E8 (sub_1800664E8.c)
 */

_QWORD *__fastcall sub_180063C98(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  if ( (unsigned __int8)sub_1800664E8() )
    sub_180065D00(a1);
  result = a2;
  *a2 = *(_QWORD *)(a1 + 1596);
  return result;
}
