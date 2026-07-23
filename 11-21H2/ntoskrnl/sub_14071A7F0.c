/*
 * XREFs of sub_14071A7F0 @ 0x14071A7F0
 * Callers:
 *     sub_14071C288 @ 0x14071C288 (sub_14071C288.c)
 *     sub_14079FD44 @ 0x14079FD44 (sub_14079FD44.c)
 * Callees:
 *     sub_14071A83C @ 0x14071A83C (sub_14071A83C.c)
 */

_QWORD *__fastcall sub_14071A7F0(__int64 a1, __int64 a2)
{
  _QWORD **v2; // rcx
  _QWORD *result; // rax
  _QWORD *v4; // rcx
  __int64 v5; // r8

  v2 = (_QWORD **)(a1 + 32);
  result = *v2;
  if ( *v2 != v2 )
  {
    v4 = result - 4;
    v5 = *(result - 4);
    if ( *(_QWORD **)(v5 + 8) != result - 4 || (result = (_QWORD *)v4[1], (_QWORD *)*result != v4) )
      __fastfail(3u);
    *result = v5;
    *(_QWORD *)(v5 + 8) = result;
    if ( a2 )
      return (_QWORD *)sub_14071A83C();
  }
  return result;
}
