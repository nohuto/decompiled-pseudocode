/*
 * XREFs of sub_1407525EC @ 0x1407525EC
 * Callers:
 *     sub_1402D6330 @ 0x1402D6330 (sub_1402D6330.c)
 *     sub_1403DBCD0 @ 0x1403DBCD0 (sub_1403DBCD0.c)
 *     sub_1405CFD70 @ 0x1405CFD70 (sub_1405CFD70.c)
 *     sub_1406EB9B0 @ 0x1406EB9B0 (sub_1406EB9B0.c)
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 *     sub_1407EDFC0 @ 0x1407EDFC0 (sub_1407EDFC0.c)
 *     sub_1407EE90C @ 0x1407EE90C (sub_1407EE90C.c)
 *     sub_1407EF258 @ 0x1407EF258 (sub_1407EF258.c)
 *     sub_1407EF514 @ 0x1407EF514 (sub_1407EF514.c)
 *     sub_14080D028 @ 0x14080D028 (sub_14080D028.c)
 *     sub_14081CD10 @ 0x14081CD10 (sub_14081CD10.c)
 *     sub_140828DE0 @ 0x140828DE0 (sub_140828DE0.c)
 *     sub_14083248C @ 0x14083248C (sub_14083248C.c)
 *     sub_1408600E4 @ 0x1408600E4 (sub_1408600E4.c)
 *     sub_140863B7C @ 0x140863B7C (sub_140863B7C.c)
 *     sub_14099007C @ 0x14099007C (sub_14099007C.c)
 *     sub_140996C60 @ 0x140996C60 (sub_140996C60.c)
 *     sub_1409971BC @ 0x1409971BC (sub_1409971BC.c)
 *     sub_14099CBC8 @ 0x14099CBC8 (sub_14099CBC8.c)
 * Callees:
 *     sub_14075140C @ 0x14075140C (sub_14075140C.c)
 */

__int64 __fastcall sub_1407525EC(LPCGUID SettingGuid, unsigned int a2, void *Src)
{
  int v6; // eax
  int v7; // ebp
  int v8; // eax

  v6 = sub_14075140C(SettingGuid, 0xFFFFFFFF, 0, a2, Src);
  v7 = 0;
  if ( v6 < 0 )
    v7 = v6;
  v8 = sub_14075140C(SettingGuid, 0xFFFFFFFF, 1, a2, Src);
  if ( v8 < 0 && v7 >= 0 )
    return (unsigned int)v8;
  return (unsigned int)v7;
}
