/*
 * XREFs of sub_180091930 @ 0x180091930
 * Callers:
 *     sub_18009C794 @ 0x18009C794 (sub_18009C794.c)
 *     sub_1800AE960 @ 0x1800AE960 (sub_1800AE960.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180091930(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  while ( a1 != a2 )
    *a3++ = *a1++;
  return a3;
}
