/*
 * XREFs of sub_1403D9444 @ 0x1403D9444
 * Callers:
 *     sub_1403A54E0 @ 0x1403A54E0 (sub_1403A54E0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1403D9444(int a1, unsigned __int16 a2)
{
  char v2; // bl

  v2 = a1;
  if ( a2 + a1 > 3 )
    v2 = 3 - a2;
  if ( (unsigned int)sub_14042A5E0(
                       BYTE2(dword_140C54B64),
                       (dword_140C54B64 & 0x700 | ((unsigned int)dword_140C54B64 >> 8) & 0xF8) >> 3) )
    return 0LL;
  else
    return (unsigned int)((1 << (8 * v2 + 8)) - 1);
}
