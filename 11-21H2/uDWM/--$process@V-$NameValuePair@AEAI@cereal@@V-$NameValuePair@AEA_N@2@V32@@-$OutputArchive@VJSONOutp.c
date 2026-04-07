/*
 * XREFs of ??$process@V?$NameValuePair@AEAI@cereal@@V?$NameValuePair@AEA_N@2@V32@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEA_N@1@1@Z @ 0x1800F2AF0
 * Callers:
 *     ??$serialize@VJSONOutputArchive@cereal@@@_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x1800F3194 (--$serialize@VJSONOutputArchive@cereal@@@_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@Q.c)
 * Callees:
 *     ??$process@AEAI@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z @ 0x180042794 (--$process@AEAI@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z.c)
 *     ?WriteBool@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAA_N_N@Z @ 0x180043618 (-WriteBool@-$Writer@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip_ra.c)
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180043C1C (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x180043E34 (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 */

char __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rdi
  _BYTE *v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdi
  _BYTE *v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rdx

  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v7 + 408) = *(_QWORD *)a2;
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned int &>(
    *(_QWORD *)(v7 + 32),
    *(_DWORD **)(a2 + 8));
  v8 = *(_QWORD *)(a1 + 32);
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 32) + 32LL) + 32LL);
  v10 = *(_QWORD *)(v9 + 32);
  *(_QWORD *)(v9 + 408) = *a3;
  v11 = (_BYTE *)a3[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v10 + 32));
  LOBYTE(a3) = *v11;
  v12 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 32LL);
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    (__int64 **)(v12 + 328),
    ((_BYTE)a3 != 0) + 1);
  LOBYTE(v13) = (_BYTE)a3;
  tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteBool(
    (__int64 **)(v12 + 328),
    v13);
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 32) + 32LL) + 32LL);
  v15 = *(_QWORD *)(v14 + 32);
  *(_QWORD *)(v14 + 408) = *a4;
  v16 = (_BYTE *)a4[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v15 + 32));
  LOBYTE(a3) = *v16;
  v17 = *(_QWORD *)(*(_QWORD *)(v15 + 32) + 32LL);
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    (__int64 **)(v17 + 328),
    ((_BYTE)a3 != 0) + 1);
  LOBYTE(v18) = (_BYTE)a3;
  return tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteBool(
           (__int64 **)(v17 + 328),
           v18);
}
