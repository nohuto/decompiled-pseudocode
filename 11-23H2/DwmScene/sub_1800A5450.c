/*
 * XREFs of sub_1800A5450 @ 0x1800A5450
 * Callers:
 *     sub_1800A5558 @ 0x1800A5558 (sub_1800A5558.c)
 *     sub_1800A55A8 @ 0x1800A55A8 (sub_1800A55A8.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 */

_QWORD *__fastcall sub_1800A5450(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  result = *(_QWORD **)(a2 + 8);
  *result = 0LL;
  v3 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      result = (_QWORD *)sub_1800100E8(v3, 0x38uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
