/*
 * XREFs of ?ReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18000B090
 * Callers:
 *     ?TryUpdateAndReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_K@Z @ 0x180126A88 (-TryUpdateAndReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Win.c)
 * Callees:
 *     ??$GetActivationFactory@UIAppViewTitleChangeDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIAppViewTitleChangeDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18000B004 (--$GetActivationFactory@UIAppViewTitleChangeDataFactory@DataEngine@TaskFlow@Shell@Internal@Windo.c)
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18000C69C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?get@?$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemetry@@P6AXXZ@Z @ 0x1800A80C4 (-get@-$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemet.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x18013B958 (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
  int v10; // r9d
  int v11; // eax
  int v12; // [rsp+20h] [rbp-30h]
  int *v13; // [rsp+20h] [rbp-30h]
  int v14[2]; // [rsp+30h] [rbp-20h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+38h] [rbp-18h] BYREF
  __int64 v16; // [rsp+40h] [rbp-10h] BYREF
  int v17[2]; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  HSTRING string; // [rsp+88h] [rbp+38h] BYREF

  wil::GetActivationFactory<Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeDataFactory>(&v16);
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v6 = (struct _FILETIME)(SystemTimeAsFileTime.dwLowDateTime
                        + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32));
  *(_QWORD *)v14 = 0LL;
  string = 0LL;
  if ( a3[3] >= 8uLL )
    a3 = (_QWORD *)*a3;
  SystemTimeAsFileTime = (struct _FILETIME)a3;
  v7 = Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(&string);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x76,
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
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
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
      (const char *)(unsigned int)v8,
      (int)v14);
  v9 = *(_DWORD **)(wil::details::static_lazy<TaskFlowDataEngineTelemetry>::get(
                      retaddr,
                      _lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v9 > 5u )
  {
    SystemTimeAsFileTime = v6;
    *(_QWORD *)v17 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (_DWORD)v9,
      (unsigned int)&unk_1806B0382,
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
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
      (const char *)(unsigned int)v11,
      (int)v13);
  WindowsDeleteString(string);
  string = 0LL;
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v14);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v16);
}
