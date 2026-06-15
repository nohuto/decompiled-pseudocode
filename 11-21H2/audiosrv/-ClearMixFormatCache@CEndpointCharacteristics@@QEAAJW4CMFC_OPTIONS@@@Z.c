/*
 * XREFs of ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x1801458AC
 * Callers:
 *     _lambda_4434e4183b7615ee6f5c6d72834eba6f_::operator() @ 0x1800685CC (_lambda_4434e4183b7615ee6f5c6d72834eba6f_--operator().c)
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x180069AB0 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     wil::details::lambda_call__lambda_1407b965f3d07141f3c1458da523640a___::_lambda_call__lambda_1407b965f3d07141f3c1458da523640a___ @ 0x180144144 (wil--details--lambda_call__lambda_1407b965f3d07141f3c1458da523640a___--_lambda_call__lambda_1407.c)
 *     wil::details::lambda_call__lambda_931ae1010aada9b89c18ea50a383ed88___::_lambda_call__lambda_931ae1010aada9b89c18ea50a383ed88___ @ 0x180144218 (wil--details--lambda_call__lambda_931ae1010aada9b89c18ea50a383ed88___--_lambda_call__lambda_931a.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180145B04 (-DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioen.c)
 *     ?PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEBU_tagpropertykey@@PEBU_AEC_POLICY_RESULTS@@@Z @ 0x18014B808 (-PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ @ 0x18014C020 (-ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ.c)
 *     ?SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18014C490 (-SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearMixFormatCache@@YAJPEAUIPropertyStore@@_N1@Z @ 0x180163688 (-ClearMixFormatCache@@YAJPEAUIPropertyStore@@_N1@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::ClearMixFormatCache(__int64 a1, unsigned int a2)
{
  bool v2; // al
  bool v3; // r9
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 1;
  if ( a2 <= 1 )
  {
    v3 = 1;
    if ( !a2 )
      goto LABEL_6;
  }
  else
  {
    v3 = 0;
  }
  if ( a2 != 2 )
    v2 = 0;
LABEL_6:
  v4 = ClearMixFormatCache(*(struct IPropertyStore **)(a1 + 40), v3, v2);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1955,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
