/*
 * XREFs of sub_18009A59C @ 0x18009A59C
 * Callers:
 *     sub_180059988 @ 0x180059988 (sub_180059988.c)
 *     sub_180059F70 @ 0x180059F70 (sub_180059F70.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_18009A59C(_QWORD *a1)
{
  char *v2; // rcx

  *a1 = &Spectre::Engine::ConstantBufferGeneric::`vftable';
  v2 = (char *)a1[15];
  if ( v2 )
  {
    sub_180010884(v2, a1[17] - (_QWORD)v2);
    a1[15] = 0LL;
    a1[16] = 0LL;
    a1[17] = 0LL;
  }
  return sub_1800AC9A8(a1);
}
