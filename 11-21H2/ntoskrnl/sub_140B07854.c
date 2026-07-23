/*
 * XREFs of sub_140B07854 @ 0x140B07854
 * Callers:
 *     sub_140B077D4 @ 0x140B077D4 (sub_140B077D4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140B07854(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  if ( a1 > 8 )
  {
    v6 = a1 - 9;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( !v7 )
        return 1LL;
      v8 = v7 - 1;
      if ( !v8 )
        return 15LL;
      v9 = v8 - 1;
      if ( !v9 )
        return 16LL;
      if ( v9 != 1 )
        return 0LL;
      return 12LL;
    }
    return 4LL;
  }
  if ( a1 == 8 )
    return 14LL;
  if ( !a1 )
    return 4LL;
  v1 = a1 - 1;
  if ( !v1 )
    return 5LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 6LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 8LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 9LL;
  if ( v4 != 3 )
    return 0LL;
  return 2LL;
}
