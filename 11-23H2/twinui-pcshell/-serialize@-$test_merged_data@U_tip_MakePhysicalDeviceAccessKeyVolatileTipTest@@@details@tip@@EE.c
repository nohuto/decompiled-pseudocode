/*
 * XREFs of ?serialize@?$test_merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x180278B60
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RV?$NameValuePair@AEAU?$test_data_metrics@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@@details@tip@@@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEAU?$test_data_metrics@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@@details@tip@@@1@@Z @ 0x1802049C4 (--$-RV-$NameValuePair@AEAU-$test_data_metrics@U_tip_InputAppViewCoordinatorShowRequestTest@Keybo.c)
 *     ??$?RAEAU_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@AEAU_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@Z @ 0x1802767C4 (--$-RAEAU_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@-$OutputArchive@VJSONOutputArchive@ce.c)
 */

__int64 __fastcall tip::details::test_merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>::serialize(
        unsigned __int64 a1,
        __int64 a2,
        char a3)
{
  unsigned __int64 v3; // rbx
  __int64 v7; // rcx
  __int64 result; // rax
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = a1 + 176;
  if ( (a3 & 1) != 0 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 32LL);
    *(_QWORD *)(v7 + 408) = "test";
    result = cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest &>(
               v7,
               v3 & ((unsigned __int128)-(__int128)a1 >> 64));
  }
  if ( (a3 & 2) != 0 )
  {
    v9[1] = a1 + 152;
    v10[0] = "metrics";
    v9[0] = v3 & -(__int64)(a1 != 0);
    v10[1] = v9;
    return cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<cereal::NameValuePair<tip::details::test_data_metrics<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest> &>>(
             a2,
             v10);
  }
  return result;
}
