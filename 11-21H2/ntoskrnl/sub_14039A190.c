/*
 * XREFs of sub_14039A190 @ 0x14039A190
 * Callers:
 *     sub_140804350 @ 0x140804350 (sub_140804350.c)
 *     sub_14080A890 @ 0x14080A890 (sub_14080A890.c)
 *     sub_14094CFE8 @ 0x14094CFE8 (sub_14094CFE8.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z_1 @ 0x14094DE60 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@A_ea_14094DE60.c)
 * Callees:
 *     sub_1402D19FC @ 0x1402D19FC (sub_1402D19FC.c)
 */

bool __fastcall sub_14039A190(_DWORD *a1)
{
  char v1; // r9

  v1 = 0;
  if ( a1[1] == 7 )
    return sub_1402D19FC((_DWORD *)((char *)a1 + (unsigned int)a1[2]), a1[3]) != 0;
  return v1;
}
