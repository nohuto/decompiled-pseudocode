/*
 * XREFs of ??$process@V?$NameValuePair@AEAI@cereal@@V12@V?$NameValuePair@AEA_N@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAI@1@0$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x1800426C4
 * Callers:
 *     ??$serialize@VJSONOutputArchive@cereal@@@_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x18004256C (--$serialize@VJSONOutputArchive@cereal@@@_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udw.c)
 * Callees:
 *     ??$process@AEAI@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z @ 0x180042794 (--$process@AEAI@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z.c)
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180043C1C (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x180043E34 (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<bool &>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdi
  _BYTE *v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rdx

  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v7 + 408) = *a2;
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned int &>(*(_QWORD *)(v7 + 32), a2[1]);
  v8 = *(_QWORD *)(a1 + 32);
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v9 + 408) = *a3;
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned int &>(*(_QWORD *)(v9 + 32), a3[1]);
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 32) + 32LL) + 32LL);
  v11 = *(_QWORD *)(v10 + 32);
  *(_QWORD *)(v10 + 408) = *a4;
  v12 = (_BYTE *)a4[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v11 + 32));
  LOBYTE(a4) = *v12;
  v13 = *(_QWORD *)(*(_QWORD *)(v11 + 32) + 32LL);
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    v13 + 328,
    (unsigned int)((_BYTE)a4 != 0) + 1);
  LOBYTE(v14) = (_BYTE)a4;
  return tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteBool(
           v13 + 328,
           v14);
}
