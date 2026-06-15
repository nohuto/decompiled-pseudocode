/*
 * XREFs of PolicyConfigSetDeviceSpatialSettings @ 0x1801186B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x1800D15F0 (--1TraceLoggingThreadActivityIdSetter@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x180113C34 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByRef@.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$01@@U1@U5@U2@U2@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$01@@37446@Z @ 0x180113D10 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlg_ea_180113D10.c)
 */

__int64 __fastcall PolicyConfigSetDeviceSpatialSettings(
        __int64 a1,
        __int128 *a2,
        const WCHAR *a3,
        __int64 a4,
        unsigned __int16 *a5)
{
  __int64 pftDueTime; // rbx
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 *v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 *v17; // rax
  _DWORD *v18; // rbx
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // rax
  _DWORD *v23; // rbx
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  _BYTE v29[2]; // [rsp+70h] [rbp-90h] BYREF
  __int16 v30; // [rsp+72h] [rbp-8Eh] BYREF
  unsigned __int16 v31; // [rsp+74h] [rbp-8Ch] BYREF
  int v32; // [rsp+78h] [rbp-88h] BYREF
  __int64 v33; // [rsp+80h] [rbp-80h] BYREF
  int v34; // [rsp+88h] [rbp-78h] BYREF
  int v35; // [rsp+8Ch] [rbp-74h] BYREF
  int v36[2]; // [rsp+90h] [rbp-70h] BYREF
  const WCHAR *v37; // [rsp+98h] [rbp-68h] BYREF
  GUID *v38; // [rsp+A0h] [rbp-60h] BYREF
  const WCHAR *v39; // [rsp+A8h] [rbp-58h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+B0h] [rbp-50h] BYREF
  GUID v41; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v42; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v43; // [rsp+108h] [rbp+8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v42 = *a2;
  v43 = v42;
  EtwEventActivityIdControl(4LL, &v43);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v9 = g_AudioSrvWatchDogTimerInMs;
  v11 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          v10,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v11[1],
    v9,
    (struct _TP_TIMER *)L"PolicyConfigSetDeviceSpatialSettings",
    pftDueTime);
  if ( !a4 )
  {
    v12 = -2147467261;
    v13 = 2984LL;
    v14 = 2147500035LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)v14);
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
    TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter((TraceLoggingThreadActivityIdSetter *)&v42);
    return v12;
  }
  v33 = 0LL;
  if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         a1,
         &v33) >= 0 )
  {
    if ( a5 )
    {
      v16 = *a5;
      v41 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v41.Data1 = v16;
      v17 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              v15,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      v18 = (_DWORD *)v17[1];
      if ( *v18 > 4u )
      {
        if ( tlgKeywordOn(v17[1], 32LL) )
        {
          v38 = &v41;
          v34 = *((_DWORD *)a5 + 2);
          v35 = *((_DWORD *)a5 + 1);
          v31 = a5[1];
          v39 = L"WFEX";
          v30 = *(_WORD *)(a4 + 68);
          *(_QWORD *)v36 = a4 + 12;
          v29[0] = *(_BYTE *)a4;
          v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 40LL))(v33);
          v37 = a3;
          v32 = v19;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            (__int64)v18,
            byte_1801939F2,
            v20,
            v21,
            &v37,
            (__int64)&v32,
            (__int64)v29,
            (__int64 *)v36,
            (__int64)&v30,
            &v39,
            (__int64)&v31,
            (__int64)&v35,
            (__int64)&v34,
            (__int64 *)&v38);
        }
      }
    }
    else
    {
      v22 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              v15,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      v23 = (_DWORD *)v22[1];
      if ( *v23 > 4u && tlgKeywordOn(v22[1], 32LL) )
      {
        v30 = *(_WORD *)(a4 + 68);
        v37 = (const WCHAR *)(a4 + 12);
        v29[0] = *(_BYTE *)a4;
        v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 40LL))(v33);
        *(_QWORD *)v36 = a3;
        v32 = v24;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>>(
          (__int64)v23,
          byte_180193982,
          v25,
          v26,
          (const WCHAR **)v36,
          (__int64)&v32,
          (__int64)v29,
          (__int64 *)&v37,
          (__int64)&v30);
      }
    }
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v33);
  v27 = (*(__int64 (__fastcall **)(CPolicyConfig *, const WCHAR *, __int64, unsigned __int16 *))(*(_QWORD *)g_PolicyConfig
                                                                                               + 280LL))(
          g_PolicyConfig,
          a3,
          a4,
          a5);
  v12 = v27;
  if ( v27 < 0 )
  {
    v14 = (unsigned int)v27;
    v13 = 3020LL;
    goto LABEL_13;
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v43);
  return 0LL;
}
