/*
 * XREFs of ?StartActivity@SnapAssistProcessing@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18059CF20
 * Callers:
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18059DAE0 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800529E8 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflector.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x180503F10 (-GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@54444444@Z @ 0x18059AB84 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@U2@U2@U2@U2@U2@U2.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CSnapComponentTelemetry::SnapAssistProcessing::StartActivity(
        __int64 a1,
        int (__fastcall ***a2)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *),
        int a3,
        int a4)
{
  unsigned __int16 **v8; // r8
  int TelemetryIdForView; // eax
  int (__fastcall *v10)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *); // rbx
  int v11; // eax
  int v12; // eax
  int (__fastcall **v13)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *); // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _DWORD *v16; // rbx
  const WCHAR *v17; // rdx
  const WCHAR *v18; // rcx
  const GUID *v19; // rax
  int v20; // [rsp+80h] [rbp-80h] BYREF
  int v21; // [rsp+84h] [rbp-7Ch] BYREF
  int v22; // [rsp+88h] [rbp-78h] BYREF
  int v23; // [rsp+8Ch] [rbp-74h] BYREF
  int v24; // [rsp+90h] [rbp-70h] BYREF
  int v25; // [rsp+94h] [rbp-6Ch] BYREF
  int v26; // [rsp+98h] [rbp-68h] BYREF
  int v27; // [rsp+9Ch] [rbp-64h] BYREF
  DWORD CurrentThreadId; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-58h] BYREF
  const WCHAR *v30; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-48h]
  __int64 v32; // [rsp+C0h] [rbp-40h]
  const WCHAR *v33; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v34; // [rsp+D0h] [rbp-30h]
  __int64 v35; // [rsp+D8h] [rbp-28h]
  __int64 v36; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v37; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v38; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v39; // [rsp+F8h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v33);
  v34 = -1LL;
  v35 = -1LL;
  TelemetryIdForView = ApplicationViewTraceLoggingHelpers::GetTelemetryIdForView(
                         a2,
                         (struct IApplicationView *)&v33,
                         v8);
  if ( TelemetryIdForView < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x125,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\SnapComponentTelemetry.h",
      (const char *)(unsigned int)TelemetryIdForView);
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v10 = (*a2)[17];
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v30);
  v31 = -1LL;
  v32 = -1LL;
  v11 = ((__int64 (__fastcall *)(int (__fastcall ***)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *), const WCHAR **))v10)(
          a2,
          &v30);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x128,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\SnapComponentTelemetry.h",
      (const char *)(unsigned int)v11);
  v39 = 0LL;
  v12 = ((__int64 (__fastcall *)(int (__fastcall ***)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *), __int128 *))(*a2)[16])(
          a2,
          &v39);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x12B,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\SnapComponentTelemetry.h",
      (const char *)(unsigned int)v12);
  v20 = 0;
  v13 = *a2;
  v29 = 0LL;
  if ( v13[13]((ApplicationViewTraceLoggingHelpers *)a2, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, &v29) >= 0 )
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v29 + 32LL))(v29, &v20);
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  v15 = wil::details::static_lazy<WindowManagementLogging>::get(
          v14,
          _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v16 = (_DWORD *)v15[1];
  if ( *v16 > 5u && tlgKeywordOn(v15[1], 0x200000000000LL) )
  {
    v21 = HIDWORD(v39);
    v22 = DWORD2(v39);
    v23 = DWORD1(v39);
    v24 = v39;
    v25 = v20;
    v26 = a4;
    v27 = a3;
    v17 = &LocaleName;
    v18 = &LocaleName;
    if ( v33 )
      v18 = v33;
    v36 = (__int64)v18;
    if ( v30 )
      v17 = v30;
    v37 = (__int64)v17;
    CurrentThreadId = GetCurrentThreadId();
    v38 = 0LL;
    v19 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v16,
      (unsigned __int8 *)dword_1806CA495,
      (const GUID *)(*(_QWORD *)(a1 + 48) + 8LL),
      v19,
      (__int64)&v38,
      (__int64)&CurrentThreadId,
      (const WCHAR **)&v37,
      (const WCHAR **)&v36,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v29);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v30);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v33);
}
