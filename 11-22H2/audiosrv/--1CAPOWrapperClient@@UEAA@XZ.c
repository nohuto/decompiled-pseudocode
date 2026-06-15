/*
 * XREFs of ??1CAPOWrapperClient@@UEAA@XZ @ 0x18002AF58
 * Callers:
 *     ??_GCAPOWrapperClient@@UEAAPEAXI@Z @ 0x180029EE0 (--_GCAPOWrapperClient@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x1800432B0 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 */

void __fastcall CAPOWrapperClient::~CAPOWrapperClient(CAPOWrapperClient *this)
{
  LPCRITICAL_SECTION v2; // rdi

  *(_QWORD *)this = &CAPOWrapperClient::`vftable';
  *((_QWORD *)this + 1) = &CAPOWrapperClient::`vftable'{for `IAudioProcessingObject'};
  *((_QWORD *)this + 2) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioSystemEffects2,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IApoAcousticEchoCancellation,IAPOPreferredFormatSupport,IAudioSystemEffectsCustomFormats>'};
  *((_QWORD *)this + 3) = &CAPOWrapperClient::`vftable'{for `IAudioSystemEffects3'};
  *((_QWORD *)this + 4) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApoAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IApoAcousticEchoCancellation,IAPOPreferredFormatSupport,IAudioSystemEffectsCustomFormats>'};
  *((_QWORD *)this + 5) = &CAPOWrapperClient::`vftable'{for `IAudioProcessingObjectInternal'};
  *((_QWORD *)this + 6) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApoAcousticEchoCancellation,IAPOPreferredFormatSupport,IAudioSystemEffectsCustomFormats>'};
  *((_QWORD *)this + 7) = &CAPOWrapperClient::`vftable'{for `IAPOPreferredFormatSupport'};
  *((_QWORD *)this + 8) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioSystemEffectsCustomFormats>'};
  v2 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  if ( LODWORD(v2[1].DebugInfo)-- == 1 )
    CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v2);
  LeaveCriticalSection(v2);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 11);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 10);
  *((_DWORD *)this + 19) = -1073741823;
}
