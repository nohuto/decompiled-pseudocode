/*
 * XREFs of ?ResolveAllOverridingChains@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180033DE4
 * Callers:
 *     ?EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180015DAC (-EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@W4SED_RESOLVEOPT@@@Z @ 0x18002C594 (-GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MID.c)
 *     ?IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@U_GUID@@@Z @ 0x18002EB7C (-IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     ?GetDefaultConnectorProcessingModeInternal@EffectPack@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x1800340AC (-GetDefaultConnectorProcessingModeInternal@EffectPack@@AEAA-AU_GUID@@W4__MIDL___MIDL_itf_audioen.c)
 * Callees:
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180033E70 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 */

void __fastcall EffectPack::ResolveAllOverridingChains(EffectPack *this, int a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rsi

  v2 = a2;
  if ( (unsigned __int64)a2 >= *((_QWORD *)this + 144)
    || (v4 = 96LL * a2,
        SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v4 + *((_QWORD *)this + 145))),
        v2 >= *((_QWORD *)this + 146))
    || (SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v4 + *((_QWORD *)this + 147))),
        v2 >= *((_QWORD *)this + 148)) )
  {
    _o_terminate(this);
    __debugbreak();
    JUMPOUT(0x180033E65LL);
  }
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v4 + *((_QWORD *)this + 149)));
}
