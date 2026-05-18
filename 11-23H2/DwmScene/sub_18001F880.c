/*
 * XREFs of sub_18001F880 @ 0x18001F880
 * Callers:
 *     sub_1800344A0 @ 0x1800344A0 (sub_1800344A0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18001F880(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *result; // rax

  v2 = a1;
  if ( a1[3] >= 8uLL )
    v2 = (_QWORD *)*a1;
  result = a2;
  *a2 = (char *)v2 + 2 * a1[2];
  return result;
}
