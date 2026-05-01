/*
 * XREFs of ?LaunchAppWithProgIdAndUriWithOpenWithSuppressed@ProtocolLauncher@Utils@@CAXPEBG0AEBVCorrelationVector@@@Z @ 0x1805D0A78
 * Callers:
 *     ?LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z @ 0x1801D3374 (-LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18001B0D0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x180079874 (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VMeetAndChatTelemetryLogging@@@details@wil@@QEAAPEAVMeetAndChatTelemetryLogging@@P6AXXZ@Z @ 0x1800C77D8 (-get@-$static_lazy@VMeetAndChatTelemetryLogging@@@details@wil@@QEAAPEAVMeetAndChatTelemetryLoggi.c)
 *     ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z @ 0x1800C7D14 (-ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180316A94 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1805CFE88 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     winrt::impl::as_IServiceProvider__anonymous_namespace_::ShellExecuteSite_0_ @ 0x1805D0064 (winrt--impl--as_IServiceProvider__anonymous_namespace_--ShellExecuteSite_0_.c)
 *     ?Extend@CorrelationVector@@QEBA?AV1@XZ @ 0x1805D0708 (-Extend@CorrelationVector@@QEBA-AV1@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Utils::ProtocolLauncher::LaunchAppWithProgIdAndUriWithOpenWithSuppressed(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2,
        TraceLoggingCorrelationVector **a3)
{
  _QWORD *v6; // rbx
  const char *v7; // r9
  __int64 v8; // rcx
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  HINSTANCE v13; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v14; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  void *v17; // [rsp+50h] [rbp-B0h] BYREF
  SHELLEXECUTEINFOW pExecInfo; // [rsp+60h] [rbp-A0h] BYREF
  char v19[144]; // [rsp+D0h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  if ( CompareStringOrdinal(a1, -1, L"Undecided", -1, 1) == 2 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xE9,
      (__int64)"pcshell\\twinui\\meetandchatmanager\\lib\\utils.cpp",
      (const char *)0x80070483LL);
  v6 = operator new(0x28uLL);
  *v6 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  v6[1] = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v6 + 6) = 1;
  *((_DWORD *)v6 + 8) = 128;
  *v6 = &off_1806680E8;
  v6[1] = off_180668108;
  v6[2] = off_180668128;
  v14 = v6;
  pExecInfo.cbSize = 112;
  memset_0(&pExecInfo.fMask, 0, 0x6CuLL);
  pExecInfo.nShow = 0;
  pExecInfo.fMask = 201327617;
  pExecInfo.lpClass = a1;
  pExecInfo.lpFile = a2;
  winrt::impl::as_IServiceProvider__anonymous_namespace_::ShellExecuteSite_0_(
    &v13,
    (__int64 (__fastcall ***)(_QWORD, const IID *, __int64 *))v6);
  pExecInfo.hInstApp = v13;
  if ( v13 )
    winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref((__int64 *)&v13);
  if ( !ShellExecuteExW(&pExecInfo) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0xF5,
      (__int64)"pcshell\\twinui\\meetandchatmanager\\lib\\utils.cpp",
      v7);
  CorrelationVector::Extend(a3, &v17);
  TraceLoggingCorrelationVector::ToStringImpl(
    *a3,
    _InterlockedExchangeAdd64((volatile signed __int64 *)*a3 + 17, 0LL),
    v19);
  v9 = (_DWORD *)wil::details::static_lazy<MeetAndChatTelemetryLogging>::get(
                   v8,
                   _lambda_f7280a8f7c8a9a0f992333b64944e967_::_lambda_invoker_cdecl_)[1];
  if ( *v9 > 5u && tlgKeywordOn((__int64)v9, 0x400000000000LL) )
  {
    v15 = 0x1000000LL;
    v16 = (__int64)v19;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
      v10,
      byte_1806CCDD5,
      v11,
      v12,
      (const wchar_t **)&v16,
      (__int64)&v15);
  }
  if ( v17 )
    operator delete(v17);
  winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref((__int64 *)&v14);
}
