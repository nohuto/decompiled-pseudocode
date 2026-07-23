/*
 * XREFs of sub_14085CAE8 @ 0x14085CAE8
 * Callers:
 *     sub_14085CA14 @ 0x14085CA14 (sub_14085CA14.c)
 *     sub_14085CA7C @ 0x14085CA7C (sub_14085CA7C.c)
 * Callees:
 *     sub_14085CB2C @ 0x14085CB2C (sub_14085CB2C.c)
 */

void __fastcall sub_14085CAE8(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  v1 = (_QWORD *)(a1 + 56);
  while ( (_QWORD *)*v1 != v1 )
  {
    v2 = (_QWORD *)v1[1];
    if ( (_QWORD *)*v2 != v1 || (v3 = (_QWORD *)v2[1], (_QWORD *)*v3 != v2) )
      __fastfail(3u);
    v1[1] = v3;
    *v3 = v1;
    sub_14085CB2C(v2);
  }
}
