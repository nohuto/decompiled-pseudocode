/*
 * XREFs of sub_180032894 @ 0x180032894
 * Callers:
 *     sub_180032C6C @ 0x180032C6C (sub_180032C6C.c)
 *     sub_180033018 @ 0x180033018 (sub_180033018.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180030E20 @ 0x180030E20 (sub_180030E20.c)
 *     sub_180032D74 @ 0x180032D74 (sub_180032D74.c)
 */

__int64 __fastcall sub_180032894(__int64 *a1)
{
  __int64 v2; // rcx
  char *v3; // rsi
  char *v4; // rbx

  v2 = *a1;
  v3 = *(char **)(v2 + 8);
  if ( !v3[25] )
  {
    do
    {
      sub_180030E20((__int64)a1, (__int64)a1, *((char **)v3 + 2));
      v4 = v3;
      v3 = *(char **)v3;
      sub_180032D74(v4 + 32);
      sub_180010884(v4, 0x48uLL);
    }
    while ( !v3[25] );
    v2 = *a1;
  }
  return sub_180010884((char *)v2, 0x48uLL);
}
