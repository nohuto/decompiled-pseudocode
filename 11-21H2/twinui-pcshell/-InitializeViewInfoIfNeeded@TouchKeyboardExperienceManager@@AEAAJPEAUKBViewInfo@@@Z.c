/*
 * XREFs of ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18022EBB4
 * Callers:
 *     _lambda_a8dc140887cec83d93fc1ab35d00b62d_::operator() @ 0x1801B07A8 (_lambda_a8dc140887cec83d93fc1ab35d00b62d_--operator().c)
 *     ?InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x180460ACC (-InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800C912C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F2B64 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Default@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x18022E1E0 (-Default@-$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatic.c)
 *     ?InitializeIds@KBViewInfo@@QEAAXXZ @ 0x18022EA10 (-InitializeIds@KBViewInfo@@QEAAXXZ.c)
 *     ?IsAppDefaultView@KBViewInfo@@QEAA_NXZ @ 0x18022EFFA (-IsAppDefaultView@KBViewInfo@@QEAA_NXZ.c)
 *     ?SetPrimaryViewId@TouchKeyboardExperienceManager@@AEAAXI@Z @ 0x18022F1C6 (-SetPrimaryViewId@TouchKeyboardExperienceManager@@AEAAXI@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802DB634 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIAppResizeView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18038667C (--4-$ComPtr@UIAppResizeView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$call@P6A?AUhstring@winrt@@AEBUIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@2@@Z@?$factory_cache_entry@UKnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@UIKnownOnScreenInputUriSchemesStatics@2345@@impl@winrt@@QEAA?AUhstring@2@$$QEAP6A?AU32@AEBUIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@2@@Z@Z @ 0x180459F78 (--$call@P6A-AUhstring@winrt@@AEBUIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationM.c)
 *     ?CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x18045CF64 (-CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAPEAUIApplicationFrameWrapper@@@Z.c)
 *     ?InitializeChromeOptionsAndGetTitleBar@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAPEAUIApplicationFrameTitleBar@@@Z @ 0x18045FD60 (-InitializeChromeOptionsAndGetTitleBar@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFram.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SkipInitializationIfDestroyed@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180464654 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SkipInitializationIfDestroyed@@@details@w.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1804646D8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@QEAAX_NW4Reporting.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TouchKeyboardExperienceManager::InitializeViewInfoIfNeeded(
        TouchKeyboardExperienceManager *this,
        struct KBViewInfo *a2)
{
  __int64 v4; // rcx
  const WCHAR *v5; // rbx
  const WCHAR *StringRawBuffer; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v10; // rdx
  HWND v11; // rax
  unsigned int v12; // ebx
  int v14; // eax
  struct IApplicationFrameWrapper *v15; // rbx
  int TitleBar; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  struct IApplicationFrameTitleBar *v20; // rdi
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 (__fastcall *v23)(struct IApplicationFrameWrapper *, struct IApplicationFrameTitleBar **); // rdi
  int v24; // eax
  __int64 v25; // rdx
  HRESULT v26; // eax
  int v27; // eax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-30h]
  struct IApplicationFrameTitleBar *v29; // [rsp+30h] [rbp-20h] BYREF
  HWND hwnd[3]; // [rsp+38h] [rbp-18h] BYREF
  TouchKeyboardExperienceManager *retaddr; // [rsp+68h] [rbp+18h]
  int pvAttribute; // [rsp+78h] [rbp+28h] BYREF
  struct IApplicationFrameTitleBar *v33; // [rsp+80h] [rbp+30h] BYREF
  struct IApplicationFrameWrapper *v34; // [rsp+88h] [rbp+38h] BYREF

  KBViewInfo::InitializeIds(a2);
  hwnd[1] = (HWND)&qword_1807B68A8;
  _InterlockedIncrement64(&qword_1807B68A8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics> )
  {
    winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Default(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>,
      &v33);
    _InterlockedDecrement64(&qword_1807B68A8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B68A8);
    v34 = (struct IApplicationFrameWrapper *)&_lambda_3e5ce8342f6a473a88624d708dac9d2e_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::call<winrt::hstring (*)(winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics const &)>(
      v4,
      &v33,
      &v34);
  }
  v5 = winrt::hstring::c_str((winrt::hstring *)&v33);
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)a2 + 14), 0LL);
  LOBYTE(v5) = CompareStringOrdinal(StringRawBuffer, -1, v5, -1, 1) == 2;
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v33, v7, v8, v9);
  if ( (_BYTE)v5 )
    TouchKeyboardExperienceManager::SetPrimaryViewId(this, *((_DWORD *)a2 + 26));
  if ( !*((_BYTE *)a2 + 33) && !*((_BYTE *)a2 + 32) )
  {
    if ( !KBViewInfo::IsAppDefaultView(a2) )
    {
      v11 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(*(ExperienceManagerUtils **)a2, v10);
      if ( v11 && !SetPropW(v11, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
      {
        v12 = -2147467259;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1546,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)0x80004005LL);
        return v12;
      }
      v34 = 0LL;
      v29 = 0LL;
      v14 = TouchKeyboardExperienceManager::CreateAppFrameWrapper(this, &v34);
      if ( v14 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x154B,
          (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v14,
          bIgnoreCase);
      v15 = v34;
      TitleBar = TouchKeyboardExperienceManager::InitializeChromeOptionsAndGetTitleBar(retaddr, v34, &v29);
      if ( TitleBar < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x154C,
          (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)TitleBar,
          bIgnoreCase);
      v17 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64))(*(_QWORD *)v15 + 48LL))(v15, 3LL);
      if ( v17 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x154F,
          (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v17,
          bIgnoreCase);
      v18 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, _QWORD))(*(_QWORD *)v15 + 104LL))(
              v15,
              *(_QWORD *)a2);
      if ( v18 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1550,
          (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v18,
          bIgnoreCase);
      v19 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)a2 + 520LL))(*(_QWORD *)a2, 1LL);
      if ( v19 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1553,
          (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v19,
          bIgnoreCase);
      v20 = v29;
      if ( *((struct IApplicationFrameTitleBar **)a2 + 2) != v29 )
      {
        v33 = v29;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v33);
        v33 = (struct IApplicationFrameTitleBar *)*((_QWORD *)a2 + 2);
        *((_QWORD *)a2 + 2) = v20;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v33);
      }
      Microsoft::WRL::ComPtr<IAppResizeView>::operator=((char *)a2 + 8, &v34);
      LOBYTE(v21) = 3;
      LOBYTE(v22) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_Wmasfot>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_Wmasfot>::GetImpl'::`2'::impl,
        v22,
        v21);
      v33 = 0LL;
      v23 = *(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, struct IApplicationFrameTitleBar **))(*(_QWORD *)v15 + 32LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v33);
      v24 = v23(v15, &v33);
      v12 = v24;
      if ( v24 < 0 )
      {
        v25 = 5468LL;
LABEL_29:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v25,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v24);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v33);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v29);
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v34);
        return v12;
      }
      v24 = (*(__int64 (__fastcall **)(struct IApplicationFrameTitleBar *, HWND *))(*(_QWORD *)v33 + 24LL))(v33, hwnd);
      v12 = v24;
      if ( v24 < 0 )
      {
        v25 = 5470LL;
        goto LABEL_29;
      }
      pvAttribute = 1;
      v26 = DwmSetWindowAttribute(hwnd[0], 0x404u, &pvAttribute, 4u);
      if ( v26 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1560,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v26);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v33);
      *((_BYTE *)a2 + 33) = 1;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v29);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v34);
    }
    LOBYTE(v10) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SkipInitializationIfDestroyed>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_SkipInitializationIfDestroyed>::GetImpl'::`2'::impl,
      v10);
    if ( *(_QWORD *)a2 && !*((_BYTE *)a2 + 32) )
    {
      v27 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)a2 + 344LL))(*(_QWORD *)a2, 3LL);
      if ( v27 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x156E,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v27);
    }
  }
  return 0LL;
}
