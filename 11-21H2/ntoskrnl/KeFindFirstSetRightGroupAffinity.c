/*
 * XREFs of KeFindFirstSetRightGroupAffinity @ 0x1402FE230
 * Callers:
 *     sub_14024576C @ 0x14024576C (sub_14024576C.c)
 *     sub_140266CA8 @ 0x140266CA8 (sub_140266CA8.c)
 *     sub_140294110 @ 0x140294110 (sub_140294110.c)
 *     sub_1402FE1C4 @ 0x1402FE1C4 (sub_1402FE1C4.c)
 *     sub_14035CA04 @ 0x14035CA04 (sub_14035CA04.c)
 *     sub_1403AEA08 @ 0x1403AEA08 (sub_1403AEA08.c)
 *     sub_1403D4314 @ 0x1403D4314 (sub_1403D4314.c)
 *     sub_140517DCC @ 0x140517DCC (sub_140517DCC.c)
 *     sub_140848C18 @ 0x140848C18 (sub_140848C18.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindFirstSetRightGroupAffinity(__int64 a1)
{
  unsigned __int64 v2; // rcx

  v2 = *(_QWORD *)a1;
  if ( !v2 )
    return 0xFFFFFFFFLL;
  _BitScanForward64(&v2, v2);
  return (unsigned int)dword_140D105E0[64 * *(unsigned __int16 *)(a1 + 8) + (unsigned int)v2];
}
