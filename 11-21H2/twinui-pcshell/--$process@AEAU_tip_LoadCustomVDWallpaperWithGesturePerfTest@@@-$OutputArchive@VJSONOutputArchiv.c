/*
 * XREFs of ??$process@AEAU_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAU_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@Z @ 0x18054EA24
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x180556D60 (-serialize@-$test_merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@details@tip@@EEAA.c)
 * Callees:
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087AE0 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ??$process@H@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAH@Z @ 0x18015C08C (--$process@H@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAH@Z.c)
 */

void __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<_tip_LoadCustomVDWallpaperWithGesturePerfTest &>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(a1 + 32));
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v5 + 408) = "thumbnailSource";
  v7 = *(_DWORD *)(a2 + 8);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<int>(
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 32LL) + 32LL),
    &v7);
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v6 + 408) = "inputType";
  v7 = *(_DWORD *)(a2 + 12);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<int>(
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 32) + 32LL) + 32LL),
    &v7);
  cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(a1 + 32));
}
