/*
 * XREFs of _FDnorm @ 0x180021404
 * Callers:
 *     _FDscale @ 0x18000C014 (_FDscale.c)
 *     _FDunscale @ 0x180021618 (_FDunscale.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FDnorm(unsigned __int16 *a1)
{
  __int16 v1; // r10
  unsigned __int16 v3; // r9
  unsigned __int16 v4; // dx
  unsigned __int16 i; // cx
  unsigned __int16 v6; // cx

  v1 = a1[1] & 0x8000;
  v3 = 1;
  v4 = a1[1] & 0x7F;
  if ( !v4 )
  {
    if ( !*a1 )
      goto LABEL_10;
    v4 = *a1;
    v3 = -15;
    *a1 = 0;
  }
  for ( i = v4; v4 < 0x80u; i = v4 )
  {
    --v3;
    v4 = (2 * i) | (*a1 >> 15);
    *a1 *= 2;
  }
  while ( v4 >= 0x100u )
  {
    v6 = (v4 << 15) | (*a1 >> 1);
    v4 >>= 1;
    *a1 = v6;
    ++v3;
  }
  v4 &= 0x7Fu;
LABEL_10:
  a1[1] = v1 | v4;
  return v3;
}
