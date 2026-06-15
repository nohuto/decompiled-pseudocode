/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIAudioProcessingObjectInternal@@UIApoAcousticEchoCancellation@@UIAPOPreferredFormatSupport@@UIAudioSystemEffectsCustomFormats@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180118864
 * Callers:
 *     ?QueryInterface@CAPOWrapperClient@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180010AB0 (-QueryInterface@CAPOWrapperClient@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIAudioProcessingObject@@UIAudioSystemEffects2@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@UIApoAcousticEchoCancellation@@UIAPOPreferredFormatSupport@@UIAudioSystemEffectsCustomFormats@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801187F0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIAudioProcessingObject.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800181E0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIAudioSystemEffectsCustomFormats@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180041FE4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIAudioSystemEffectsCus.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObjectInternal,IApoAcousticEchoCancellation,IAPOPreferredFormatSupport,IAudioSystemEffectsCustomFormats>::CanCastTo(
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

  if ( InlineIsEqualGUID(a2, &GUID_69e1f79f_6eae_4517_be9f_13aa90e30014) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_25385759_3236_4101_a943_25693dfb5d2d)
      || InlineIsEqualGUID(v6, &GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7) )
    {
      *v7 = v9;
    }
    else
    {
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioSystemEffectsCustomFormats>::CanCastTo(
                             v9 + 8,
                             v10);
    }
    return v8;
  }
}
