/*
 * XREFs of sub_1C003B5E0 @ 0x1C003B5E0
 * Callers:
 *     sub_1C00A6E08 @ 0x1C00A6E08 (sub_1C00A6E08.c)
 *     sub_1C00AAB80 @ 0x1C00AAB80 (sub_1C00AAB80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C003B5E0(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( !a1 )
    return 0LL;
  v1 = a1 - 1;
  if ( !v1 )
    return 3221225507LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 3221225485LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 3221225485LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 3221266432LL;
  v5 = v4 - 1;
  if ( !v5 )
    return 3221225485LL;
  if ( v5 == 1 )
    return 2147483653LL;
  return 3221225473LL;
}
