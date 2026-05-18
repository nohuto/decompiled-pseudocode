/*
 * XREFs of sub_18009EFAC @ 0x18009EFAC
 * Callers:
 *     sub_18009F050 @ 0x18009F050 (sub_18009F050.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

unsigned __int64 __fastcall sub_18009EFAC(_QWORD *a1)
{
  char *v2; // rcx

  *a1 = &Spectre::Engine::ColorTransform::`vftable';
  v2 = (char *)a1[14];
  if ( v2 )
  {
    sub_180010884(v2, (a1[16] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL);
    a1[14] = 0LL;
    a1[15] = 0LL;
    a1[16] = 0LL;
  }
  sub_180010910((__int64)(a1 + 12));
  return sub_180048280((__int64)a1);
}
