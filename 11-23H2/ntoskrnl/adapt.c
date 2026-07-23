/*
 * XREFs of adapt @ 0x1405B0814
 * Callers:
 *     punycode_decode @ 0x1409BF8A0 (punycode_decode.c)
 *     punycode_encode @ 0x1409BFF08 (punycode_encode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall adapt(int a1, int a2, char a3)
{
  int v3; // r9d
  int v4; // r8d
  int i; // r8d

  v3 = 0;
  if ( a3 )
    v4 = a1 / 700;
  else
    v4 = a1 / 2;
  for ( i = v4 / a2 + v4; i > 455; i /= 0x23u )
    v3 += 36;
  return (unsigned int)(v3 + 36 * i / (i + 38));
}
