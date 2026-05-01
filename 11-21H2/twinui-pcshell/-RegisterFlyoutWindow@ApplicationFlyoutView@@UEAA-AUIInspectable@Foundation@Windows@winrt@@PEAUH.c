/*
 * XREFs of ?RegisterFlyoutWindow@ApplicationFlyoutView@@UEAA?AUIInspectable@Foundation@Windows@winrt@@PEAUHWND__@@AEBUhstring@5@@Z @ 0x1805D2AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x1800C7900 (-Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z @ 0x1800C7A94 (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F2B64 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$call@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@?$factory_cache_entry@UUri@Foundation@Windows@winrt@@UIUriRuntimeClassFactory@234@@impl@winrt@@QEAA?AUUri@Foundation@Windows@2@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@Z @ 0x18038D6EC (--$call@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@-$factory_cache_entry@UUri@Foundation@Wi.c)
 *     ?CreateUri@?$consume_Windows_Foundation_IUriRuntimeClassFactory@UIUriRuntimeClassFactory@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUUri@Foundation@Windows@3@AEBUhstring@param@3@@Z @ 0x18038E96C (-CreateUri@-$consume_Windows_Foundation_IUriRuntimeClassFactory@UIUriRuntimeClassFactory@Foundat.c)
 *     ?GetFirstValueByName@?$consume_Windows_Foundation_IWwwFormUrlDecoderRuntimeClass@UIWwwFormUrlDecoderRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@AEBU4param@3@@Z @ 0x18038E9C4 (-GetFirstValueByName@-$consume_Windows_Foundation_IWwwFormUrlDecoderRuntimeClass@UIWwwFormUrlDec.c)
 *     ?QueryParsed@?$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUWwwFormUrlDecoder@Foundation@Windows@3@XZ @ 0x18038F790 (-QueryParsed@-$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@.c)
 *     ??$make@VWindowRegistration@@$$TVCorrelationVector@@@winrt@@YA?AUIClosable@Foundation@Windows@0@$$QEA$$T$$QEAVCorrelationVector@@@Z @ 0x1805D2008 (--$make@VWindowRegistration@@$$TVCorrelationVector@@@winrt@@YA-AUIClosable@Foundation@Windows@0@.c)
 *     ??$make@VWindowRegistration@@AEAPEAUHWND__@@AEAVCorrelationVector@@@winrt@@YA?AUIClosable@Foundation@Windows@0@AEAPEAUHWND__@@AEAVCorrelationVector@@@Z @ 0x1805D209C (--$make@VWindowRegistration@@AEAPEAUHWND__@@AEAVCorrelationVector@@@winrt@@YA-AUIClosable@Founda.c)
 *     ?StringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1805D31C0 (-StringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 */

// Hidden C++ exception states: #wind=6
struct IInspectable __fastcall ApplicationFlyoutView::RegisterFlyoutWindow(
        ApplicationFlyoutView *this,
        HWND a2,
        const struct winrt::hstring *a3,
        _QWORD *a4)
{
  HWND v5; // rsi
  __int64 *v6; // rax
  __int64 v7; // rcx
  void *v8; // rax
  void (__fastcall ***v9)(_QWORD, __int64 *, __int64 *); // rcx
  void *v10; // r14
  __int64 *v11; // r15
  const unsigned __int16 *v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  struct TraceLoggingCorrelationVector *v15; // rax
  __int64 v16; // r8
  const char *v17; // r9
  __int64 v18; // rdx
  const char *v19; // r9
  __int64 *v20; // rax
  __int64 v21; // rcx
  void *v23; // [rsp+20h] [rbp-128h] BYREF
  HWND v24; // [rsp+28h] [rbp-120h] BYREF
  __int64 v25; // [rsp+30h] [rbp-118h] BYREF
  __int64 v26; // [rsp+38h] [rbp-110h] BYREF
  _QWORD *v27; // [rsp+40h] [rbp-108h] BYREF
  const struct winrt::hstring *v28; // [rsp+48h] [rbp-100h] BYREF
  volatile signed __int32 *v29[2]; // [rsp+50h] [rbp-F8h] BYREF
  _QWORD v30[4]; // [rsp+60h] [rbp-E8h] BYREF
  _QWORD v31[4]; // [rsp+80h] [rbp-C8h] BYREF
  char Str[144]; // [rsp+A0h] [rbp-A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+0h]

  v5 = a2;
  v24 = a2;
  v28 = a3;
  if ( *a4 )
  {
    v27 = operator new(0x90uLL);
    v8 = (void *)TraceLoggingCorrelationVector::TraceLoggingCorrelationVector((__int64)v27);
    try
    {
      v10 = v8;
      v23 = v8;
      v30[0] = *a4;
      v27 = v30;
      v29[1] = (volatile signed __int32 *)&qword_1807B5D48;
      _InterlockedIncrement64(&qword_1807B5D48);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory> )
      {
        winrt::impl::consume_Windows_Foundation_IUriRuntimeClassFactory<winrt::Windows::Foundation::IUriRuntimeClassFactory>::CreateUri(
          &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory>,
          &v26,
          v30);
        _InterlockedDecrement64(&qword_1807B5D48);
      }
      else
      {
        _InterlockedDecrement64(&qword_1807B5D48);
        winrt::impl::factory_cache_entry<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory>::call<_lambda_0a61d549bec6c444b35123f4c9509ca7_ &>(
          v9,
          (__int64)&v26,
          &v27);
      }
      v11 = winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::QueryParsed(
              &v26,
              &v25);
      winrt::param::hstring::create_string_reference((winrt::param::hstring *)v31, L"cv", 2LL);
      winrt::impl::consume_Windows_Foundation_IWwwFormUrlDecoderRuntimeClass<winrt::Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>::GetFirstValueByName(
        v11,
        v29,
        v31);
      if ( v25 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v25);
      v12 = winrt::hstring::c_str((winrt::hstring *)v29);
      v13 = StringCchPrintfA(Str, 0x81uLL, "%ws", v12);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB2,
          (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
          (const char *)(unsigned int)v13,
          (int)v23);
      v15 = TraceLoggingCorrelationVector::Set(Str, v14);
      LOBYTE(v18) = v15 == 0LL;
      if ( !v15 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x10,
          (int)"pcshell\\twinui\\meetandchatmanager\\lib\\CorrelationVector.h",
          v17);
      v23 = v15;
      if ( v10 )
        operator delete(v10);
      winrt::handle_type<winrt::impl::hstring_traits>::close(v29, v18, v16, (__int64)v17);
      if ( v26 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v26);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0xB6,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        v19);
      v5 = v24;
    }
    v20 = winrt::make<WindowRegistration,HWND__ * &,CorrelationVector &>(
            &v24,
            (HWND *)&v28,
            (const struct CorrelationVector *)&v23);
    v21 = *v20;
    *v20 = 0LL;
    *(_QWORD *)v5 = v21;
    if ( v24 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v24);
  }
  else
  {
    v28 = (const struct winrt::hstring *)operator new(0x90uLL);
    v23 = (void *)TraceLoggingCorrelationVector::TraceLoggingCorrelationVector((__int64)v28);
    v24 = 0LL;
    v6 = winrt::make<WindowRegistration,std::nullptr_t,CorrelationVector>(
           &v25,
           &v24,
           (const struct CorrelationVector *)&v23);
    v7 = *v6;
    *v6 = 0LL;
    *(_QWORD *)v5 = v7;
    if ( v25 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v25);
  }
  if ( v23 )
    operator delete(v23);
  return (struct IInspectable)v5;
}
