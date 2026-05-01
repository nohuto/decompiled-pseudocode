/*
 * XREFs of ??$serialize@VJSONInputArchive@cereal@@@_tip_PublisherValidationTest@MeetAndChatManagerTip@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1806C1E08
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1806C3AB0 (-deserialize@-$test_merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@@details@ti.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@0000@Z @ 0x180415A7C (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@@-$InputArchive@VJSONInputArchive@cere.c)
 */

__int64 __fastcall MeetAndChatManagerTip::_tip_PublisherValidationTest::serialize<cereal::JSONInputArchive>(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v4[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v5[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v6[2]; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v7[2]; // [rsp+70h] [rbp-10h] BYREF

  v3[0] = "noAssoc";
  v3[1] = a1 + 12;
  v4[0] = "trustedFound";
  v4[1] = a1 + 11;
  v5[0] = "unpackagedFound";
  v5[1] = a1 + 10;
  v6[0] = "nonTrustedFound";
  v6[1] = a1 + 9;
  v7[0] = "undecided";
  v7[1] = a1 + 8;
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
           a2,
           v7,
           v6,
           v5,
           v4,
           v3);
}
