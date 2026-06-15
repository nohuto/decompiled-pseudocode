/*
 * XREFs of ??1CPerEndpointVolumeAudioSession@@EEAA@XZ @ 0x1800DEBFC
 * Callers:
 *     ??_ECPerEndpointVolumeAudioSession@@EEAAPEAXI@Z @ 0x1800DEF50 (--_ECPerEndpointVolumeAudioSession@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x180018F50 (-FinalRelease@CAudioSession@@MEAAXXZ.c)
 *     WPP_SF_q @ 0x1800E3ED0 (WPP_SF_q.c)
 */

void __fastcall CPerEndpointVolumeAudioSession::~CPerEndpointVolumeAudioSession(CPerEndpointVolumeAudioSession *this)
{
  *(_QWORD *)this = &CPerEndpointVolumeAudioSession::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CPerEndpointVolumeAudioSession::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::ChainInterfaces<IAudioSessionPolicyControl,IAudioSessionInfo,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IWeakReferenceSource,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>'};
  *((_QWORD *)this + 2) = &CPerEndpointVolumeAudioSession::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CPerEndpointVolumeAudioSession::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>'};
  *((_QWORD *)this + 4) = &CPerEndpointVolumeAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
  *((_QWORD *)this + 5) = &CPerEndpointVolumeAudioSession::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  *((_QWORD *)this + 115) = &CPerEndpointVolumeAudioSession::`vftable';
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 43LL, &WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids, this);
  }
  CAudioSession::FinalRelease(this);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 121);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 928));
  CAudioSession::~CAudioSession(this);
}
