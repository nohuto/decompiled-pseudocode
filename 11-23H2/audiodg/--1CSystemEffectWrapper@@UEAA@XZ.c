/*
 * XREFs of ??1CSystemEffectWrapper@@UEAA@XZ @ 0x140015BBC
 * Callers:
 *     ??_GCSystemEffectWrapper@@UEAAPEAXI@Z @ 0x140015B70 (--_GCSystemEffectWrapper@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSystemEffectWrapper::~CSystemEffectWrapper(CSystemEffectWrapper *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CSystemEffectWrapper::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CSystemEffectWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioProcessingObject,IWeakReferenceSource,IAudioProcessingObjectConfiguration,IAudioProcessingObjectRT,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IApoAuxiliaryInputRT,IApoAcousticEchoCancellation,IAudioAmbisonics,IAPOPreferredFormatSupport,ISystemEffectWrapper,IAudioProcessingObjectNotifications2,IAPOWrapperSrv>'};
  *((_QWORD *)this + 2) = &CSystemEffectWrapper::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CSystemEffectWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioProcessingObjectConfiguration,IAudioProcessingObjectRT,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IApoAuxiliaryInputRT,IApoAcousticEchoCancellation,IAudioAmbisonics,IAPOPreferredFormatSupport,ISystemEffectWrapper,IAudioProcessingObjectNotifications2,IAPOWrapperSrv>'};
  *((_QWORD *)this + 4) = &CSystemEffectWrapper::`vftable'{for `IAudioProcessingObjectRT'};
  *((_QWORD *)this + 5) = &CSystemEffectWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IApoAuxiliaryInputRT,IApoAcousticEchoCancellation,IAudioAmbisonics,IAPOPreferredFormatSupport,ISystemEffectWrapper,IAudioProcessingObjectNotifications2,IAPOWrapperSrv>'};
  *((_QWORD *)this + 6) = &CSystemEffectWrapper::`vftable'{for `IApoAuxiliaryInputConfiguration'};
  *((_QWORD *)this + 7) = &CSystemEffectWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApoAuxiliaryInputRT,IApoAcousticEchoCancellation,IAudioAmbisonics,IAPOPreferredFormatSupport,ISystemEffectWrapper,IAudioProcessingObjectNotifications2,IAPOWrapperSrv>'};
  *((_QWORD *)this + 8) = &CSystemEffectWrapper::`vftable'{for `IApoAcousticEchoCancellation'};
  *((_QWORD *)this + 9) = &CSystemEffectWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioAmbisonics,IAPOPreferredFormatSupport,ISystemEffectWrapper,IAudioProcessingObjectNotifications2,IAPOWrapperSrv>'};
  *((_QWORD *)this + 10) = &CSystemEffectWrapper::`vftable'{for `IAPOPreferredFormatSupport'};
  *((_QWORD *)this + 11) = &CSystemEffectWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISystemEffectWrapper,IAudioProcessingObjectNotifications2,IAPOWrapperSrv>'};
  *((_QWORD *)this + 12) = &CSystemEffectWrapper::`vftable'{for `IAudioProcessingObjectNotifications2'};
  *((_QWORD *)this + 13) = &CSystemEffectWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAPOWrapperSrv>'};
  *((_QWORD *)this + 16) = &CSystemEffectWrapper::`vftable';
  v2 = *((_QWORD *)this + 17);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 17) = 0LL;
  }
  CoTaskMemFree(*((LPVOID *)this + 20));
  *((_QWORD *)this + 20) = 0LL;
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioProcessingObject,IAudioProcessingObjectConfiguration,IAudioProcessingObjectRT,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IApoAuxiliaryInputRT,IApoAcousticEchoCancellation,IAudioAmbisonics,IAPOPreferredFormatSupport,ISystemEffectWrapper,IAudioProcessingObjectNotifications2,IAPOWrapperSrv>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioProcessingObject,IAudioProcessingObjectConfiguration,IAudioProcessingObjectRT,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IApoAuxiliaryInputRT,IApoAcousticEchoCancellation,IAudioAmbisonics,IAPOPreferredFormatSupport,ISystemEffectWrapper,IAudioProcessingObjectNotifications2,IAPOWrapperSrv>(this);
}
