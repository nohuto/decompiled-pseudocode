/*
 * XREFs of sub_180062CD4 @ 0x180062CD4
 * Callers:
 *     sub_18006405C @ 0x18006405C (sub_18006405C.c)
 *     sub_180064104 @ 0x180064104 (sub_180064104.c)
 *     sub_18006ED08 @ 0x18006ED08 (sub_18006ED08.c)
 * Callees:
 *     sub_180062D08 @ 0x180062D08 (sub_180062D08.c)
 */

_QWORD *__fastcall sub_180062CD4(__int64 a1, __int64 a2)
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
      result = (_QWORD *)sub_180062D08();
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
