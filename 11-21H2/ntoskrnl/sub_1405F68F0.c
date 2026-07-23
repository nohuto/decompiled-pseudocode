/*
 * XREFs of sub_1405F68F0 @ 0x1405F68F0
 * Callers:
 *     sub_140383138 @ 0x140383138 (sub_140383138.c)
 * Callees:
 *     sub_1405F6A08 @ 0x1405F6A08 (sub_1405F6A08.c)
 */

_QWORD *__fastcall sub_1405F68F0(__int64 a1, __int64 a2)
{
  _QWORD **v3; // rbx
  __int64 v5; // rdi
  _QWORD *v6; // r8
  _QWORD *v7; // rcx

  v3 = (_QWORD **)(a1 + 64);
  v5 = 0LL;
  while ( 1 )
  {
    v6 = v3[1];
    if ( v6 != v3 )
      break;
    if ( (int)sub_1405F6A08(a1, a2) < 0 )
      return (_QWORD *)v5;
  }
  v7 = *v3;
  *v3 = (_QWORD *)**v3;
  if ( v7 == v6 )
  {
    v3[1] = v3;
    *v3 = 0LL;
  }
  else
  {
    --*v6;
  }
  return v7;
}
