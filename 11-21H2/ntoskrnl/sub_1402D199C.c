/*
 * XREFs of sub_1402D199C @ 0x1402D199C
 * Callers:
 *     sub_14069A1F8 @ 0x14069A1F8 (sub_14069A1F8.c)
 *     sub_1406E67F0 @ 0x1406E67F0 (sub_1406E67F0.c)
 *     sub_1407468A0 @ 0x1407468A0 (sub_1407468A0.c)
 *     sub_140804E80 @ 0x140804E80 (sub_140804E80.c)
 *     sub_140805024 @ 0x140805024 (sub_140805024.c)
 *     sub_14094D4C8 @ 0x14094D4C8 (sub_14094D4C8.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z_1 @ 0x14094DE60 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@A_ea_14094DE60.c)
 *     sub_14094E570 @ 0x14094E570 (sub_14094E570.c)
 * Callees:
 *     sub_1402D19D8 @ 0x1402D19D8 (sub_1402D19D8.c)
 */

char __fastcall sub_1402D199C(_DWORD *a1)
{
  char v1; // r9

  if ( a1[1] != 1 || !(unsigned __int8)sub_1402D19D8((char *)a1 + (unsigned int)a1[2], (unsigned int)a1[3]) )
    return 0;
  return v1;
}
