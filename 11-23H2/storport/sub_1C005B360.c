/*
 * XREFs of sub_1C005B360 @ 0x1C005B360
 * Callers:
 *     sub_1C00366F4 @ 0x1C00366F4 (sub_1C00366F4.c)
 *     sub_1C005C694 @ 0x1C005C694 (sub_1C005C694.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C005B360(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 3221487621LL;
  v2 = v1 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( !v4 )
        return 3221487625LL;
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 2;
          if ( !v7 )
            return 3221487629LL;
          v8 = v7 - 1;
          if ( !v8 )
            return 2147745818LL;
          if ( v8 == 1 )
            return 3221487641LL;
        }
      }
    }
  }
  return 3221487627LL;
}
