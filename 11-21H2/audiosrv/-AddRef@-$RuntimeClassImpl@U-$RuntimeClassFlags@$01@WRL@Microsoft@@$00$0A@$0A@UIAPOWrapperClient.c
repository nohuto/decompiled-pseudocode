/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@UIApoAcousticEchoCancellation@@UIAPOPreferredFormatSupport@@UIAudioSystemEffectsCustomFormats@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000AC50
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@UIApoAcousticEchoCancellation@@UIAPOPreferredFormatSupport@@UIAudioSystemEffectsCustomFormats@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18006B840 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPO_ea_18006B840.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@UIApoAcousticEchoCancellation@@UIAPOPreferredFormatSupport@@UIAudioSystemEffectsCustomFormats@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x18006B860 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPO_ea_18006B860.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@UIApoAcousticEchoCancellation@@UIAPOPreferredFormatSupport@@UIAudioSystemEffectsCustomFormats@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x18006B880 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPO_ea_18006B880.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@UIApoAcousticEchoCancellation@@UIAPOPreferredFormatSupport@@UIAudioSystemEffectsCustomFormats@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x18006B8A0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPO_ea_18006B8A0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@UIApoAcousticEchoCancellation@@UIAPOPreferredFormatSupport@@UIAudioSystemEffectsCustomFormats@@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x18006B8C0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPO_ea_18006B8C0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@UIApoAcousticEchoCancellation@@UIAPOPreferredFormatSupport@@UIAudioSystemEffectsCustomFormats@@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x18006B8E0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPO_ea_18006B8E0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@UIApoAcousticEchoCancellation@@UIAPOPreferredFormatSupport@@UIAudioSystemEffectsCustomFormats@@@Details@WRL@Microsoft@@WDI@EAAKXZ @ 0x18006B900 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPO_ea_18006B900.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IApoAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IApoAcousticEchoCancellation,IAPOPreferredFormatSupport,IAudioSystemEffectsCustomFormats>::AddRef(
        __int64 a1)
{
  signed __int32 v1; // edx

  v1 = *(_DWORD *)(a1 + 68);
  if ( v1 == 0x7FFFFFFF )
    return 0x7FFFFFFFLL;
  while ( v1 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 68), v1 + 1, v1) )
  {
    v1 = *(_DWORD *)(a1 + 68);
    if ( v1 == 0x7FFFFFFF )
      return 0x7FFFFFFFLL;
  }
  return (unsigned int)(v1 + 1);
}
