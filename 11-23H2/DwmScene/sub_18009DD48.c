/*
 * XREFs of sub_18009DD48 @ 0x18009DD48
 * Callers:
 *     sub_18009DBD0 @ 0x18009DBD0 (sub_18009DBD0.c)
 *     sub_18009DDF0 @ 0x18009DDF0 (sub_18009DDF0.c)
 * Callees:
 *     sub_18003B5D8 @ 0x18003B5D8 (sub_18003B5D8.c)
 */

_QWORD *__fastcall sub_18009DD48(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  __int64 v5; // rbp

  v3 = a2 - (_QWORD)a1;
  v4 = a1;
  v5 = 12LL;
  do
  {
    sub_18003B5D8(v4, (_QWORD *)((char *)v4 + v3));
    v4 += 2;
    --v5;
  }
  while ( v5 );
  return a1;
}
