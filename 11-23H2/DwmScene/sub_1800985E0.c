/*
 * XREFs of sub_1800985E0 @ 0x1800985E0
 * Callers:
 *     sub_180098990 @ 0x180098990 (sub_180098990.c)
 *     sub_180098A44 @ 0x180098A44 (sub_180098A44.c)
 *     sub_180098AA0 @ 0x180098AA0 (sub_180098AA0.c)
 * Callees:
 *     sub_180098614 @ 0x180098614 (sub_180098614.c)
 */

_QWORD *__fastcall sub_1800985E0(__int64 a1, __int64 a2)
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
      result = (_QWORD *)sub_180098614();
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
