/*
 * XREFs of ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180017F10
 * Callers:
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x180025BA0 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV-$shared_ptr@VEffectPack@@@std@.c)
 *     ?PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEBU_tagpropertykey@@PEBU_AEC_POLICY_RESULTS@@@Z @ 0x1800545C4 (-PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x1800601F4 (-SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     _lambda_cc8545399a300f832261433c2fbaac5d_::operator() @ 0x180075510 (_lambda_cc8545399a300f832261433c2fbaac5d_--operator().c)
 *     wil::details::lambda_call__lambda_468acda44b4c3772750e5bffa51eb9a1___::_lambda_call__lambda_468acda44b4c3772750e5bffa51eb9a1___ @ 0x18014A5D8 (wil--details--lambda_call__lambda_468acda44b4c3772750e5bffa51eb9a1___--_lambda_call__lambda_468a.c)
 *     wil::details::lambda_call__lambda_e396111eb4c478e6ba8d1be5074c3579___::_lambda_call__lambda_e396111eb4c478e6ba8d1be5074c3579___ @ 0x18014A670 (wil--details--lambda_call__lambda_e396111eb4c478e6ba8d1be5074c3579___--_lambda_call__lambda_e396.c)
 *     ?ResetDeviceFormat@EffectPack@@QEAAJXZ @ 0x18014EF1C (-ResetDeviceFormat@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ?ClearMixFormatCache@@YAJPEAUIPropertyStore@@_N1@Z @ 0x180017FC0 (-ClearMixFormatCache@@YAJPEAUIPropertyStore@@_N1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::ClearMixFormatCache(__int64 a1, unsigned int a2)
{
  bool v2; // al
  bool v3; // r9
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 1;
  if ( a2 > 1 )
  {
    v3 = 0;
  }
  else
  {
    v3 = 1;
    if ( !a2 )
      goto LABEL_3;
  }
  if ( a2 != 2 )
    v2 = 0;
LABEL_3:
  v4 = ClearMixFormatCache(*(struct IPropertyStore **)(a1 + 72), v3, v2);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B1A,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v4,
    v7);
  return v5;
}
