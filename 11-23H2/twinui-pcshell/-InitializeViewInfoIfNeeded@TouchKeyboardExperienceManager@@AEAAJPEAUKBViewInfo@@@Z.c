/*
 * XREFs of ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1802DB81A
 * Callers:
 *     _lambda_0cfa17de80a192d7104afc8a843b7ae2_::operator() @ 0x180206BB4 (_lambda_0cfa17de80a192d7104afc8a843b7ae2_--operator().c)
 *     ?InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1802DBC10 (-InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIAppResizeView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1802D4FA4 (--4-$ComPtr@UIAppResizeView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Default@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802DAC82 (-Default@-$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatic.c)
 *     ?InitializeIds@KBViewInfo@@QEAAXXZ @ 0x1802DB684 (-InitializeIds@KBViewInfo@@QEAAXXZ.c)
 *     ?IsAppDefaultView@KBViewInfo@@QEAA_NXZ @ 0x1802DBD40 (-IsAppDefaultView@KBViewInfo@@QEAA_NXZ.c)
 *     ?SetPrimaryViewId@TouchKeyboardExperienceManager@@AEAAXI@Z @ 0x1802DC620 (-SetPrimaryViewId@TouchKeyboardExperienceManager@@AEAAXI@Z.c)
 *     ??$call@P6A?AUhstring@winrt@@AEBUIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@2@@Z@?$factory_cache_entry@UKnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@UIKnownOnScreenInputUriSchemesStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUhstring@2@AEBUIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@2@@Z@Z @ 0x18050B0E8 (--$call@P6A-AUhstring@winrt@@AEBUIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationM.c)
 *     ?CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAA?AV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@XZ @ 0x18050ED68 (-CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAA-AV-$ComPtr@UIApplicationFrameWrapper.c)
 *     ?InitializeChromeOptionsAndGetTitleBar@TouchKeyboardExperienceManager@@AEAA?AV?$ComPtr@UIApplicationFrameTitleBar@@@WRL@Microsoft@@PEAUIApplicationFrameWrapper@@@Z @ 0x18051193C (-InitializeChromeOptionsAndGetTitleBar@TouchKeyboardExperienceManager@@AEAA-AV-$ComPtr@UIApplica.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TouchKeyboardExperienceManager::InitializeViewInfoIfNeeded(
        TouchKeyboardExperienceManager *this,
        struct KBViewInfo *a2)
{
  __int64 v4; // rcx
  const WCHAR *v5; // rbx
  const WCHAR *StringRawBuffer; // rax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v7; // rdx
  HWND v8; // rax
  unsigned int v9; // ebx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64 *); // rdi
  int v18; // eax
  __int64 v19; // rdx
  HRESULT v20; // eax
  int v21; // eax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-40h]
  __int64 v23; // [rsp+30h] [rbp-30h] BYREF
  volatile signed __int32 *v24; // [rsp+38h] [rbp-28h] BYREF
  volatile signed __int32 *v25; // [rsp+40h] [rbp-20h] BYREF
  const struct winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics *(__fastcall *v26)(const struct winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics *, __int64); // [rsp+48h] [rbp-18h] BYREF
  HWND hwnd[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  int pvAttribute; // [rsp+88h] [rbp+28h] BYREF
  __int64 *v30; // [rsp+90h] [rbp+30h]
  __int64 v31; // [rsp+98h] [rbp+38h] BYREF

  if ( !*((_BYTE *)a2 + 32) )
  {
    KBViewInfo::InitializeIds(a2);
    v30 = &qword_180991898;
    _InterlockedIncrement64(&qword_180991898);
    if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics> )
    {
      winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Default(
        &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>,
        &v24);
      _InterlockedDecrement64(&qword_180991898);
    }
    else
    {
      _InterlockedDecrement64(&qword_180991898);
      v26 = _lambda_3e5ce8342f6a473a88624d708dac9d2e_::_lambda_invoker_cdecl_;
      winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::call<winrt::hstring (*)(winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics const &)>(
        v4,
        &v24,
        &v26);
    }
    v5 = winrt::hstring::c_str((winrt::hstring *)&v24);
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)a2 + 14), 0LL);
    LOBYTE(v5) = CompareStringOrdinal(StringRawBuffer, -1, v5, -1, 1) == 2;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v24);
    if ( (_BYTE)v5 )
      TouchKeyboardExperienceManager::SetPrimaryViewId(this, *((_DWORD *)a2 + 26));
    if ( !*((_BYTE *)a2 + 33) )
    {
      if ( !KBViewInfo::IsAppDefaultView(a2) )
      {
        v8 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(*(ExperienceManagerUtils **)a2, v7);
        if ( v8 && !SetPropW(v8, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
        {
          v9 = -2147467259;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x144A,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)0x80004005LL);
          return v9;
        }
        TouchKeyboardExperienceManager::CreateAppFrameWrapper(this, &v31);
        TouchKeyboardExperienceManager::InitializeChromeOptionsAndGetTitleBar(v11, &v25, v31);
        v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 48LL))(v31, 3LL);
        if ( v12 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x1451,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v12,
            bIgnoreCase);
        v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v31 + 104LL))(v31, *(_QWORD *)a2);
        if ( v13 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x1452,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v13,
            bIgnoreCase);
        v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)a2 + 520LL))(*(_QWORD *)a2, 1LL);
        if ( v14 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x1455,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v14,
            bIgnoreCase);
        v15 = v25;
        if ( *((volatile signed __int32 **)a2 + 2) != v25 )
        {
          v24 = v25;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v24);
          v24 = (volatile signed __int32 *)*((_QWORD *)a2 + 2);
          *((_QWORD *)a2 + 2) = v15;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
        }
        Microsoft::WRL::ComPtr<IAppResizeView>::operator=((__int64 *)a2 + 1, &v31);
        v23 = 0LL;
        v16 = v31;
        v17 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 32LL);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
        v18 = v17(v16, &v23);
        v9 = v18;
        if ( v18 < 0 )
        {
          v19 = 5212LL;
LABEL_25:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v19,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v18);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v31);
          return v9;
        }
        v18 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v23 + 24LL))(v23, hwnd);
        v9 = v18;
        if ( v18 < 0 )
        {
          v19 = 5214LL;
          goto LABEL_25;
        }
        pvAttribute = 1;
        v20 = DwmSetWindowAttribute(hwnd[0], 0x404u, &pvAttribute, 4u);
        if ( v20 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1460,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v20);
        *((_BYTE *)a2 + 33) = 1;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v31);
      }
      if ( *(_QWORD *)a2 && !*((_BYTE *)a2 + 32) )
      {
        v21 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)a2 + 344LL))(*(_QWORD *)a2, 3LL);
        if ( v21 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x146B,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v21);
      }
    }
  }
  return 0LL;
}
