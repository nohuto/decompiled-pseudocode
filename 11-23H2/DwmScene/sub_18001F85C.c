/*
 * XREFs of sub_18001F85C @ 0x18001F85C
 * Callers:
 *     sub_1800902BC @ 0x1800902BC (sub_1800902BC.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18001F85C(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *result; // rax

  v2 = a1;
  if ( a1[3] >= 0x10uLL )
    v2 = (_QWORD *)*a1;
  result = a2;
  *a2 = (char *)v2 + a1[2];
  return result;
}
