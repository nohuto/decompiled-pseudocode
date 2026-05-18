/*
 * XREFs of sub_1800DEF40 @ 0x1800DEF40
 * Callers:
 *     sub_18010CB9C @ 0x18010CB9C (sub_18010CB9C.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800DE9B0 @ 0x1800DE9B0 (sub_1800DE9B0.c)
 */

__int64 __fastcall sub_1800DEF40(__int64 *a1)
{
  __int64 v2; // rcx
  char *v3; // rbx
  char *v4; // rcx

  v2 = *a1;
  v3 = *(char **)(v2 + 8);
  if ( !v3[25] )
  {
    do
    {
      sub_1800DE9B0((__int64)a1, (__int64)a1, *((char **)v3 + 2));
      v4 = v3;
      v3 = *(char **)v3;
      sub_180010884(v4, 0x48uLL);
    }
    while ( !v3[25] );
    v2 = *a1;
  }
  return sub_180010884((char *)v2, 0x48uLL);
}
