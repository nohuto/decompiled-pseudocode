/*
 * XREFs of sub_180058B60 @ 0x180058B60
 * Callers:
 *     sub_180058F80 @ 0x180058F80 (sub_180058F80.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

unsigned __int64 __fastcall sub_180058B60(_QWORD *a1)
{
  char *v2; // rcx

  *a1 = &Spectre::Engine::LightProbe::`vftable';
  sub_180010910((__int64)(a1 + 64));
  v2 = (char *)a1[59];
  if ( v2 )
  {
    sub_180010884(v2, a1[61] - (_QWORD)v2);
    a1[59] = 0LL;
    a1[60] = 0LL;
    a1[61] = 0LL;
  }
  sub_180010910((__int64)(a1 + 56));
  sub_180010910((__int64)(a1 + 54));
  return sub_180048280((__int64)a1);
}
