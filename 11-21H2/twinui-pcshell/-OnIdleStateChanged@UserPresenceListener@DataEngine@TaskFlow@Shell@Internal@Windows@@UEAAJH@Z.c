/*
 * XREFs of ?OnIdleStateChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJH@Z @ 0x18000B200
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??$GetActivationFactory@UIUserPresenceDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIUserPresenceDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18000B410 (--$GetActivationFactory@UIUserPresenceDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@w.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemetry@@P6AXXZ@Z @ 0x1800A80C4 (-get@-$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemet.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800A8220 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::OnIdleStateChanged(
        Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener *this,
        DWORD a2)
{
  _DWORD *v4; // rcx
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // eax
  _DWORD *v8; // rcx
  int v9; // r9d
  int v10; // eax
  int v12; // [rsp+20h] [rbp-78h]
  struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp-68h] BYREF
  int v14; // [rsp+38h] [rbp-60h]
  __int64 v15; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v16; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+58h] [rbp-40h] BYREF
  struct _FILETIME *p_SystemTimeAsFileTime; // [rsp+78h] [rbp-20h]
  int v20; // [rsp+80h] [rbp-18h]
  int v21; // [rsp+84h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  LOWORD(v14) = 0;
  v4 = *(_DWORD **)(wil::details::static_lazy<TaskFlowDataEngineTelemetry>::get(
                      this,
                      _lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v4 > 5u )
  {
    SystemTimeAsFileTime.dwLowDateTime = a2;
    p_SystemTimeAsFileTime = &SystemTimeAsFileTime;
    v20 = 4;
    v21 = 0;
    tlgWriteTransfer_EventWriteTransfer((int)v4, (int)&dword_1806B0458, 0, 0, 3u, &v18);
  }
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v5 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  wil::GetActivationFactory<Windows::Internal::Shell::TaskFlow::DataEngine::IUserPresenceDataFactory>(&v16);
  v15 = 0LL;
  v6 = *v16;
  v15 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, bool, unsigned __int64, __int64 *))(v6 + 48))(v16, a2 != 0, v5, &v15);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x6D,
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\userpresencelistener.cpp",
      (const char *)(unsigned int)v7,
      v12);
  v8 = *(_DWORD **)(wil::details::static_lazy<TaskFlowDataEngineTelemetry>::get(
                      retaddr,
                      _lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v8 > 5u )
  {
    v17 = v5;
    SystemTimeAsFileTime.dwLowDateTime = a2 != 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (_DWORD)v8,
      (unsigned int)&unk_1806B0413,
      0,
      v9,
      (__int64)&SystemTimeAsFileTime,
      (__int64)&v17);
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 7) + 64LL))(*((_QWORD *)this + 7), v15);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x71,
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\userpresencelistener.cpp",
      (const char *)(unsigned int)v10,
      v12);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v15);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v16);
  return 0LL;
}
