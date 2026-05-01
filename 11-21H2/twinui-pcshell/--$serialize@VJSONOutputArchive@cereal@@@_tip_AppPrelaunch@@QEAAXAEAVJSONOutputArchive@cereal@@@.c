/*
 * XREFs of ??$serialize@VJSONOutputArchive@cereal@@@_tip_AppPrelaunch@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x180173054
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_AppPrelaunch@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x18005C490 (-serialize@-$test_merged_data@U_tip_AppPrelaunch@@@details@tip@@EEAAXAEAVJSONOutputArchive@cerea.c)
 * Callees:
 *     ??$?RV?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAJ@1@V?$NameValuePair@AEA_K@1@V31@V?$NameValuePair@AEAV?$vector@HV?$allocator@H@std@@@std@@@1@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAJ@1@$$QEAV?$NameValuePair@AEA_K@1@2$$QEAV?$NameValuePair@AEAV?$vector@HV?$allocator@H@std@@@std@@@1@@Z @ 0x1801C19FC (--$-RV-$NameValuePair@AEA_N@cereal@@V-$NameValuePair@AEAJ@1@V-$NameValuePair@AEA_K@_ea_1801C19FC.c)
 */

__int64 __fastcall _tip_AppPrelaunch::serialize<cereal::JSONOutputArchive>(__int64 a1, int a2)
{
  _QWORD v3[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v4[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v5[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v6[2]; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v7[2]; // [rsp+70h] [rbp-10h] BYREF

  v3[0] = "extensionVersion";
  v3[1] = a1 + 32;
  v4[0] = "delayPlanned";
  v4[1] = a1 + 24;
  v5[0] = "delayActual";
  v5[1] = a1 + 16;
  v6[0] = "readShouldPrelaunchRegistryResult";
  v6[1] = a1 + 12;
  v7[0] = "shouldPrelaunch";
  v7[1] = a1 + 8;
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<cereal::NameValuePair<bool &>,cereal::NameValuePair<long &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<std::vector<int> &>>(
           a2,
           (unsigned int)v7,
           (unsigned int)v6,
           (unsigned int)v5,
           (__int64)v4,
           (__int64)v3);
}
