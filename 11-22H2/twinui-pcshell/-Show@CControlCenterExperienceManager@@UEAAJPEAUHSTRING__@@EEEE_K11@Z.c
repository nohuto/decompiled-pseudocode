/*
 * XREFs of ?Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE_K11@Z @ 0x180423140
 * Callers:
 *     CControlCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1801DFD20 (CControlCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 *     ?HotKeyInvoked@CControlCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x18041F830 (-HotKeyInvoked@CControlCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Wind.c)
 *     ?OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180420650 (-OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING.c)
 * Callees:
 *     ?BoostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z @ 0x18002BB00 (-BoostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1800C55FC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x180192AE0 (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801C8E9C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1802D2174 (--$GetActivationFactory@V-$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@.c)
 *     ?_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z @ 0x1802D22F2 (-_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z.c)
 *     ??$As@UILauncherStatics@System@Windows@@@?$ComPtr@UIActivationFactory@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UILauncherStatics@System@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802D2B1A (--$As@UILauncherStatics@System@Windows@@@-$ComPtr@UIActivationFactory@@@WRL@Microsoft@@QEBAJV-$C.c)
 *     ??$?0AEBQEBGAEAPEBG$0A@@?$pair@$$CBUhstring@winrt@@U12@@std@@QEAA@AEBQEBGAEAPEBG@Z @ 0x1802D3F48 (--$-0AEBQEBGAEAPEBG$0A@@-$pair@$$CBUhstring@winrt@@U12@@std@@QEAA@AEBQEBGAEAPEBG@Z.c)
 *     ??$?0$0BH@@StringReference@Internal@Windows@@QEAA@AEAY0BH@$$CBG@Z @ 0x1803D10BC (--$-0$0BH@@StringReference@Internal@Windows@@QEAA@AEAY0BH@$$CBG@Z.c)
 *     ?ToString@?$consume_Windows_Foundation_IStringable@UTileId@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1803E46A8 (-ToString@-$consume_Windows_Foundation_IStringable@UTileId@StartScreen@UI@WindowsUdk@winrt@@@imp.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIActivationFactory@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIActivationFactory@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1803F3E74 (--$GetActivationFactory@V-$ComPtr@UIActivationFactory@@@WRL@Microsoft@@@Foundation@Windows@@YAJP.c)
 *     ??$ShowControlCenterWithDeepLink@_NPEBGAEAEAEAEAEAEAEAEAEA_KAEA_KAEA_K@ControlCenterTelemetry@ControlCenterUITelemetry@@SAX$$QEA_N$$QEAPEBGAEAE222AEA_K33@Z @ 0x18041C5A8 (--$ShowControlCenterWithDeepLink@_NPEBGAEAEAEAEAEAEAEAEAEA_KAEA_KAEA_K@ControlCenterTelemetry@Co.c)
 *     ??$call@AEAV_lambda_89d5cc9e848954b376ddd65d03be1168_@@@?$factory_cache_entry@UHttpFormUrlEncodedContent@Http@Web@Windows@winrt@@UIHttpFormUrlEncodedContentFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_89d5cc9e848954b376ddd65d03be1168_@@@Z @ 0x18041CAA0 (--$call@AEAV_lambda_89d5cc9e848954b376ddd65d03be1168_@@@-$factory_cache_entry@UHttpFormUrlEncode.c)
 *     ??$make_scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@YA?A_PPEBU?$pair@$$CBUhstring@winrt@@U12@@std@@0@Z @ 0x18041CD9C (--$make_scoped_input_iterable@U-$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windo.c)
 *     ??1?$iterable@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@param@winrt@@QEAA@XZ @ 0x18041DB88 (--1-$iterable@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@p.c)
 *     ?Create@?$consume_Windows_Web_Http_IHttpFormUrlEncodedContentFactory@UIHttpFormUrlEncodedContentFactory@Http@Web@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@param@3@@Z @ 0x18041E8F0 (-Create@-$consume_Windows_Web_Http_IHttpFormUrlEncodedContentFactory@UIHttpFormUrlEncodedContent.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall CControlCenterExperienceManager::Show(
        CControlCenterExperienceManager *this,
        HSTRING a2,
        char a3,
        char a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned __int64 a9)
{
  Microsoft::WRL::Wrappers::HString *v13; // r14
  char v14; // al
  const unsigned __int16 *v15; // rcx
  const unsigned __int16 *v16; // rax
  const unsigned __int16 *v17; // rax
  void (__fastcall ***v18)(_QWORD, __int64 *, __int64 *); // rcx
  const unsigned __int16 *v19; // rbx
  PCWSTR v20; // rax
  __int64 *v21; // rax
  int v22; // eax
  unsigned int v23; // ebx
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, _QWORD, __int64 *); // rdi
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rbx
  __int64 (__fastcall *v32)(__int64, __int64, __int64 *); // rdi
  int v33; // eax
  _BYTE v35[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v36[8]; // [rsp+68h] [rbp-98h] BYREF
  char v37[8]; // [rsp+70h] [rbp-90h] BYREF
  PCWSTR v38; // [rsp+78h] [rbp-88h] BYREF
  __int64 v39; // [rsp+80h] [rbp-80h] BYREF
  PCWSTR StringRawBuffer; // [rsp+88h] [rbp-78h] BYREF
  __int64 v41; // [rsp+90h] [rbp-70h] BYREF
  __int64 v42; // [rsp+98h] [rbp-68h] BYREF
  __int64 (__fastcall ***v43)(_QWORD, GUID *, __int64 *); // [rsp+A0h] [rbp-60h] BYREF
  __int64 v44; // [rsp+A8h] [rbp-58h] BYREF
  const unsigned __int16 *v45; // [rsp+B0h] [rbp-50h] BYREF
  const unsigned __int16 *v46; // [rsp+B8h] [rbp-48h] BYREF
  const unsigned __int16 *v47; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD *v48; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int16 *v49[3]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v50[2]; // [rsp+E8h] [rbp-18h] BYREF
  char v51; // [rsp+F8h] [rbp-8h]
  __int64 *v52; // [rsp+100h] [rbp+0h]
  char v53[16]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v54[16]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v55[16]; // [rsp+128h] [rbp+28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+138h] [rbp+38h] BYREF
  __int64 v57; // [rsp+150h] [rbp+50h]
  _QWORD v58[4]; // [rsp+158h] [rbp+58h] BYREF
  HSTRING string; // [rsp+178h] [rbp+78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  v36[0] = a3;
  v35[0] = a4;
  v13 = (CControlCenterExperienceManager *)((char *)this + 720);
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(v13, &StringRawBuffer);
  *((_BYTE *)this + 729) = a4 != 0;
  if ( *((_DWORD *)this + 32) == 2 || (v14 = 1, !a2) )
    v14 = 0;
  *((_BYTE *)this + 730) = v14;
  if ( a2 )
  {
    v38 = WindowsGetStringRawBuffer(*(HSTRING *)v13, 0LL);
    v37[0] = *((_DWORD *)this + 32) == 2;
    ControlCenterUITelemetry::ControlCenterTelemetry::ShowControlCenterWithDeepLink<bool,unsigned short const *,unsigned char &,unsigned char &,unsigned char &,unsigned char &,unsigned __int64 &,unsigned __int64 &,unsigned __int64 &>(
      v37,
      (__int64 *)&v38,
      v36,
      v35,
      &a5,
      &a6,
      (__int64 *)&a7,
      (__int64 *)&a8,
      (__int64 *)&a9);
  }
  v15 = L"true";
  v16 = L"true";
  if ( !a3 )
    v16 = L"false";
  v45 = v16;
  v17 = L"true";
  if ( !a5 )
    v17 = L"false";
  v46 = v17;
  if ( !a6 )
    v15 = L"false";
  v47 = v15;
  std::pair<winrt::hstring const,winrt::hstring>::pair<winrt::hstring const,winrt::hstring>(
    (__int64)v53,
    (const unsigned __int16 **)off_1807F4260,
    &v45);
  std::pair<winrt::hstring const,winrt::hstring>::pair<winrt::hstring const,winrt::hstring>(
    (__int64)v54,
    (const unsigned __int16 **)off_1807F4258,
    &v46);
  std::pair<winrt::hstring const,winrt::hstring>::pair<winrt::hstring const,winrt::hstring>(
    (__int64)v55,
    (const unsigned __int16 **)off_1807F4250,
    &v47);
  winrt::impl::make_scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>(
    (winrt::Windows::Foundation::IUnknown *)v50,
    (__int64)v53,
    (__int64)&hstringHeader);
  v51 = 1;
  v48 = v50;
  v52 = &qword_180990F08;
  _InterlockedIncrement64(&qword_180990F08);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Web::Http::HttpFormUrlEncodedContent,winrt::Windows::Web::Http::IHttpFormUrlEncodedContentFactory> )
  {
    winrt::impl::consume_Windows_Web_Http_IHttpFormUrlEncodedContentFactory<winrt::Windows::Web::Http::IHttpFormUrlEncodedContentFactory>::Create(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Web::Http::HttpFormUrlEncodedContent,winrt::Windows::Web::Http::IHttpFormUrlEncodedContentFactory>,
      &v38,
      v50);
    _InterlockedDecrement64(&qword_180990F08);
  }
  else
  {
    _InterlockedDecrement64(&qword_180990F08);
    winrt::impl::factory_cache_entry<winrt::Windows::Web::Http::HttpFormUrlEncodedContent,winrt::Windows::Web::Http::IHttpFormUrlEncodedContentFactory>::call<_lambda_89d5cc9e848954b376ddd65d03be1168_ &>(
      v18,
      (__int64)&v38,
      &v48);
  }
  winrt::impl::consume_Windows_Foundation_IStringable<winrt::WindowsUdk::UI::StartScreen::TileId>::ToString(
    (__int64 *)&v38,
    &StringRawBuffer);
  if ( v38 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v38);
  winrt::param::iterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::~iterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>((__int64)v50);
  `eh vector destructor iterator'(
    v53,
    16LL,
    3LL,
    (void (*)(void *))std::pair<winrt::hstring const,winrt::hstring>::~pair<winrt::hstring const,winrt::hstring>);
  memset(v49, 0, sizeof(v49));
  v19 = winrt::hstring::c_str((winrt::hstring *)&StringRawBuffer);
  v20 = WindowsGetStringRawBuffer(*(HSTRING *)v13, 0LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
    v49,
    (__int64)L"%ws/%ws&%ws&%ws=%llu&%ws=%llu&%ws=%llu",
    L"ms-actioncenter:controlcenter",
    v20,
    v19,
    L"edgeGestureOffset",
    a7,
    L"inputAnimationSourceId",
    a8,
    L"inputAnimationProviderId",
    a9);
  v44 = 0LL;
  v21 = (__int64 *)Windows::Internal::StringReference::StringReference(&string, L"Windows.Foundation.Uri");
  v22 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClassFactory>>(
          *v21,
          &v44);
  v23 = v22;
  if ( v22 >= 0 )
  {
    v39 = 0LL;
    v24 = v44;
    v25 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v44 + 48LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v39);
    Windows::Internal::StringReference::_ConstructorHelper((Windows::Internal::StringReference *)v58, v49[0]);
    v26 = v25(v24, v58[0], &v39);
    v23 = v26;
    if ( v26 >= 0 )
    {
      v43 = 0LL;
      v57 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.System.Launcher",
        0x18u,
        0x17u);
      v27 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<IActivationFactory>>(v57, (__int64 *)&v43);
      v23 = v27;
      if ( v27 >= 0 )
      {
        v42 = 0LL;
        v28 = Microsoft::WRL::ComPtr<IActivationFactory>::As<Windows::System::ILauncherStatics>(&v43, &v42);
        v23 = v28;
        if ( v28 >= 0 )
        {
          CSingleViewShellExperience::BoostPriority((__int64)this + 88, *((_DWORD *)this + 32) == 1, v29, v30);
          v41 = 0LL;
          v31 = v42;
          v32 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v42 + 64LL);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v41);
          v33 = v32(v31, v39, &v41);
          v23 = v33;
          if ( v33 >= 0 )
            v23 = 0;
          else
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x246,
              (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
              (const char *)(unsigned int)v33);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v41);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x23C,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
            (const char *)(unsigned int)v28);
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v42);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x23A,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v27);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v43);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x237,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v26);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v39);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x235,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v22);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v49);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&StringRawBuffer);
  return v23;
}
