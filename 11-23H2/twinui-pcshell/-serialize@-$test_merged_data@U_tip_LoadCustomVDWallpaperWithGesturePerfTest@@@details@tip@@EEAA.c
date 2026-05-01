/*
 * XREFs of ?serialize@?$test_merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x180613050
 * Callers:
 *     <none>
 * Callees:
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C18D8 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1AA4 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ??$process@AEAU_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAU_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@Z @ 0x18060A314 (--$process@AEAU_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@-$OutputArchive@VJSONOutputArchiv.c)
 */

void __fastcall tip::details::test_merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest>::serialize(
        unsigned __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v3; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx

  v3 = a2 + 32;
  if ( (a3 & 1) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 32LL) + 32LL);
    *(_QWORD *)(v6 + 408) = "test";
    cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<_tip_LoadCustomVDWallpaperWithGesturePerfTest &>(
      *(_QWORD *)(v6 + 32),
      (a1 + 176) & ((unsigned __int128)-(__int128)a1 >> 64));
  }
  if ( (a3 & 2) != 0 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 32LL) + 32LL);
    v8 = *(_QWORD *)(v7 + 32);
    *(_QWORD *)(v7 + 408) = "metrics";
    cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v8 + 32));
    *(_DWORD *)(a1 + 152) = 0;
    cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v8 + 32));
  }
}
