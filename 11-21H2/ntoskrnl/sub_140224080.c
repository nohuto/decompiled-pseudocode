/*
 * XREFs of sub_140224080 @ 0x140224080
 * Callers:
 *     sub_140223F8C @ 0x140223F8C (sub_140223F8C.c)
 *     sub_1403882F0 @ 0x1403882F0 (sub_1403882F0.c)
 *     sub_1403883BC @ 0x1403883BC (sub_1403883BC.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_140224080(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8

  v2 = (_QWORD *)*a1;
  v3 = 0LL;
  while ( v2 != a1 )
  {
    if ( v2[2] == a2 )
      return v2;
    v2 = (_QWORD *)*v2;
  }
  return (_QWORD *)v3;
}
