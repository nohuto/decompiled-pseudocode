/*
 * XREFs of ??0CCompositeSystemEffect@@QEAA@XZ @ 0x1800296A0
 * Callers:
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAPEBU_tlgProvider_t@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAPEBU_tlgProvider_t@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x1800297B0 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAPEBU_tlgProvider_t@@AE.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CCompositeSystemEffect *__fastcall CCompositeSystemEffect::CCompositeSystemEffect(CCompositeSystemEffect *this)
{
  *((_DWORD *)this + 15) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal,IAudioSystemEffectsCustomFormats,IApoAcousticEchoCancellation,IApoAuxiliaryInputConfiguration>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal,IAudioSystemEffectsCustomFormats,IApoAcousticEchoCancellation,IApoAuxiliaryInputConfiguration>::`vftable'{for `IAudioProcessingObject'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal,IAudioSystemEffectsCustomFormats,IApoAcousticEchoCancellation,IApoAuxiliaryInputConfiguration>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioSystemEffects2,IAudioProcessingObjectInternal,IAudioSystemEffectsCustomFormats,IApoAcousticEchoCancellation,IApoAuxiliaryInputConfiguration>'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal,IAudioSystemEffectsCustomFormats,IApoAcousticEchoCancellation,IApoAuxiliaryInputConfiguration>::`vftable'{for `IAudioProcessingObjectInternal'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal,IAudioSystemEffectsCustomFormats,IApoAcousticEchoCancellation,IApoAuxiliaryInputConfiguration>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioSystemEffectsCustomFormats,IApoAcousticEchoCancellation,IApoAuxiliaryInputConfiguration>'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal,IAudioSystemEffectsCustomFormats,IApoAcousticEchoCancellation,IApoAuxiliaryInputConfiguration>::`vftable'{for `IApoAcousticEchoCancellation'};
  *((_QWORD *)this + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal,IAudioSystemEffectsCustomFormats,IApoAcousticEchoCancellation,IApoAuxiliaryInputConfiguration>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApoAuxiliaryInputConfiguration>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CCompositeSystemEffect::`vftable';
  *((_QWORD *)this + 1) = &CCompositeSystemEffect::`vftable'{for `IAudioProcessingObject'};
  *((_QWORD *)this + 2) = &CCompositeSystemEffect::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioSystemEffects2,IAudioProcessingObjectInternal,IAudioSystemEffectsCustomFormats,IApoAcousticEchoCancellation,IApoAuxiliaryInputConfiguration>'};
  *((_QWORD *)this + 3) = &CCompositeSystemEffect::`vftable'{for `IAudioProcessingObjectInternal'};
  *((_QWORD *)this + 4) = &CCompositeSystemEffect::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioSystemEffectsCustomFormats,IApoAcousticEchoCancellation,IApoAuxiliaryInputConfiguration>'};
  *((_QWORD *)this + 5) = &CCompositeSystemEffect::`vftable'{for `IApoAcousticEchoCancellation'};
  *((_QWORD *)this + 6) = &CCompositeSystemEffect::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApoAuxiliaryInputConfiguration>'};
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 33) = 0;
  return this;
}
