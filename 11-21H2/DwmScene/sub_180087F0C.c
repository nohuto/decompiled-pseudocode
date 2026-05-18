/*
 * XREFs of sub_180087F0C @ 0x180087F0C
 * Callers:
 *     sub_180119A90 @ 0x180119A90 (sub_180119A90.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180087E74 @ 0x180087E74 (sub_180087E74.c)
 *     sub_180087FA4 @ 0x180087FA4 (sub_180087FA4.c)
 */

__int64 __fastcall sub_180087F0C(__int64 *a1)
{
  __int64 v2; // rcx
  char *v3; // rdi
  char *v4; // rbx

  v2 = *a1;
  v3 = *(char **)(v2 + 8);
  if ( !v3[25] )
  {
    do
    {
      sub_180087E74((__int64)a1, (__int64)a1, *((char **)v3 + 2));
      v4 = v3;
      v3 = *(char **)v3;
      sub_180087FA4(v4 + 40);
      sub_180010884(v4, 0x38uLL);
    }
    while ( !v3[25] );
    v2 = *a1;
  }
  return sub_180010884((char *)v2, 0x38uLL);
}
