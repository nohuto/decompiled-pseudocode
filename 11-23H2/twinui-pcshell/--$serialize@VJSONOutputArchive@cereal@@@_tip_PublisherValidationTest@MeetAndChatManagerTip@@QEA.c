/*
 * XREFs of ??$serialize@VJSONOutputArchive@cereal@@@_tip_PublisherValidationTest@MeetAndChatManagerTip@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x1800C16E0
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x1801277A0 (-serialize@-$test_merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@@details@tip@.c)
 * Callees:
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1B60 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?WriteBool@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAA_N_N@Z @ 0x1800C2114 (-WriteBool@-$Writer@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip_ra.c)
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x1800C21BC (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 */

__int64 __fastcall MeetAndChatManagerTip::_tip_PublisherValidationTest::serialize<cereal::JSONOutputArchive>(
        _BYTE *a1,
        __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rbx
  char v6; // di
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  char v12; // di
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rbx
  char v18; // di
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rbx
  char v24; // di
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rbx
  char v29; // di
  __int64 v30; // rbx
  __int64 v31; // rdx

  v2 = *(_QWORD *)(a2 + 32);
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 32) + 32LL) + 32LL);
  v5 = *(_QWORD *)(v4 + 32);
  *(_QWORD *)(v4 + 408) = "undecided";
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v5 + 32));
  v6 = a1[8];
  v7 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 32LL) + 328LL;
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    v7,
    (unsigned int)(v6 != 0) + 1);
  LOBYTE(v8) = v6;
  tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteBool(
    v7,
    v8);
  v9 = *(_QWORD *)(v2 + 32);
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 32) + 32LL) + 32LL);
  v11 = *(_QWORD *)(v10 + 32);
  *(_QWORD *)(v10 + 408) = "nonTrustedFound";
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v11 + 32));
  v12 = a1[9];
  v13 = *(_QWORD *)(*(_QWORD *)(v11 + 32) + 32LL) + 328LL;
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    v13,
    (unsigned int)(v12 != 0) + 1);
  LOBYTE(v14) = v12;
  tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteBool(
    v13,
    v14);
  v15 = *(_QWORD *)(v9 + 32);
  v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 32) + 32LL) + 32LL);
  v17 = *(_QWORD *)(v16 + 32);
  *(_QWORD *)(v16 + 408) = "unpackagedFound";
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v17 + 32));
  v18 = a1[10];
  v19 = *(_QWORD *)(*(_QWORD *)(v17 + 32) + 32LL) + 328LL;
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    v19,
    (unsigned int)(v18 != 0) + 1);
  LOBYTE(v20) = v18;
  tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteBool(
    v19,
    v20);
  v21 = *(_QWORD *)(v15 + 32);
  v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 32) + 32LL) + 32LL);
  v23 = *(_QWORD *)(v22 + 32);
  *(_QWORD *)(v22 + 408) = "trustedFound";
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v23 + 32));
  v24 = a1[11];
  v25 = *(_QWORD *)(*(_QWORD *)(v23 + 32) + 32LL) + 328LL;
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    v25,
    (unsigned int)(v24 != 0) + 1);
  LOBYTE(v26) = v24;
  tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteBool(
    v25,
    v26);
  v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 32) + 32LL) + 32LL);
  v28 = *(_QWORD *)(v27 + 32);
  *(_QWORD *)(v27 + 408) = "noAssoc";
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v28 + 32));
  v29 = a1[12];
  v30 = *(_QWORD *)(*(_QWORD *)(v28 + 32) + 32LL) + 328LL;
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    v30,
    (unsigned int)(v29 != 0) + 1);
  LOBYTE(v31) = v29;
  return tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteBool(
           v30,
           v31);
}
