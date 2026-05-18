/*
 * XREFs of sub_1800DD720 @ 0x1800DD720
 * Callers:
 *     sub_1800DE124 @ 0x1800DE124 (sub_1800DE124.c)
 *     sub_1800DE284 @ 0x1800DE284 (sub_1800DE284.c)
 *     sub_1800DE348 @ 0x1800DE348 (sub_1800DE348.c)
 * Callees:
 *     sub_1800DD754 @ 0x1800DD754 (sub_1800DD754.c)
 */

_QWORD *__fastcall sub_1800DD720(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rbx

  result = *(_QWORD **)(a2 + 8);
  *result = 0LL;
  v3 = *(_QWORD **)a2;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      result = (_QWORD *)sub_1800DD754(a1, v3);
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
