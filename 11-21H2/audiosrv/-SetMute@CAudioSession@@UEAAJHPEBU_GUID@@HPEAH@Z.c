/*
 * XREFs of ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z @ 0x1800117B0
 * Callers:
 *     ?SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@HPEAH@Z @ 0x180011720 (-SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@HPEAH@Z.c)
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z @ 0x1800D8CE4 (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z.c)
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x1800D9630 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?ResetPolicyGainStages@CAudioSession@@AEAAXXZ @ 0x18003C8C0 (-ResetPolicyGainStages@CAudioSession@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_Sd @ 0x1800CB2DC (WPP_SF_Sd.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@33@Z @ 0x1800D5224 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     WPP_SF_Sdd @ 0x1800DB64C (WPP_SF_Sdd.c)
 */

__int64 __fastcall CAudioSession::SetMute(CAudioSession *this, int a2, const struct _GUID *a3, int a4, int *a5)
{
  int v9; // r14d
  int v10; // ebx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // r9d
  int v17; // [rsp+20h] [rbp-40h]
  int v18; // [rsp+40h] [rbp-20h] BYREF
  int v19; // [rsp+44h] [rbp-1Ch] BYREF
  __int64 v20; // [rsp+48h] [rbp-18h] BYREF
  char *v21; // [rsp+50h] [rbp-10h] BYREF
  int v22; // [rsp+A0h] [rbp+40h] BYREF
  int v23; // [rsp+A8h] [rbp+48h] BYREF

  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      19,
      (unsigned int)&WPP_d4601149da203bf03f1316021d4590fb_Traceguids,
      *((_QWORD *)this + 82),
      a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v9 = *((_DWORD *)this + 195);
  v21 = (char *)this + 736;
  v10 = 0;
  if ( v9 != a2 )
  {
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sdd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        20,
        (unsigned int)&WPP_d4601149da203bf03f1316021d4590fb_Traceguids,
        *((_QWORD *)this + 82),
        v9,
        a2);
    }
    CAudioSession::ResetPolicyGainStages(this);
    v12 = *(_QWORD *)this;
    *((_DWORD *)this + 195) = a2;
    if ( (*(int (__fastcall **)(CAudioSession *, int *))(v12 + 96))(this, &v23) >= 0 )
    {
      v14 = *(_QWORD *)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                          v13,
                          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                      + 8);
      if ( *(_DWORD *)v14 > 4u
        && (*(_QWORD *)(v14 + 16) & 0x400000000002LL) != 0
        && (*(_QWORD *)(v14 + 24) & 0x400000000002LL) == *(_QWORD *)(v14 + 24) )
      {
        v22 = v23;
        v18 = *((_DWORD *)this + 162);
        v20 = *((_QWORD *)this + 82);
        v19 = a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v14,
          (unsigned int)&unk_180188C1A,
          v15,
          v16,
          (__int64)&v19,
          (__int64)&v20,
          (__int64)&v18,
          (__int64)&v22);
      }
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v21);
  if ( v9 != a2 && !a4 )
  {
    LOBYTE(v17) = 0;
    (*(void (__fastcall **)(char *, _QWORD, const struct _GUID *, __int64, int, _QWORD))(*((_QWORD *)this + 1) + 152LL))(
      (char *)this + 8,
      0LL,
      a3,
      0xFFFFFFFFLL,
      v17,
      0LL);
  }
  if ( a5 )
  {
    LOBYTE(v10) = v9 == a2;
    *a5 = v10;
  }
  return 0LL;
}
