/*
 * XREFs of sub_14069F1CC @ 0x14069F1CC
 * Callers:
 *     sub_140200068 @ 0x140200068 (sub_140200068.c)
 *     sub_140225E68 @ 0x140225E68 (sub_140225E68.c)
 *     sub_1402260D0 @ 0x1402260D0 (sub_1402260D0.c)
 *     sub_14065A44C @ 0x14065A44C (sub_14065A44C.c)
 *     sub_14065AAAC @ 0x14065AAAC (sub_14065AAAC.c)
 *     sub_14065B3DC @ 0x14065B3DC (sub_14065B3DC.c)
 *     sub_14065B6A0 @ 0x14065B6A0 (sub_14065B6A0.c)
 *     sub_14065B81C @ 0x14065B81C (sub_14065B81C.c)
 *     sub_14065B900 @ 0x14065B900 (sub_14065B900.c)
 *     sub_14065B994 @ 0x14065B994 (sub_14065B994.c)
 *     sub_14065BCB0 @ 0x14065BCB0 (sub_14065BCB0.c)
 *     sub_14065BD24 @ 0x14065BD24 (sub_14065BD24.c)
 *     sub_14065C008 @ 0x14065C008 (sub_14065C008.c)
 *     sub_14065C2F0 @ 0x14065C2F0 (sub_14065C2F0.c)
 *     sub_14065C6FC @ 0x14065C6FC (sub_14065C6FC.c)
 *     sub_14065CB84 @ 0x14065CB84 (sub_14065CB84.c)
 *     sub_14069EE0C @ 0x14069EE0C (sub_14069EE0C.c)
 *     sub_14069EEC0 @ 0x14069EEC0 (sub_14069EEC0.c)
 *     sub_14069F150 @ 0x14069F150 (sub_14069F150.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_140921D8C @ 0x140921D8C (sub_140921D8C.c)
 *     sub_140922400 @ 0x140922400 (sub_140922400.c)
 *     sub_1409224D4 @ 0x1409224D4 (sub_1409224D4.c)
 *     sub_140922984 @ 0x140922984 (sub_140922984.c)
 *     sub_140922B20 @ 0x140922B20 (sub_140922B20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14069F1CC(__int64 a1, __int16 a2)
{
  if ( a2 >= 2 )
    return *(_QWORD *)(a1 + 72) + 32 * (a2 - 2LL);
  else
    return a1 + 32LL * a2 + 8;
}
