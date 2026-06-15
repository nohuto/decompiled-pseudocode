/*
 * XREFs of ??_GCAPOWrapperClient@@UEAAPEAXI@Z @ 0x18001D850
 * Callers:
 *     <none>
 * Callees:
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x18003918C (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
CAPOWrapperClient *__fastcall CAPOWrapperClient::`scalar deleting destructor'(CAPOWrapperClient *this, char a2)
{
  LPCRITICAL_SECTION v4; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &CAPOWrapperClient::`vftable'{for `IAPOWrapperClient'};
  *((_QWORD *)this + 1) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObject,IAudioSystemEffects2,IApoAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IApoAcousticEchoCancellation,IAPOPreferredFormatSupport,IAudioSystemEffectsCustomFormats>'};
  *((_QWORD *)this + 2) = &CAPOWrapperClient::`vftable'{for `IAudioSystemEffects2'};
  *((_QWORD *)this + 3) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApoAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IApoAcousticEchoCancellation,IAPOPreferredFormatSupport,IAudioSystemEffectsCustomFormats>'};
  *((_QWORD *)this + 4) = &CAPOWrapperClient::`vftable'{for `IAudioProcessingObjectInternal'};
  *((_QWORD *)this + 5) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApoAcousticEchoCancellation,IAPOPreferredFormatSupport,IAudioSystemEffectsCustomFormats>'};
  *((_QWORD *)this + 6) = &CAPOWrapperClient::`vftable'{for `IAPOPreferredFormatSupport'};
  *((_QWORD *)this + 7) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioSystemEffectsCustomFormats>'};
  v4 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  if ( LODWORD(v4[1].DebugInfo)-- == 1 )
    CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v4);
  LeaveCriticalSection(v4);
  v6 = *((_QWORD *)this + 10);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 9);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *((_DWORD *)this + 17) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x70uLL);
  return this;
}
