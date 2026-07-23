/*
 * XREFs of sub_14069DCA0 @ 0x14069DCA0
 * Callers:
 *     sub_14069D480 @ 0x14069D480 (sub_14069D480.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14069DCA0(__int16 *a1, __int64 *a2)
{
  __int64 v3; // r8
  __int16 v4; // ax
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  char v7; // r10
  char v8; // al

  v3 = *a2;
  if ( !*a1 )
  {
    v3 -= 2LL;
    ++a1;
  }
  if ( !v3 )
    return 3221225485LL;
  while ( 1 )
  {
    v4 = *a1;
    v5 = 0LL;
    ++a1;
    v6 = 0LL;
    v7 = 0;
    v3 -= 2LL;
    if ( !v3 )
      goto LABEL_18;
    do
    {
      if ( !v4 )
        break;
      if ( v4 == 61 )
      {
        ++v5;
        if ( !v6 )
          v7 = 1;
      }
      v4 = *a1;
      ++v6;
      ++a1;
      v3 -= 2LL;
    }
    while ( v3 );
    if ( !v6 )
    {
LABEL_18:
      if ( !v4 )
        break;
    }
    if ( !v5 || v7 && v5 < 2 )
      return 3221225485LL;
    v8 = 0;
    if ( !v3 )
      goto LABEL_12;
  }
  if ( v3 )
    *a2 -= v3;
  v8 = 1;
LABEL_12:
  if ( v8 )
    return 0LL;
  else
    return 3221225485LL;
}
