/*
 * XREFs of ?InitializeSilenceMonitorInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000F480
 * Callers:
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x14001148C (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002A38 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     atexit @ 0x140028478 (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x140050464 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     WPP_SF_d @ 0x140052944 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DA4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPipeInstance::InitializeSilenceMonitorInterface(
        CPipeInstance *this,
        struct CProcessNode *a2,
        struct IAudioProcessingObject *a3)
{
  int v5; // ebx
  LPVOID pv; // [rsp+20h] [rbp-19h] BYREF
  WINBOOL fPending; // [rsp+28h] [rbp-11h] BYREF
  LPVOID Context; // [rsp+30h] [rbp-9h] BYREF
  __int64 v10; // [rsp+38h] [rbp-1h] BYREF
  union _RTL_RUN_ONCE *v11; // [rsp+40h] [rbp+7h] BYREF
  int v12; // [rsp+48h] [rbp+Fh]
  _OWORD v13[2]; // [rsp+50h] [rbp+17h] BYREF
  __int128 v14; // [rsp+70h] [rbp+37h]
  __int64 v15; // [rsp+80h] [rbp+47h]

  v10 = 0LL;
  memset(v13, 0, sizeof(v13));
  v14 = 0LL;
  v15 = 0LL;
  pv = 0LL;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_22150b0d_ab8e_4f85_bd9a_8580e3b290f1,
         &v10) >= 0 )
  {
    LODWORD(v13[0]) = 56;
    *(GUID *)((char *)v13 + 4) = GUID_693badea_1eb1_4013_b799_285f624a55bd;
    mmdDevGetInstanceIdFromMMDeviceId(*((_QWORD *)this + 24), &pv);
    *((_QWORD *)&v13[1] + 1) = pv;
    v14 = *(_OWORD *)((char *)this + 296);
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      v11 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
      Context = &qword_1400CF680;
      qword_1400CF680 = (__int64)&AudioDgTelemetryProvider::`vftable';
      qword_1400CF698 = (__int64)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
      v12 = 0;
      wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v11);
    }
    v15 = *((_QWORD *)Context + 1);
    v5 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _OWORD *))a3->lpVtbl->Initialize)(
           a3,
           56LL,
           v13);
    if ( v5 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          49LL,
          &WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids,
          (unsigned int)v5);
      }
      AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeSilenceMonitorInterface", 0xF4Au, v5);
    }
  }
  else
  {
    v5 = 0;
  }
  CoTaskMemFree(pv);
  pv = 0LL;
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v10);
  return (unsigned int)v5;
}
