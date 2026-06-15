/*
 * XREFs of ??1CSystemEffectWrapper@@UEAA@XZ @ 0x140011E2C
 * Callers:
 *     ??_GCSystemEffectWrapper@@UEAAPEAXI@Z @ 0x140011DE0 (--_GCSystemEffectWrapper@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSystemEffectWrapper::~CSystemEffectWrapper(CSystemEffectWrapper *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CSystemEffectWrapper::`vftable'{for `INDUnknown'};
  *((_QWORD *)this + 1) = &CSystemEffectWrapper::`vftable'{for `IAudioProcessingObject'};
  *((_QWORD *)this + 2) = &CSystemEffectWrapper::`vftable'{for `IAudioProcessingObjectConfiguration'};
  *((_QWORD *)this + 3) = &CSystemEffectWrapper::`vftable'{for `IAudioProcessingObjectRT'};
  *((_QWORD *)this + 4) = &CSystemEffectWrapper::`vftable'{for `IAudioSystemEffects3'};
  *((_QWORD *)this + 5) = &CSystemEffectWrapper::`vftable'{for `IApoAuxiliaryInputConfiguration'};
  *((_QWORD *)this + 6) = &CSystemEffectWrapper::`vftable'{for `IApoAuxiliaryInputRT'};
  *((_QWORD *)this + 7) = &CSystemEffectWrapper::`vftable'{for `IApoAcousticEchoCancellation'};
  *((_QWORD *)this + 8) = &CSystemEffectWrapper::`vftable'{for `IAudioAmbisonics'};
  *((_QWORD *)this + 9) = &CSystemEffectWrapper::`vftable'{for `IAPOPreferredFormatSupport'};
  *((_QWORD *)this + 10) = &CSystemEffectWrapper::`vftable'{for `ISystemEffectWrapper'};
  *((_QWORD *)this + 11) = &CSystemEffectWrapper::`vftable'{for `IAudioProcessingObjectNotifications'};
  *((_QWORD *)this + 12) = &CSystemEffectWrapper::`vftable'{for `IAPOWrapperSrv'};
  v2 = *((_QWORD *)this + 14);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 14) = 0LL;
  }
  CoTaskMemFree(*((LPVOID *)this + 17));
  *((_QWORD *)this + 17) = 0LL;
}
