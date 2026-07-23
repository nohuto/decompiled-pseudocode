/*
 * XREFs of sub_140418B44 @ 0x140418B44
 * Callers:
 *     sub_1403D5E00 @ 0x1403D5E00 (sub_1403D5E00.c)
 *     sub_140418C1C @ 0x140418C1C (sub_140418C1C.c)
 *     sub_140418CD8 @ 0x140418CD8 (sub_140418CD8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140418B44(__int64 a1, _QWORD *a2)
{
  if ( (dword_140C2AF00 & 5) != 0 || *(_BYTE *)(a1 + 141) == 1 && (*a2 & 0x10) == 0 && (dword_140C2AF00 & 0x40) == 0 )
    return 0LL;
  else
    return HIBYTE(dword_140C2AF00) & 1;
}
