/*
 * XREFs of sub_14056AAA4 @ 0x14056AAA4
 * Callers:
 *     sub_140292350 @ 0x140292350 (sub_140292350.c)
 *     sub_1402A0A4C @ 0x1402A0A4C (sub_1402A0A4C.c)
 *     sub_1402A0C14 @ 0x1402A0C14 (sub_1402A0C14.c)
 *     sub_140308640 @ 0x140308640 (sub_140308640.c)
 *     sub_140573DBC @ 0x140573DBC (sub_140573DBC.c)
 *     sub_140574294 @ 0x140574294 (sub_140574294.c)
 *     sub_140574558 @ 0x140574558 (sub_140574558.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14056AAA4(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r10
  int v3; // r11d
  int i; // edx
  unsigned __int64 v5; // rax

  v2 = a1;
  v3 = 0;
  for ( i = a2
          % ((0x101010101010101LL
            * ((((a1 - ((a1 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
              + (((a1 - ((a1 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
              + ((((a1 - ((a1 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                + (((a1 - ((a1 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56)
          + 1; i; --i )
  {
    _BitScanForward64(&v5, v2);
    v3 += v5 + 1;
    v2 >>= (unsigned __int8)v5 + 1;
  }
  return (unsigned int)(v3 - 1);
}
