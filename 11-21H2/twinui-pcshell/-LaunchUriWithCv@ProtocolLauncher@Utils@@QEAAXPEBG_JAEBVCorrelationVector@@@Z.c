/*
 * XREFs of ?LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z @ 0x1801D3374
 * Callers:
 *     ?EnsureCurrentlyRegisteredUriHandlerLaunchedForFirstRun@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@CAX_N_JAEBVCorrelationVector@@@Z @ 0x1801D1460 (-EnsureCurrentlyRegisteredUriHandlerLaunchedForFirstRun@MeetAndChatManager@implementation@Shell@.c)
 *     ?EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z @ 0x1801D4E00 (-EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?Increment@CorrelationVector@@QEAAAEBV1@XZ @ 0x1800C7878 (-Increment@CorrelationVector@@QEAAAEBV1@XZ.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800CA828 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1800FBCF4 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CorrelationVector@@QEAA@XZ @ 0x18017C464 (--1CorrelationVector@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801D313C (--0-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ?Stop@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801D3994 (-Stop@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z @ 0x18038E0D4 (--0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z.c)
 *     ?ToString@CorrelationVector@@QEBAPEADAEAY0IB@D@Z @ 0x1805CF200 (-ToString@CorrelationVector@@QEBAPEADAEAY0IB@D@Z.c)
 *     ??1UriLaunch@MeetAndChatTelemetry@@QEAA@XZ @ 0x1805D03BC (--1UriLaunch@MeetAndChatTelemetry@@QEAA@XZ.c)
 *     ?Extend@CorrelationVector@@QEBA?AV1@XZ @ 0x1805D0708 (-Extend@CorrelationVector@@QEBA-AV1@XZ.c)
 *     ?LaunchAppWithProgIdAndUriWithOpenWithSuppressed@ProtocolLauncher@Utils@@CAXPEBG0AEBVCorrelationVector@@@Z @ 0x1805D0A78 (-LaunchAppWithProgIdAndUriWithOpenWithSuppressed@ProtocolLauncher@Utils@@CAXPEBG0AEBVCorrelation.c)
 *     ?StartActivity@UriLaunch@MeetAndChatTelemetry@@QEAAXPEBG0AEBVCorrelationVector@@@Z @ 0x1805D0EEC (-StartActivity@UriLaunch@MeetAndChatTelemetry@@QEAAXPEBG0AEBVCorrelationVector@@@Z.c)
 *     ?TryEnsurePackageRegistered@ProtocolLauncher@Utils@@AEAAXXZ @ 0x1805D12C8 (-TryEnsurePackageRegistered@ProtocolLauncher@Utils@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall Utils::ProtocolLauncher::LaunchUriWithCv(
        const unsigned __int16 **this,
        const unsigned __int16 *a2,
        __int64 a3,
        const struct CorrelationVector *a4)
{
  const unsigned __int16 *v7; // rbx
  TraceLoggingCorrelationVector **v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // ecx
  const char *v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  TraceLoggingCorrelationVector **v16; // rax
  int v17; // [rsp+20h] [rbp-E0h]
  void *v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v21; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v22[32]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v23[40]; // [rsp+80h] [rbp-80h] BYREF
  char v24[129]; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned __int16 v25[1024]; // [rsp+250h] [rbp+150h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A88h] [rbp+988h]

  CorrelationVector::Extend(a4, &v18);
  v7 = *this;
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<MeetAndChatTelemetryLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v23);
  v23[0] = &MeetAndChatTelemetry::UriLaunch::`vftable';
  MeetAndChatTelemetry::UriLaunch::StartActivity(
    (MeetAndChatTelemetry::UriLaunch *)v23,
    v7,
    a2,
    (const struct CorrelationVector *)&v18);
  v8 = CorrelationVector::Increment((TraceLoggingCorrelationVector **)&v18);
  CorrelationVector::ToString((CorrelationVector *)v8, (char (*)[129])v24);
  Utils::ProtocolLauncher::TryEnsurePackageRegistered((Utils::ProtocolLauncher *)this);
  winrt::param::hstring::hstring((winrt::param::hstring *)v22, a2);
  winrt::Windows::Foundation::Uri::Uri(
    (winrt::Windows::Foundation::Uri *)&v20,
    (const struct winrt::param::hstring *)v22);
  v19 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 112LL))(v20, &v19);
  winrt::check_hresult(v9);
  v21 = (volatile signed __int32 *)v19;
  if ( v19 )
    v10 = *(_DWORD *)(v19 + 4);
  else
    v10 = 0;
  v11 = (const char *)L"&";
  if ( v10 <= 1 )
    v11 = L"?";
  v12 = StringCchPrintfW(v25, 1024LL, L"%s%sstartTime=%I64d&cv=%hs", a2, v11, a3, v24);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x168,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\utils.cpp",
      (const char *)(unsigned int)v12,
      v17);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v21, v13, v14, v15);
  v16 = CorrelationVector::Increment((TraceLoggingCorrelationVector **)&v18);
  Utils::ProtocolLauncher::LaunchAppWithProgIdAndUriWithOpenWithSuppressed(
    *this,
    v25,
    (const struct CorrelationVector *)v16);
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v23);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v20);
  MeetAndChatTelemetry::UriLaunch::~UriLaunch((MeetAndChatTelemetry::UriLaunch *)v23);
  CorrelationVector::~CorrelationVector(&v18);
}
