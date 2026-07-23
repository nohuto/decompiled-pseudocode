/*
 * XREFs of sub_14036EDA8 @ 0x14036EDA8
 * Callers:
 *     sub_14036EBE8 @ 0x14036EBE8 (sub_14036EBE8.c)
 * Callees:
 *     sub_14036808C @ 0x14036808C (sub_14036808C.c)
 */

void __fastcall sub_14036EDA8(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdx
  _QWORD *v4; // rax

  v2 = (_QWORD *)(a1 + 72);
  while ( (_QWORD *)*v2 != v2 )
  {
    v3 = (_QWORD *)v2[1];
    if ( (_QWORD *)*v3 != v2 || (v4 = (_QWORD *)v3[1], (_QWORD *)*v4 != v3) )
      __fastfail(3u);
    v2[1] = v4;
    *v4 = v2;
    sub_14036808C(a1, (__int64)v3, 0x7FFFFFFFu, 1);
  }
}
