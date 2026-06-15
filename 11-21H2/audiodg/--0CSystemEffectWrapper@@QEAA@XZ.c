/*
 * XREFs of ??0CSystemEffectWrapper@@QEAA@XZ @ 0x140011CD0
 * Callers:
 *     ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEAU5@@Z @ 0x140011C40 (-Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEA.c)
 * Callees:
 *     <none>
 */

CSystemEffectWrapper *__fastcall CSystemEffectWrapper::CSystemEffectWrapper(CSystemEffectWrapper *this)
{
  *((_DWORD *)this + 26) = 1;
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
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_DWORD *)this + 64) = 0;
  return this;
}
