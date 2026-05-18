/*
 * XREFs of sub_180032CA8 @ 0x180032CA8
 * Callers:
 *     sub_18010469E @ 0x18010469E (sub_18010469E.c)
 *     sub_18010CBB5 @ 0x18010CBB5 (sub_18010CBB5.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180030FC8 @ 0x180030FC8 (sub_180030FC8.c)
 */

__int64 __fastcall sub_180032CA8(__int64 *a1)
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
      sub_180030FC8((__int64)a1, (__int64)a1, *((char **)v3 + 2));
      v4 = v3;
      v3 = *(char **)v3;
      sub_180010884(v4, 0x30uLL);
    }
    while ( !v3[25] );
    v2 = *a1;
  }
  return sub_180010884((char *)v2, 0x30uLL);
}
