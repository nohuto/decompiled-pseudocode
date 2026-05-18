/*
 * XREFs of sub_180037F0C @ 0x180037F0C
 * Callers:
 *     sub_180033CA0 @ 0x180033CA0 (sub_180033CA0.c)
 * Callees:
 *     sub_180057A3C @ 0x180057A3C (sub_180057A3C.c)
 *     sub_18005845C @ 0x18005845C (sub_18005845C.c)
 */

void __fastcall sub_180037F0C(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *i; // rbx

  v1 = *(_QWORD **)(a1 + 168);
  for ( i = (_QWORD *)*v1; i != v1; i = (_QWORD *)*i )
  {
    if ( (unsigned int)sub_180057A3C(i[2]) == 1 )
      sub_18005845C(i[2]);
  }
}
