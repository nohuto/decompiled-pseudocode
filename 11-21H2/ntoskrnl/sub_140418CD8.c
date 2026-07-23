/*
 * XREFs of sub_140418CD8 @ 0x140418CD8
 * Callers:
 *     sub_1403D5E00 @ 0x1403D5E00 (sub_1403D5E00.c)
 * Callees:
 *     sub_140418B44 @ 0x140418B44 (sub_140418B44.c)
 *     sub_140418BA4 @ 0x140418BA4 (sub_140418BA4.c)
 *     sub_140418BD8 @ 0x140418BD8 (sub_140418BD8.c)
 */

__int64 __fastcall sub_140418CD8(__int64 a1, _QWORD *a2)
{
  if ( (dword_140C2AF00 & 5) != 0 || *(_BYTE *)(a1 + 141) == 1 && (*a2 & 0x10) == 0 && (dword_140C2AF00 & 0x40) == 0 )
    return 0LL;
  if ( sub_140418BD8(a1) && sub_140418BA4(a1, a2) && (unsigned int)sub_140418B44(a1, a2) )
    return 1LL;
  return ((unsigned int)dword_140C2AF00 >> 26) & 1;
}
