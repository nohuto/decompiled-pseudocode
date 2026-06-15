/*
 * XREFs of ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z @ 0x1800E3080
 * Callers:
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z @ 0x1800E0F8C (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z.c)
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x1800E16F0 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 *     ?SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@HPEAH@Z @ 0x1800E3290 (-SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@HPEAH@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@33@Z @ 0x1800DE554 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ?ResetPolicyGainStages@CAudioSession@@AEAAXXZ @ 0x1800E2584 (-ResetPolicyGainStages@CAudioSession@@AEAAXXZ.c)
 *     WPP_SF_Sd @ 0x1800E3B38 (WPP_SF_Sd.c)
 *     WPP_SF_Sdd @ 0x1800E3BB8 (WPP_SF_Sdd.c)
 */

__int64 __fastcall CAudioSession::SetMute(CAudioSession *this, int a2, const struct _GUID *a3, int a4, int *a5)
{
  int v9; // ebp
  int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rcx
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v18; // [rsp+20h] [rbp-68h]
  int v19; // [rsp+40h] [rbp-48h] BYREF
  int v20; // [rsp+44h] [rbp-44h] BYREF
  const WCHAR *v21; // [rsp+48h] [rbp-40h] BYREF
  int v22; // [rsp+90h] [rbp+8h] BYREF
  int v23; // [rsp+98h] [rbp+10h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      19,
      (unsigned int)&WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids,
      *((_QWORD *)this + 82),
      a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v9 = *((_DWORD *)this + 195);
  v10 = 0;
  if ( v9 != a2 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sdd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        20,
        (unsigned int)&WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids,
        *((_QWORD *)this + 82),
        v9,
        a2);
    }
    CAudioSession::ResetPolicyGainStages((struct _RTL_CRITICAL_SECTION *)this);
    v11 = *(_QWORD *)this;
    *((_DWORD *)this + 195) = a2;
    if ( (*(int (__fastcall **)(CAudioSession *, int *))(v11 + 96))(this, &v23) >= 0 )
    {
      v13 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                        v12,
                        _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *v13 > 4u )
      {
        if ( tlgKeywordOn((__int64)v13, 0x400000000002LL) )
        {
          v22 = v23;
          v19 = *((_DWORD *)this + 162);
          v21 = (const WCHAR *)*((_QWORD *)this + 82);
          v20 = a2;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v14,
            byte_1801916CD,
            v15,
            v16,
            (__int64)&v20,
            &v21,
            (__int64)&v19,
            (__int64)&v22);
        }
      }
    }
  }
  if ( this != (CAudioSession *)-736LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  if ( v9 != a2 && !a4 )
  {
    LOBYTE(v18) = 0;
    (*(void (__fastcall **)(char *, _QWORD, const struct _GUID *, __int64, int, _QWORD))(*((_QWORD *)this + 1) + 152LL))(
      (char *)this + 8,
      0LL,
      a3,
      0xFFFFFFFFLL,
      v18,
      0LL);
  }
  if ( a5 )
  {
    LOBYTE(v10) = v9 == a2;
    *a5 = v10;
  }
  return 0LL;
}
