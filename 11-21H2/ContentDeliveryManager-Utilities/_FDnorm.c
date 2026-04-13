/*
 * XREFs of _FDnorm @ 0x180020CB0
 * Callers:
 *     _FDscale @ 0x18000B91C (_FDscale.c)
 *     _FDunscale @ 0x180020EF0 (_FDunscale.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FDnorm(unsigned __int16 *a1)
{
  __int16 v2; // r11
  unsigned __int16 v3; // r10
  __int16 v4; // dx
  unsigned __int16 v5; // ax
  __int16 v6; // r9
  unsigned __int16 i; // dx
  int v8; // kr00_4
  unsigned __int16 v9; // cx
  __int64 result; // rax

  v2 = a1[1] & 0x8000;
  v3 = 1;
  v4 = a1[1] & 0x7F;
  if ( v4 || *a1 )
  {
    v5 = a1[1] & 0x7F;
    if ( !v4 )
    {
      v5 = *a1;
      v3 = -15;
      v4 = *a1;
      *a1 = 0;
    }
    v6 = v4;
    for ( i = v5; i < 0x80u; v6 = i )
    {
      v8 = 2 * *a1;
      i = HIWORD(v8) | (2 * v6);
      *a1 = v8;
      --v3;
    }
    if ( i >= 0x100u )
    {
      i = v6;
      do
      {
        ++v3;
        v9 = (*a1 >> 1) | (i << 15);
        i >>= 1;
        *a1 = v9;
      }
      while ( i >= 0x100u );
    }
    v4 = i & 0x7F;
  }
  result = v3;
  a1[1] = v2 | v4;
  return result;
}
