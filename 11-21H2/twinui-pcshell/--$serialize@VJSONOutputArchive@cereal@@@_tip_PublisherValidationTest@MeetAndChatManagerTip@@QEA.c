/*
 * XREFs of ??$serialize@VJSONOutputArchive@cereal@@@_tip_PublisherValidationTest@MeetAndChatManagerTip@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x18005C5CC
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x18005C3F0 (-serialize@-$test_merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@@details@tip@.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@0000@Z @ 0x18005C674 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@@-$OutputArchive@VJSONOutputArchive@ce.c)
 */

__int64 __fastcall MeetAndChatManagerTip::_tip_PublisherValidationTest::serialize<cereal::JSONOutputArchive>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _QWORD v5[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v6[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v7[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v8[2]; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v9[2]; // [rsp+70h] [rbp-10h] BYREF

  v5[0] = "noAssoc";
  v5[1] = a1 + 12;
  v6[0] = "trustedFound";
  v6[1] = a1 + 11;
  v7[0] = "unpackagedFound";
  v7[1] = a1 + 10;
  v8[0] = "nonTrustedFound";
  v8[1] = a1 + 9;
  v9[0] = "undecided";
  v2 = a1 + 8;
  v3 = *(_QWORD *)(a2 + 32);
  v9[1] = v2;
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
           v3,
           (unsigned int)v9,
           (unsigned int)v8,
           (unsigned int)v7,
           (__int64)v6,
           (__int64)v5);
}
