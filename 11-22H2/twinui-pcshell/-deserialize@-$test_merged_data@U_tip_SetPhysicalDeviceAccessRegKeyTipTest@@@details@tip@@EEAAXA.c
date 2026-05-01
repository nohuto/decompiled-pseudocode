/*
 * XREFs of ?deserialize@?$test_merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x180278900
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RV?$NameValuePair@AEAU_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONInputArchive@1@$$QEAV?$NameValuePair@AEAU_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@1@@Z @ 0x18027686C (--$-RV-$NameValuePair@AEAU_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@cereal@@@-$InputArchive@VJ.c)
 */

__int64 __fastcall tip::details::test_merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = "test";
  v3[1] = (a1 + 176) & -(__int64)(a1 != 0);
  return cereal::InputArchive<cereal::JSONInputArchive,0>::operator()<cereal::NameValuePair<_tip_SetPhysicalDeviceAccessRegKeyTipTest &>>(
           a2,
           v3);
}
