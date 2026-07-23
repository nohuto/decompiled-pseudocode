/*
 * XREFs of sub_140A08710 @ 0x140A08710
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     sub_1406528CC @ 0x1406528CC (sub_1406528CC.c)
 */

__int64 sub_140A08710()
{
  signed __int8 v0; // al
  _OWORD *v1; // r9
  unsigned int v2; // r10d
  unsigned int v3; // r8d

  v0 = sub_1406528CC((__int64)&xmmword_140C10CA0);
  v3 = 0;
  if ( v0 )
  {
    if ( v2 >= 0x20 )
    {
      *v1 = xmmword_140C10CA0;
      v1[1] = xmmword_140C10CB0;
    }
    else
    {
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v3;
}
