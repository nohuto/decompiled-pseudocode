/*
 * XREFs of wil::details::lambda_call__lambda_468acda44b4c3772750e5bffa51eb9a1___::_lambda_call__lambda_468acda44b4c3772750e5bffa51eb9a1___ @ 0x18014A5D8
 * Callers:
 *     ?SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180060688 (-SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     _EffectPack::SetDeviceFormatSwAudioEngine_::_1_::dtor$0 @ 0x18007D92A (_EffectPack--SetDeviceFormatSwAudioEngine_--_1_--dtor$0.c)
 * Callees:
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180017F10 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_468acda44b4c3772750e5bffa51eb9a1___::_lambda_call__lambda_468acda44b4c3772750e5bffa51eb9a1___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    return CEndpointCharacteristics::ClearMixFormatCache(*(_QWORD *)(*(_QWORD *)a1 + 1288LL), 0);
  }
  return result;
}
