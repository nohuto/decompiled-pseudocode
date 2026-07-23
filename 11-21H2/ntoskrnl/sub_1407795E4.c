/*
 * XREFs of sub_1407795E4 @ 0x1407795E4
 * Callers:
 *     sub_14076E8F0 @ 0x14076E8F0 (sub_14076E8F0.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z_0 @ 0x1407731E8 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@A_ea_1407731E8.c)
 *     sub_1407796C4 @ 0x1407796C4 (sub_1407796C4.c)
 * Callees:
 *     sub_1406B0324 @ 0x1406B0324 (sub_1406B0324.c)
 *     sub_1406B0448 @ 0x1406B0448 (sub_1406B0448.c)
 */

__int64 __fastcall sub_1407795E4(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4, _DWORD *a5)
{
  if ( !a3 )
    return 3221225485LL;
  if ( (*a4 & 0xFF00000) != 0 )
    return sub_1406B0448(a1, a2, a3, (__int64)a4, a5);
  return sub_1406B0324(a1, a2, a3, (__int64)a4, a5);
}
