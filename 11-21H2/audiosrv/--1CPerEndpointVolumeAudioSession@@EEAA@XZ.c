/*
 * XREFs of ??1CPerEndpointVolumeAudioSession@@EEAA@XZ @ 0x1800D618C
 * Callers:
 *     ??_ECPerEndpointVolumeAudioSession@@EEAAPEAXI@Z @ 0x1800D65F0 (--_ECPerEndpointVolumeAudioSession@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     WPP_SF_q @ 0x1800C9BAC (WPP_SF_q.c)
 *     ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x1800D7640 (-FinalRelease@CAudioSession@@MEAAXXZ.c)
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
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Bu,
      (__int64)&WPP_d4601149da203bf03f1316021d4590fb_Traceguids,
      this);
  }
  CAudioSession::FinalRelease(this);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 121);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 928));
  CAudioSession::~CAudioSession(this);
}
