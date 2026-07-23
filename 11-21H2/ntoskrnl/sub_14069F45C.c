/*
 * XREFs of sub_14069F45C @ 0x14069F45C
 * Callers:
 *     sub_140200068 @ 0x140200068 (sub_140200068.c)
 *     sub_140225E68 @ 0x140225E68 (sub_140225E68.c)
 *     sub_1402260D0 @ 0x1402260D0 (sub_1402260D0.c)
 *     sub_14065B900 @ 0x14065B900 (sub_14065B900.c)
 *     sub_14065BD24 @ 0x14065BD24 (sub_14065BD24.c)
 *     sub_14065C008 @ 0x14065C008 (sub_14065C008.c)
 *     sub_14065C2F0 @ 0x14065C2F0 (sub_14065C2F0.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_140921D8C @ 0x140921D8C (sub_140921D8C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14069F45C(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 160) & 0x80000) != 0 )
    return *(_BYTE *)(a2 + 13) & 3;
  else
    return 0LL;
}
