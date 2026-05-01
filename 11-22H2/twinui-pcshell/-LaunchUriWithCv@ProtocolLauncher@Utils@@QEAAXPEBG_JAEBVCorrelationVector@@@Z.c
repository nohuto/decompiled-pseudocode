/*
 * XREFs of ?LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z @ 0x1806C2684
 * Callers:
 *     ?EnsureCurrentlyRegisteredUriHandlerLaunchedForFirstRun@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@CAX_N_JAEBVCorrelationVector@@@Z @ 0x180098AF8 (-EnsureCurrentlyRegisteredUriHandlerLaunchedForFirstRun@MeetAndChatManager@implementation@Shell@.c)
 *     ?EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z @ 0x1806C526C (-EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Increment@CorrelationVector@@QEAAAEBV1@XZ @ 0x1800BB7BC (-Increment@CorrelationVector@@QEAAAEBV1@XZ.c)
 *     ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z @ 0x1800BBD2C (-ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18012FE34 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?CreateUri@?$consume_Windows_Foundation_IUriRuntimeClassFactory@UIUriRuntimeClassFactory@Foundation@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1802D2F38 (-CreateUri@-$consume_Windows_Foundation_IUriRuntimeClassFactory@UIUriRuntimeClassFactory@Foundat.c)
 *     ??$call@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@?$factory_cache_entry@UUri@Foundation@Windows@winrt@@UIUriRuntimeClassFactory@234@@impl@winrt@@QEAA?A_PAEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@Z @ 0x1803F6FA4 (--$call@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@-$factory_cache_entry@UUri@Foundation@Wi.c)
 *     ??0?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1806C1EAC (--0-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ??1UriLaunch@MeetAndChatTelemetry@@QEAA@XZ @ 0x1806C2048 (--1UriLaunch@MeetAndChatTelemetry@@QEAA@XZ.c)
 *     ?Extend@CorrelationVector@@QEBA?AV1@XZ @ 0x1806C2168 (-Extend@CorrelationVector@@QEBA-AV1@XZ.c)
 *     ?LaunchAppWithProgIdAndUriWithOpenWithSuppressed@ProtocolLauncher@Utils@@CAXPEBG0AEBVCorrelationVector@@@Z @ 0x1806C2460 (-LaunchAppWithProgIdAndUriWithOpenWithSuppressed@ProtocolLauncher@Utils@@CAXPEBG0AEBVCorrelation.c)
 *     ?Query@?$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806C2C84 (-Query@-$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@.c)
 *     ?StartActivity@UriLaunch@MeetAndChatTelemetry@@QEAAXPEBG0AEBVCorrelationVector@@@Z @ 0x1806C2EEC (-StartActivity@UriLaunch@MeetAndChatTelemetry@@QEAAXPEBG0AEBVCorrelationVector@@@Z.c)
 *     ?Stop@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1806C3094 (-Stop@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 *     ?TryEnsurePackageRegistered@ProtocolLauncher@Utils@@AEAAXXZ @ 0x1806C33E0 (-TryEnsurePackageRegistered@ProtocolLauncher@Utils@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall Utils::ProtocolLauncher::LaunchUriWithCv(
        const unsigned __int16 **this,
        const unsigned __int16 *a2,
        __int64 a3,
        TraceLoggingCorrelationVector **a4)
{
  const unsigned __int16 *v7; // rbx
  TraceLoggingCorrelationVector **v8; // rax
  __int64 v9; // r8
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v11; // rax
  unsigned int v12; // edx
  const char *v13; // rax
  HRESULT v14; // eax
  TraceLoggingCorrelationVector **v15; // rax
  int v16; // [rsp+20h] [rbp-E0h]
  void *v17; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v19; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v20[4]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v21[5]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v22[40]; // [rsp+A0h] [rbp-60h] BYREF
  char v23[144]; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned __int16 v24[1024]; // [rsp+270h] [rbp+170h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+AB8h] [rbp+9B8h]

  CorrelationVector::Extend(a4, &v17);
  v7 = *this;
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<MeetAndChatTelemetryLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v22);
  v22[0] = &MeetAndChatTelemetry::UriLaunch::`vftable';
  MeetAndChatTelemetry::UriLaunch::StartActivity(
    (MeetAndChatTelemetry::UriLaunch *)v22,
    v7,
    a2,
    (const struct CorrelationVector *)&v17);
  v8 = CorrelationVector::Increment((TraceLoggingCorrelationVector **)&v17);
  TraceLoggingCorrelationVector::ToStringImpl(
    *v8,
    _InterlockedExchangeAdd64((volatile signed __int64 *)*v8 + 17, 0LL),
    v23);
  Utils::ProtocolLauncher::TryEnsurePackageRegistered((Utils::ProtocolLauncher *)this);
  v9 = -1LL;
  do
    ++v9;
  while ( a2[v9] );
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v21, a2, v9);
  v19 = v21;
  v20[3] = (volatile signed __int32 *)&qword_180990828;
  _InterlockedIncrement64(&qword_180990828);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory> )
  {
    winrt::impl::consume_Windows_Foundation_IUriRuntimeClassFactory<winrt::Windows::Foundation::IUriRuntimeClassFactory>::CreateUri(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory>,
      &v18,
      v21);
    _InterlockedDecrement64(&qword_180990828);
  }
  else
  {
    _InterlockedDecrement64(&qword_180990828);
    winrt::impl::factory_cache_entry<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory>::call<_lambda_0a61d549bec6c444b35123f4c9509ca7_ &>(
      v10,
      &v18,
      &v19);
  }
  v11 = winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::Query(
          &v18,
          v20);
  if ( *(_QWORD *)v11 )
    v12 = *(_DWORD *)(*(_QWORD *)v11 + 4LL);
  else
    v12 = 0;
  v13 = (const char *)L"&";
  if ( v12 <= 1 )
    v13 = L"?";
  v14 = StringCchPrintfW(v24, 0x400uLL, (size_t *)L"%s%sstartTime=%I64d&cv=%hs", a2, v13, a3, v23);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x168,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\utils.cpp",
      (const char *)(unsigned int)v14,
      v16);
  winrt::handle_type<winrt::impl::hstring_traits>::close(v20);
  v15 = CorrelationVector::Increment((TraceLoggingCorrelationVector **)&v17);
  Utils::ProtocolLauncher::LaunchAppWithProgIdAndUriWithOpenWithSuppressed(*this, v24, v15);
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v22);
  if ( v18 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
  MeetAndChatTelemetry::UriLaunch::~UriLaunch((MeetAndChatTelemetry::UriLaunch *)v22);
  if ( v17 )
    operator delete(v17);
}
