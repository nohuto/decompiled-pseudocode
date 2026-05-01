/*
 * XREFs of ?serialize@?$test_merged_data@U_tip_SearchFullActivationTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x1801A31E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RV?$NameValuePair@AEAU?$test_data_metrics@U_tip_SearchHideTest@@@details@tip@@@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEAU?$test_data_metrics@U_tip_SearchHideTest@@@details@tip@@@1@@Z @ 0x180198D14 (--$-RV-$NameValuePair@AEAU-$test_data_metrics@U_tip_SearchHideTest@@@details@tip@@@cereal@@@-$Ou.c)
 *     ??$?RV?$NameValuePair@AEAU_tip_SearchFullActivationTest@@@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEAU_tip_SearchFullActivationTest@@@1@@Z @ 0x180198D78 (--$-RV-$NameValuePair@AEAU_tip_SearchFullActivationTest@@@cereal@@@-$OutputArchive@VJSONOutputAr.c)
 */

__int64 __fastcall tip::details::test_merged_data<_tip_SearchFullActivationTest>::serialize(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  const char *v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = a1 + 144;
  if ( (a3 & 1) != 0 )
  {
    v8 = "test";
    v9 = v3 & -(__int64)(a1 != 0);
    result = cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<cereal::NameValuePair<_tip_SearchFullActivationTest &>>(
               a2,
               &v8);
  }
  if ( (a3 & 2) != 0 )
  {
    v9 = a1 + 120;
    v10[0] = "metrics";
    v8 = (const char *)(v3 & -(__int64)(a1 != 0));
    v10[1] = &v8;
    return cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<cereal::NameValuePair<tip::details::test_data_metrics<_tip_SearchHideTest> &>>(
             a2,
             v10);
  }
  return result;
}
