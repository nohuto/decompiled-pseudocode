/*
 * XREFs of PolicyConfigSetDeviceFormat @ 0x1800EC070
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800C6664 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x1800E7A6C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$01@@U2@U2@U-$_tlgWrap.c)
 */

__int64 __fastcall PolicyConfigSetDeviceFormat(__int64 a1, __int128 *a2, void *a3, unsigned __int16 *a4)
{
  __int64 pftDueTime; // rbx
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // r9d
  unsigned __int16 v26[2]; // [rsp+60h] [rbp-71h] BYREF
  int v27; // [rsp+64h] [rbp-6Dh] BYREF
  __int64 v28; // [rsp+68h] [rbp-69h] BYREF
  int v29; // [rsp+70h] [rbp-61h] BYREF
  int v30; // [rsp+74h] [rbp-5Dh] BYREF
  void *v31; // [rsp+78h] [rbp-59h] BYREF
  GUID *v32; // [rsp+80h] [rbp-51h] BYREF
  const wchar_t *v33; // [rsp+88h] [rbp-49h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+90h] [rbp-41h] BYREF
  GUID v35; // [rsp+C8h] [rbp-9h] BYREF
  __int128 v36; // [rsp+D8h] [rbp+7h]
  __int128 v37; // [rsp+E8h] [rbp+17h] BYREF

  v36 = *a2;
  v37 = v36;
  EtwEventActivityIdControl(4LL, &v37);
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
  v28 = 0LL;
  if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         a1,
         &v28) >= 0 )
  {
    if ( a4 )
    {
      v12 = *a4;
      v35 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v35.Data1 = v12;
      v13 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              v11,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v13 > 4u
        && (*(_BYTE *)(v13 + 16) & 0x20) != 0
        && (*(_QWORD *)(v13 + 24) & 0x20LL) == *(_QWORD *)(v13 + 24) )
      {
        v32 = &v35;
        v29 = *((_DWORD *)a4 + 2);
        v30 = *((_DWORD *)a4 + 1);
        v26[0] = a4[1];
        v33 = L"WFEX";
        v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 40LL))(v28);
        v31 = a3;
        v27 = v14;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v13,
          byte_180189118,
          v15,
          v16,
          &v31,
          (__int64)&v27,
          (void **)&v33,
          (__int64)v26,
          (__int64)&v30,
          (__int64)&v29,
          (__int64 *)&v32);
      }
    }
    else
    {
      v17 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              v11,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v17 > 4u
        && (*(_BYTE *)(v17 + 16) & 0x20) != 0
        && (*(_QWORD *)(v17 + 24) & 0x20LL) == *(_QWORD *)(v17 + 24) )
      {
        v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 40LL))(v28);
        v31 = a3;
        v27 = v18;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
          v17,
          byte_1801890DC,
          v19,
          v20,
          &v31,
          (__int64)&v27);
      }
    }
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
  v21 = (*(__int64 (__fastcall **)(CPolicyConfig *, void *, unsigned __int16 *, _QWORD))(*(_QWORD *)g_PolicyConfig + 48LL))(
          g_PolicyConfig,
          a3,
          a4,
          0LL);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v22, v23, v24);
  EtwEventActivityIdControl(4LL, &v37);
  return v21;
}
