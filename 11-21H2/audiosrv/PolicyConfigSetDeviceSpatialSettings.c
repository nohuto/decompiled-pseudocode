/*
 * XREFs of PolicyConfigSetDeviceSpatialSettings @ 0x1800EC300
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x1800E7B9C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlg_ea_1800E7B9C.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$01@@U1@U5@U2@U2@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$01@@37446@Z @ 0x1800E7C78 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlg_ea_1800E7C78.c)
 */

__int64 __fastcall PolicyConfigSetDeviceSpatialSettings(
        __int64 a1,
        __int128 *a2,
        void *a3,
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
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // r9d
  _BYTE v30[2]; // [rsp+70h] [rbp-90h] BYREF
  __int16 v31; // [rsp+72h] [rbp-8Eh] BYREF
  unsigned __int16 v32; // [rsp+74h] [rbp-8Ch] BYREF
  int v33; // [rsp+78h] [rbp-88h] BYREF
  __int64 v34; // [rsp+80h] [rbp-80h] BYREF
  int v35; // [rsp+88h] [rbp-78h] BYREF
  int v36; // [rsp+8Ch] [rbp-74h] BYREF
  int v37[2]; // [rsp+90h] [rbp-70h] BYREF
  void *v38; // [rsp+98h] [rbp-68h] BYREF
  GUID *v39; // [rsp+A0h] [rbp-60h] BYREF
  const wchar_t *v40; // [rsp+A8h] [rbp-58h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+B0h] [rbp-50h] BYREF
  GUID v42; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v43; // [rsp+F8h] [rbp-8h]
  __int128 v44; // [rsp+108h] [rbp+8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v43 = *a2;
  v44 = v43;
  EtwEventActivityIdControl(4LL, &v44);
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
  if ( a4 )
  {
    v34 = 0LL;
    if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
           g_PolicyManager,
           a1,
           &v34) >= 0 )
    {
      if ( a5 )
      {
        v16 = *a5;
        v42 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v42.Data1 = v16;
        v17 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                v15,
                _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
        if ( *(_DWORD *)v17 > 4u
          && (*(_BYTE *)(v17 + 16) & 0x20) != 0
          && (*(_QWORD *)(v17 + 24) & 0x20LL) == *(_QWORD *)(v17 + 24) )
        {
          v39 = &v42;
          v35 = *((_DWORD *)a5 + 2);
          v36 = *((_DWORD *)a5 + 1);
          v32 = a5[1];
          v40 = L"WFEX";
          v31 = *(_WORD *)(a4 + 68);
          *(_QWORD *)v37 = a4 + 12;
          v30[0] = *(_BYTE *)a4;
          v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 40LL))(v34);
          v38 = a3;
          v33 = v18;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            v17,
            byte_180188FFE,
            v19,
            v20,
            &v38,
            (__int64)&v33,
            (__int64)v30,
            (__int64 *)v37,
            (__int64)&v31,
            (void **)&v40,
            (__int64)&v32,
            (__int64)&v36,
            (__int64)&v35,
            (__int64 *)&v39);
        }
      }
      else
      {
        v21 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                v15,
                _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
        if ( *(_DWORD *)v21 > 4u
          && (*(_BYTE *)(v21 + 16) & 0x20) != 0
          && (*(_QWORD *)(v21 + 24) & 0x20LL) == *(_QWORD *)(v21 + 24) )
        {
          v31 = *(_WORD *)(a4 + 68);
          v38 = (void *)(a4 + 12);
          v30[0] = *(_BYTE *)a4;
          v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 40LL))(v34);
          *(_QWORD *)v37 = a3;
          v33 = v22;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>>(
            v21,
            byte_180188F8E,
            v23,
            v24,
            (void **)v37,
            (__int64)&v33,
            (__int64)v30,
            (__int64 *)&v38,
            (__int64)&v31);
        }
      }
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v34);
    v25 = (*(__int64 (__fastcall **)(CPolicyConfig *, void *, __int64, unsigned __int16 *))(*(_QWORD *)g_PolicyConfig
                                                                                          + 280LL))(
            g_PolicyConfig,
            a3,
            a4,
            a5);
    v12 = v25;
    if ( v25 >= 0 )
    {
      v12 = 0;
      goto LABEL_17;
    }
    v14 = (unsigned int)v25;
    v13 = 2761LL;
  }
  else
  {
    v12 = -2147467261;
    v13 = 2725LL;
    v14 = 2147500035LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)v14);
LABEL_17:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v26, v27, v28);
  EtwEventActivityIdControl(4LL, &v44);
  return v12;
}
