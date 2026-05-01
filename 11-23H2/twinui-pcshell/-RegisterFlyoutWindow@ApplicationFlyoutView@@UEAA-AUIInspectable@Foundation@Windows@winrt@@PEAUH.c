/*
 * XREFs of ?RegisterFlyoutWindow@ApplicationFlyoutView@@UEAA?AUIInspectable@Foundation@Windows@winrt@@PEAUHWND__@@AEBUhstring@5@@Z @ 0x1806C5A50
 * Callers:
 *     <none>
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x1800BB844 (-Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z @ 0x1800BB9D8 (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CreateUri@?$consume_Windows_Foundation_IUriRuntimeClassFactory@UIUriRuntimeClassFactory@Foundation@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1802D2F38 (-CreateUri@-$consume_Windows_Foundation_IUriRuntimeClassFactory@UIUriRuntimeClassFactory@Foundat.c)
 *     ??$call@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@?$factory_cache_entry@UUri@Foundation@Windows@winrt@@UIUriRuntimeClassFactory@234@@impl@winrt@@QEAA?A_PAEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@Z @ 0x1803F6FA4 (--$call@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@-$factory_cache_entry@UUri@Foundation@Wi.c)
 *     ?GetFirstValueByName@?$consume_Windows_Foundation_IWwwFormUrlDecoderRuntimeClass@UIWwwFormUrlDecoderRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180467B00 (-GetFirstValueByName@-$consume_Windows_Foundation_IWwwFormUrlDecoderRuntimeClass@UIWwwFormUrlDec.c)
 *     ?QueryParsed@?$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180469F58 (-QueryParsed@-$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@.c)
 *     ??$make@VWindowRegistration@@$$TVCorrelationVector@@@winrt@@YA?A_P$$QEA$$T$$QEAVCorrelationVector@@@Z @ 0x1806C4938 (--$make@VWindowRegistration@@$$TVCorrelationVector@@@winrt@@YA-A_P$$QEA$$T$$QEAVCorrelationVecto.c)
 *     ??$make@VWindowRegistration@@AEAPEAUHWND__@@AEAVCorrelationVector@@@winrt@@YA?A_PAEAPEAUHWND__@@AEAVCorrelationVector@@@Z @ 0x1806C49CC (--$make@VWindowRegistration@@AEAPEAUHWND__@@AEAVCorrelationVector@@@winrt@@YA-A_PAEAPEAUHWND__@@.c)
 *     ?StringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1806C61A0 (-StringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
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
  const char *v16; // r9
  const char *v17; // r9
  __int64 *v18; // rax
  __int64 v19; // rcx
  void *v21; // [rsp+20h] [rbp-138h] BYREF
  HWND v22; // [rsp+28h] [rbp-130h] BYREF
  __int64 v23; // [rsp+30h] [rbp-128h] BYREF
  __int64 v24; // [rsp+38h] [rbp-120h] BYREF
  _QWORD *v25; // [rsp+40h] [rbp-118h] BYREF
  const struct winrt::hstring *v26; // [rsp+48h] [rbp-110h] BYREF
  volatile signed __int32 *v27[3]; // [rsp+50h] [rbp-108h] BYREF
  _QWORD v28[4]; // [rsp+68h] [rbp-F0h] BYREF
  _QWORD v29[5]; // [rsp+88h] [rbp-D0h] BYREF
  char Str[144]; // [rsp+B0h] [rbp-A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+0h]

  v5 = a2;
  v22 = a2;
  v26 = a3;
  if ( *a4 )
  {
    v25 = operator new(0x90uLL);
    v8 = (void *)TraceLoggingCorrelationVector::TraceLoggingCorrelationVector((__int64)v25);
    try
    {
      v10 = v8;
      v21 = v8;
      v28[0] = *a4;
      v25 = v28;
      v27[2] = (volatile signed __int32 *)&qword_180990828;
      _InterlockedIncrement64(&qword_180990828);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory> )
      {
        winrt::impl::consume_Windows_Foundation_IUriRuntimeClassFactory<winrt::Windows::Foundation::IUriRuntimeClassFactory>::CreateUri(
          &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory>,
          &v24,
          v28);
        _InterlockedDecrement64(&qword_180990828);
      }
      else
      {
        _InterlockedDecrement64(&qword_180990828);
        winrt::impl::factory_cache_entry<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory>::call<_lambda_0a61d549bec6c444b35123f4c9509ca7_ &>(
          v9,
          &v24,
          &v25);
      }
      v11 = winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::QueryParsed(
              &v24,
              &v23);
      winrt::param::hstring::create_string_reference((winrt::param::hstring *)v29, L"cv", 2);
      winrt::impl::consume_Windows_Foundation_IWwwFormUrlDecoderRuntimeClass<winrt::Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>::GetFirstValueByName(
        v11,
        v27,
        v29);
      if ( v23 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v23);
      v12 = winrt::hstring::c_str((winrt::hstring *)v27);
      v13 = StringCchPrintfA(Str, 0x81uLL, "%ws", v12);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB2,
          (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
          (const char *)(unsigned int)v13,
          (int)v21);
      v15 = TraceLoggingCorrelationVector::Set(Str, v14);
      if ( !v15 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x10,
          (int)"pcshell\\twinui\\meetandchatmanager\\lib\\CorrelationVector.h",
          v16);
      v21 = v15;
      if ( v10 )
        operator delete(v10);
      winrt::handle_type<winrt::impl::hstring_traits>::close(v27);
      if ( v24 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v24);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0xB6,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        v17);
      v5 = v22;
    }
    v18 = winrt::make<WindowRegistration,HWND__ * &,CorrelationVector &>(
            &v22,
            (HWND *)&v26,
            (const struct CorrelationVector *)&v21);
    v19 = *v18;
    *v18 = 0LL;
    *(_QWORD *)v5 = v19;
    if ( v22 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v22);
  }
  else
  {
    v26 = (const struct winrt::hstring *)operator new(0x90uLL);
    v21 = (void *)TraceLoggingCorrelationVector::TraceLoggingCorrelationVector((__int64)v26);
    v22 = 0LL;
    v6 = winrt::make<WindowRegistration,std::nullptr_t,CorrelationVector>(
           &v23,
           &v22,
           (const struct CorrelationVector *)&v21);
    v7 = *v6;
    *v6 = 0LL;
    *(_QWORD *)v5 = v7;
    if ( v23 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v23);
  }
  if ( v21 )
    operator delete(v21);
  return (struct IInspectable)v5;
}
