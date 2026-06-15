/*
 * XREFs of ?Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140057EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z @ 0x140021688 (-ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z.c)
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x1400216E8 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_CRITICAL_SECTION@@@Z @ 0x1400380F4 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCritic.c)
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x1400557C0 (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     WPP_SF_Ds @ 0x140055E88 (WPP_SF_Ds.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DA4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceExclusive::Initialize(
        CSystemAudioDeviceExclusive *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        int a4)
{
  __int128 v4; // xmm0
  int v8; // ebx
  int v9; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+38h] [rbp-40h]
  __int128 v13; // [rsp+48h] [rbp-30h] BYREF

  v4 = *(_OWORD *)((char *)a2 + 148);
  *(_OWORD *)((char *)this + 248) = v4;
  v12 = v4;
  v13 = v4;
  EtwEventActivityIdControl(4LL, &v13);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  *((_DWORD *)this + 56) = a4;
  *((_DWORD *)this + 60) = *((_DWORD *)a2 + 34);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
  v8 = CSystemAudioDeviceBase::ActivateEndpoint(this, a2);
  if ( v8 < 0 )
    goto LABEL_4;
  *((_QWORD *)this + 45) = *((_QWORD *)a2 + 4);
  *((_QWORD *)this + 46) = *((_QWORD *)a2 + 5);
  *((_DWORD *)this + 94) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 18);
  v9 = CSystemAudioDeviceCollection::Add(*((const unsigned __int16 **)a2 + 7), this);
  *((_DWORD *)this + 95) = v9;
  if ( !v9 )
  {
    v8 = -2147024882;
LABEL_4:
    (*(void (__fastcall **)(CSystemAudioDeviceExclusive *))(*(_QWORD *)this + 200LL))(this);
    goto LABEL_5;
  }
  v8 = CSystemAudioDeviceBase::ApplyFxStateSettings(this, a2, 0);
LABEL_5:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
    &lpCriticalSection,
    0LL);
  if ( v8 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_Ds(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xAu,
        (__int64)&WPP_980b67fa5e2e3abd99d2fcedd60d2ea4_Traceguids,
        v8,
        (__int64)"CSystemAudioDeviceExclusive::Initialize");
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceExclusive::Initialize", 0x81u, v8);
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  EtwEventActivityIdControl(4LL, &v13);
  return (unsigned int)v8;
}
