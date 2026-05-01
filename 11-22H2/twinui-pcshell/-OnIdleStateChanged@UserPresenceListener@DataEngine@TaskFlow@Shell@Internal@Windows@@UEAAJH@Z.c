/*
 * XREFs of ?OnIdleStateChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJH@Z @ 0x1804A67C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemetry@@P6AXXZ@Z @ 0x18010F82C (-get@-$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemet.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180110D88 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1ListenerTelemetrySignalTracker@@QEAA@XZ @ 0x1804A3380 (--1ListenerTelemetrySignalTracker@@QEAA@XZ.c)
 *     ??$GetActivationFactory@UIUserPresenceDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIUserPresenceDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1804A61A4 (--$GetActivationFactory@UIUserPresenceDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@w.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::OnIdleStateChanged(
        Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener *this,
        DWORD a2)
{
  _DWORD *v4; // rcx
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned int v7; // r8d
  __int64 v8; // rax
  int v9; // eax
  _DWORD *v10; // rcx
  __int64 v11; // r9
  int v12; // eax
  int v14; // [rsp+20h] [rbp-78h]
  __int16 v15; // [rsp+30h] [rbp-68h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+38h] [rbp-60h] BYREF
  __int64 v17; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v18; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+50h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+58h] [rbp-40h] BYREF
  struct _FILETIME *p_SystemTimeAsFileTime; // [rsp+78h] [rbp-20h]
  int v22; // [rsp+80h] [rbp-18h]
  int v23; // [rsp+84h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v15 = 0;
  v4 = (_DWORD *)wil::details::static_lazy<TaskFlowDataEngineTelemetry>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 5u )
  {
    SystemTimeAsFileTime.dwLowDateTime = a2;
    p_SystemTimeAsFileTime = &SystemTimeAsFileTime;
    v22 = 4;
    v23 = 0;
    tlgWriteTransfer_EventWriteTransfer((__int64)v4, (unsigned __int8 *)dword_18085786A, 0LL, 0LL, 3u, &v20);
  }
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v5 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  wil::GetActivationFactory<Windows::Internal::Shell::TaskFlow::DataEngine::IUserPresenceDataFactory>(
    (const WCHAR *)&v18,
    v6,
    v7);
  v17 = 0LL;
  v8 = *v18;
  v17 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, bool, unsigned __int64, __int64 *))(v8 + 48))(v18, a2 != 0, v5, &v17);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x6D,
      (int)"pcshell\\twinui\\taskflowbroker\\lib\\userpresencelistener.cpp",
      (const char *)(unsigned int)v9,
      v14);
  v10 = (_DWORD *)wil::details::static_lazy<TaskFlowDataEngineTelemetry>::get(
                    (__int64)retaddr,
                    (void (__cdecl *)())_lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_)[1];
  if ( *v10 > 5u )
  {
    v19 = v5;
    SystemTimeAsFileTime.dwLowDateTime = a2 != 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)v10,
      byte_180857897,
      0LL,
      v11,
      (__int64)&SystemTimeAsFileTime,
      (__int64)&v19);
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 7) + 64LL))(*((_QWORD *)this + 7), v17);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x71,
      (int)"pcshell\\twinui\\taskflowbroker\\lib\\userpresencelistener.cpp",
      (const char *)(unsigned int)v12,
      v14);
  LOBYTE(v15) = 1;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v18);
  ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)&v15);
  return 0LL;
}
