/*
 * XREFs of ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V?$NameValuePair@AEAW4RotationState@Rotation@Private@Transitions@Udwm@winrt@@@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@0$$QEAV?$NameValuePair@AEAW4RotationState@Rotation@Private@Transitions@Udwm@winrt@@@1@@Z @ 0x1800F47A0
 * Callers:
 *     ??$serialize@VJSONOutputArchive@cereal@@@_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x1800F4A9C (--$serialize@VJSONOutputArchive@cereal@@@_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@.c)
 * Callees:
 *     ??$process@H@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAH@Z @ 0x1800F005C (--$process@H@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAH@Z.c)
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x1800F1D84 (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 *     ?WriteBool@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAA_N_N@Z @ 0x1800F20E8 (-WriteBool@-$Writer@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip_ra.c)
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800F41F4 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<enum winrt::Udwm::Transitions::Private::Rotation::RotationState &>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v7; // r11
  __int64 v8; // rdi
  char *v9; // rbx
  char v10; // si
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rdi
  char *v16; // rbx
  char v17; // si
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned int v23; // [rsp+40h] [rbp+8h] BYREF

  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  v8 = *(_QWORD *)(v7 + 32);
  *(_QWORD *)(v7 + 408) = *a2;
  v9 = (char *)a2[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v8 + 32));
  v10 = *v9;
  v11 = *(_QWORD *)(*(_QWORD *)(v8 + 32) + 32LL);
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    (__int64 **)(v11 + 328),
    (v10 != 0) + 1);
  LOBYTE(v12) = v10;
  tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteBool(
    (__int64 **)(v11 + 328),
    v12);
  v13 = *(_QWORD *)(a1 + 32);
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 32) + 32LL) + 32LL);
  v15 = *(_QWORD *)(v14 + 32);
  *(_QWORD *)(v14 + 408) = *a3;
  v16 = (char *)a3[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v15 + 32));
  v17 = *v16;
  v18 = *(_QWORD *)(*(_QWORD *)(v15 + 32) + 32LL);
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    (__int64 **)(v18 + 328),
    (v17 != 0) + 1);
  LOBYTE(v19) = v17;
  tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteBool(
    (__int64 **)(v18 + 328),
    v19);
  v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v20 + 408) = *(_QWORD *)a4;
  v21 = *(_QWORD *)(v20 + 32);
  v23 = **(_DWORD **)(a4 + 8);
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<int>(
           *(_QWORD *)(*(_QWORD *)(v21 + 32) + 32LL),
           &v23);
}
