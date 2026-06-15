/*
 * XREFs of AudioServerCreateStream @ 0x180011CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000F420 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18001298C (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z @ 0x180046C2C (-GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     wil::details::lambda_call__lambda_4fb8f97105e4204af9bd3fdc1394c3a7___::_lambda_call__lambda_4fb8f97105e4204af9bd3fdc1394c3a7___ @ 0x180073A74 (wil--details--lambda_call__lambda_4fb8f97105e4204af9bd3fdc1394c3a7___--_lambda_call__lambda_4fb8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18008210C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU.c)
 *     ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x1800D15A0 (--1TraceLoggingThreadActivityIdSetter@@QEAA@XZ.c)
 */

__int64 __fastcall AudioServerCreateStream(
        void *a1,
        unsigned int a2,
        struct IMMDeviceVtbl *a3,
        struct IMMDeviceVtbl *a4,
        unsigned int a5,
        struct SYSTEM_AUDIO_STREAM *a6)
{
  __int64 (__fastcall *v10)(struct IAudioPolicyManager *, _QWORD, __int64 *); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  struct _FILETIME v14; // rbx
  RPC_STATUS v15; // ebx
  int ThreadLogonSessionStringSid; // eax
  HLOCAL v17; // rbx
  int Stream; // eax
  unsigned int v19; // edi
  __int64 v21; // rdx
  int pftDueTime; // [rsp+20h] [rbp-99h]
  int pftDueTimea; // [rsp+20h] [rbp-99h]
  int pftDueTimeb; // [rsp+20h] [rbp-99h]
  _BYTE v25[8]; // [rsp+40h] [rbp-79h] BYREF
  HLOCAL hMem; // [rsp+48h] [rbp-71h] BYREF
  __int64 v27; // [rsp+50h] [rbp-69h] BYREF
  int v28; // [rsp+58h] [rbp-61h] BYREF
  _BYTE pv[56]; // [rsp+60h] [rbp-59h] BYREF
  _BYTE v30[16]; // [rsp+98h] [rbp-21h] BYREF
  _BYTE v31[16]; // [rsp+A8h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+4Fh]

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v30, a1);
  v27 = 0LL;
  v10 = *(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL);
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v27);
  v11 = v10(g_PolicyManager, 0LL, &v27);
  v12 = v11;
  if ( v11 < 0 )
  {
    v21 = 2899LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v11,
      pftDueTime);
LABEL_19:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v27);
    TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter((TraceLoggingThreadActivityIdSetter *)v30);
    return v12;
  }
  v28 = 0;
  v11 = (*(__int64 (__fastcall **)(__int64, bool, _QWORD, int *))(*(_QWORD *)v27 + 152LL))(v27, a2 == 1, a5, &v28);
  v12 = v11;
  if ( v11 < 0 )
  {
    v21 = 2908LL;
    goto LABEL_12;
  }
  if ( !v28 )
  {
    v12 = -2005139338;
    goto LABEL_19;
  }
  v14 = g_AudioHealthMonitor;
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    v13,
    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v14);
  hMem = 0LL;
  v15 = RpcImpersonateClient(0LL);
  if ( v15 )
  {
    v12 = v15 | 0x80010000;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB6B,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v12,
      pftDueTimea);
LABEL_16:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&hMem);
    CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
    goto LABEL_19;
  }
  v25[1] = 1;
  ThreadLogonSessionStringSid = GetThreadLogonSessionStringSid((unsigned __int16 **)&hMem);
  v12 = ThreadLogonSessionStringSid;
  if ( ThreadLogonSessionStringSid < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB73,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)ThreadLogonSessionStringSid,
      pftDueTimea);
    wil::details::lambda_call__lambda_4fb8f97105e4204af9bd3fdc1394c3a7___::_lambda_call__lambda_4fb8f97105e4204af9bd3fdc1394c3a7___(v25);
    goto LABEL_16;
  }
  wil::details::lambda_call__lambda_4fb8f97105e4204af9bd3fdc1394c3a7___::_lambda_call__lambda_4fb8f97105e4204af9bd3fdc1394c3a7___(v25);
  v17 = hMem;
  Stream = CVADServer::CreateStream((__int64)a1, v27, a2, a3, a4, (__int64)hMem, a6);
  v19 = Stream;
  if ( Stream < 0 )
  {
    v12 = -2005139333;
    if ( Stream != -2005139333 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB7B,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)Stream,
        pftDueTimeb);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&hMem);
      CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
      v12 = v19;
      goto LABEL_19;
    }
    goto LABEL_16;
  }
  if ( v17 )
    LocalFree(v17);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v27);
  EtwEventActivityIdControl(4LL, v31);
  return 0LL;
}
