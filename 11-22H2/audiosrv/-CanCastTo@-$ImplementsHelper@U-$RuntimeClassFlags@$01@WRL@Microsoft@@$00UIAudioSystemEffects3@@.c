/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIAudioSystemEffects3@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@UIApoAcousticEchoCancellation@@UIAPOPreferredFormatSupport@@UIAudioSystemEffectsCustomFormats@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CF480
 * Callers:
 *     ?QueryInterface@CAPOWrapperClient@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002EA00 (-QueryInterface@CAPOWrapperClient@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioSystemEffects3@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@UIApoAcousticEchoCancellation@@UIAPOPreferredFormatSupport@@UIAudioSystemEffectsCustomFormats@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CFB10 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800CFB10.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002DDCC (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIApoAcousticEchoCancellation@@UIAPOPreferredFormatSupport@@UIAudioSystemEffectsCustomFormats@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CF410 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIApoAcousticEchoCancel.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IApoAcousticEchoCancellation,IAPOPreferredFormatSupport,IAudioSystemEffectsCustomFormats>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  const struct _GUID *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  const struct _GUID *v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r11
  const struct _GUID *v10; // r10

  if ( InlineIsEqualGUID(a2, &GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768)
      || InlineIsEqualGUID(v6, &GUID_69e1f79f_6eae_4517_be9f_13aa90e30014) )
    {
      *v7 = v9;
    }
    else
    {
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApoAcousticEchoCancellation,IAPOPreferredFormatSupport,IAudioSystemEffectsCustomFormats>::CanCastTo(
                             v9 + 8,
                             v10);
    }
    return v8;
  }
}
