/*
 * XREFs of PolicyConfigSetDeviceFormat @ 0x1801183E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180080F3A (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x180113AB4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$01@@U2@U2@U-$_tlgWrap.c)
 */

__int64 __fastcall PolicyConfigSetDeviceFormat(__int64 a1, __int128 *a2, const WCHAR *a3, unsigned __int16 *a4)
{
  __int64 pftDueTime; // rbx
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 *v13; // rax
  _DWORD *v14; // rbx
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rax
  _DWORD *v19; // rbx
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // ebx
  unsigned __int16 v25[2]; // [rsp+60h] [rbp-71h] BYREF
  int v26; // [rsp+64h] [rbp-6Dh] BYREF
  __int64 v27; // [rsp+68h] [rbp-69h] BYREF
  int v28; // [rsp+70h] [rbp-61h] BYREF
  int v29; // [rsp+74h] [rbp-5Dh] BYREF
  const WCHAR *v30; // [rsp+78h] [rbp-59h] BYREF
  GUID *v31; // [rsp+80h] [rbp-51h] BYREF
  const WCHAR *v32; // [rsp+88h] [rbp-49h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+90h] [rbp-41h] BYREF
  GUID v34; // [rsp+C8h] [rbp-9h] BYREF
  __int128 v35; // [rsp+D8h] [rbp+7h]
  __int128 v36; // [rsp+E8h] [rbp+17h] BYREF

  v35 = *a2;
  v36 = v35;
  EtwEventActivityIdControl(4LL, &v36);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v8 = g_AudioSrvWatchDogTimerInMs;
  v10 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          v9,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v10[1],
    v8,
    (struct _TP_TIMER *)L"PolicyConfigSetDeviceFormat",
    pftDueTime);
  v27 = 0LL;
  if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         a1,
         &v27) >= 0 )
  {
    if ( a4 )
    {
      v12 = *a4;
      v34 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v34.Data1 = v12;
      v13 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              v11,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      v14 = (_DWORD *)v13[1];
      if ( *v14 > 4u && tlgKeywordOn(v13[1], 32LL) )
      {
        v31 = &v34;
        v28 = *((_DWORD *)a4 + 2);
        v29 = *((_DWORD *)a4 + 1);
        v25[0] = a4[1];
        v32 = L"WFEX";
        v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 40LL))(v27);
        v30 = a3;
        v26 = v15;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          (__int64)v14,
          byte_180193B0C,
          v16,
          v17,
          &v30,
          (__int64)&v26,
          &v32,
          (__int64)v25,
          (__int64)&v29,
          (__int64)&v28,
          (__int64 *)&v31);
      }
    }
    else
    {
      v18 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              v11,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      v19 = (_DWORD *)v18[1];
      if ( *v19 > 4u && tlgKeywordOn(v18[1], 32LL) )
      {
        v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 40LL))(v27);
        v30 = a3;
        v26 = v20;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
          (__int64)v19,
          byte_180193A9D,
          v21,
          v22,
          &v30,
          (__int64)&v26);
      }
    }
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v27);
  v23 = (*(__int64 (__fastcall **)(CPolicyConfig *, const WCHAR *, unsigned __int16 *, _QWORD))(*(_QWORD *)g_PolicyConfig
                                                                                              + 48LL))(
          g_PolicyConfig,
          a3,
          a4,
          0LL);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v36);
  return v23;
}
