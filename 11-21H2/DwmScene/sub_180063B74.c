/*
 * XREFs of sub_180063B74 @ 0x180063B74
 * Callers:
 *     sub_180062060 @ 0x180062060 (sub_180062060.c)
 * Callees:
 *     sub_180065D00 @ 0x180065D00 (sub_180065D00.c)
 *     sub_1800664E8 @ 0x1800664E8 (sub_1800664E8.c)
 */

_QWORD *__fastcall sub_180063B74(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  if ( (unsigned __int8)sub_1800664E8() )
    sub_180065D00(a1);
  result = a2;
  *a2 = *(_QWORD *)(a1 + 1604);
  return result;
}
