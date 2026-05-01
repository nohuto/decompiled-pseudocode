/*
 * XREFs of ?ReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1802D703E
 * Callers:
 *     ?TryUpdateAndReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_K@Z @ 0x1802D7214 (-TryUpdateAndReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Win.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180038F60 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?get@?$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemetry@@P6AXXZ@Z @ 0x18010F82C (-get@-$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemet.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x180192AE0 (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1ListenerTelemetrySignalTracker@@QEAA@XZ @ 0x1804A3380 (--1ListenerTelemetrySignalTracker@@QEAA@XZ.c)
 *     ??$GetActivationFactory@UIAppViewTitleChangeDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIAppViewTitleChangeDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1804A544C (--$GetActivationFactory@UIAppViewTitleChangeDataFactory@DataEngine@TaskFlow@Shell@Internal@Windo.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::ReportTitleChange(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  struct _FILETIME v6; // rbx
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // rcx
  __int64 v10; // r9
  int v11; // eax
  int v12; // [rsp+20h] [rbp-30h]
  int *v13; // [rsp+20h] [rbp-30h]
  int v14[2]; // [rsp+30h] [rbp-20h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+38h] [rbp-18h] BYREF
  __int64 v16; // [rsp+40h] [rbp-10h] BYREF
  int v17[2]; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int16 v19; // [rsp+80h] [rbp+30h] BYREF
  HSTRING string; // [rsp+88h] [rbp+38h] BYREF

  v19 = 0;
  wil::GetActivationFactory<Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeDataFactory>(&v16);
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v6 = (struct _FILETIME)(SystemTimeAsFileTime.dwLowDateTime
                        + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32));
  *(_QWORD *)v14 = 0LL;
  string = 0LL;
  if ( a3[3] >= 8uLL )
    a3 = (_QWORD *)*a3;
  SystemTimeAsFileTime = (struct _FILETIME)a3;
  v7 = Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(
         (Microsoft::WRL::Wrappers::HString *)&string,
         (const wchar_t **)&SystemTimeAsFileTime);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x76,
      (int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
      (const char *)(unsigned int)v7,
      v12);
  v13 = v14;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, HSTRING, struct _FILETIME))(*(_QWORD *)v16 + 48LL))(
         v16,
         a2,
         string,
         v6);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7B,
      (int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
      (const char *)(unsigned int)v8,
      (int)v14);
  v9 = (_DWORD *)wil::details::static_lazy<TaskFlowDataEngineTelemetry>::get(
                   (__int64)retaddr,
                   (void (__cdecl *)())_lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_)[1];
  if ( *v9 > 5u )
  {
    SystemTimeAsFileTime = v6;
    *(_QWORD *)v17 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (int)v9,
      (int)&unk_180857827,
      0,
      v10,
      (__int64)v17,
      (__int64)&SystemTimeAsFileTime);
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 80) + 64LL))(
          *(_QWORD *)(a1 + 80),
          *(_QWORD *)v14);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7F,
      (int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
      (const char *)(unsigned int)v11,
      (int)v13);
  LOBYTE(v19) = 1;
  WindowsDeleteString(string);
  string = 0LL;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v14);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
  ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)&v19);
}
