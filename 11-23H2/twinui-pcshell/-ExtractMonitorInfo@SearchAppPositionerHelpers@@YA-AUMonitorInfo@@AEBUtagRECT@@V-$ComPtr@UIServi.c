/*
 * XREFs of ?ExtractMonitorInfo@SearchAppPositionerHelpers@@YA?AUMonitorInfo@@AEBUtagRECT@@V?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@Z @ 0x1800D532C
 * Callers:
 *     ?ExtractMonitorInfo@SearchBoxOnTaskbarSearchAppPositionerConfig@@UEAA?AUMonitorInfo@@AEBUtagRECT@@@Z @ 0x1800D4E90 (-ExtractMonitorInfo@SearchBoxOnTaskbarSearchAppPositionerConfig@@UEAA-AUMonitorInfo@@AEBUtagRECT.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?GetSearchMode@?$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x1800D5B68 (-GetSearchMode@-$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayout@Shell@UI@WindowsUdk@.c)
 *     ?GetAlignment@?$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x1800D5BC0 (-GetAlignment@-$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayout@Shell@UI@WindowsUdk@w.c)
 *     ?Current@?$consume_WindowsUdk_UI_Shell_ITaskbarLayoutStatics@UITaskbarLayoutStatics@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800D5C18 (-Current@-$consume_WindowsUdk_UI_Shell_ITaskbarLayoutStatics@UITaskbarLayoutStatics@Shell@UI@Win.c)
 *     ?GetShellViewButtonBoundsInRawPixels@?$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_KAEBW4ShellView@Shell@UI@WindowsUdk@3@@Z @ 0x1800D5C6C (-GetShellViewButtonBoundsInRawPixels@-$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayou.c)
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x1800D5CD4 (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 *     ??$check_bool@V?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@winrt@@YAXV?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@Z @ 0x1800D5D18 (--$check_bool@V-$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@winrt@@YAXV-$ComPtr@UIServiceProvide.c)
 *     ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@URect@234@@impl@winrt@@QEBA@XZ @ 0x1800D6234 (-Value@-$consume_Windows_Foundation_IReference@U-$IReference@URect@Foundation@Windows@winrt@@@Fo.c)
 *     ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@W4TaskbarAlignment@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@W4TaskbarAlignment@Shell@UI@WindowsUdk@4@@impl@winrt@@QEBA@XZ @ 0x1800D62FC (-Value@-$consume_Windows_Foundation_IReference@U-$IReference@W4TaskbarAlignment@Shell@UI@Windows.c)
 *     ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@W4TaskbarSearchMode@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@W4TaskbarSearchMode@Shell@UI@WindowsUdk@4@@impl@winrt@@QEBA@XZ @ 0x1800D6340 (-Value@-$consume_Windows_Foundation_IReference@U-$IReference@W4TaskbarSearchMode@Shell@UI@Window.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$call@P6A?AUTaskbarLayout@Shell@UI@WindowsUdk@winrt@@AEBUITaskbarLayoutStatics@2345@@Z@?$factory_cache_entry@UTaskbarLayout@Shell@UI@WindowsUdk@winrt@@UITaskbarLayoutStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUTaskbarLayout@Shell@UI@WindowsUdk@2@AEBUITaskbarLayoutStatics@4562@@Z@Z @ 0x18019F4DC (--$call@P6A-AUTaskbarLayout@Shell@UI@WindowsUdk@winrt@@AEBUITaskbarLayoutStatics@2345@@Z@-$facto.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801AB2A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_N.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?throw_last_error@winrt@@YAXXZ @ 0x1803925DC (-throw_last_error@winrt@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall SearchAppPositionerHelpers::ExtractMonitorInfo(__int64 a1, const RECT *a2, __int64 *a3)
{
  HMONITOR v6; // r15
  winrt *v7; // rcx
  __int64 (__fastcall *v8)(const struct winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics *); // rdi
  __int64 (__fastcall *v9)(__int64 (__fastcall *)(const struct winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics *), SID *, GUID *, __int64 *); // rbx
  int v10; // eax
  __int64 v11; // rbx
  int (__fastcall *v12)(__int64, HMONITOR, SID *, GUID *); // rdi
  __int64 v13; // rdx
  HWND WindowW; // rax
  __int64 v15; // rdx
  RECT v16; // xmm0
  int v17; // eax
  int v18; // eax
  int v19; // eax
  HMONITOR v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  float *v23; // rax
  float v24; // xmm2_4
  float v25; // xmm3_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  int *v29; // [rsp+20h] [rbp-148h]
  __int64 (__fastcall *v30)(const struct winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics *); // [rsp+30h] [rbp-138h] BYREF
  int v31; // [rsp+38h] [rbp-130h] BYREF
  int v32[2]; // [rsp+40h] [rbp-128h] BYREF
  __int64 v33; // [rsp+48h] [rbp-120h] BYREF
  __int64 v34; // [rsp+50h] [rbp-118h] BYREF
  __int64 v35; // [rsp+58h] [rbp-110h] BYREF
  __int64 v36; // [rsp+60h] [rbp-108h] BYREF
  __int64 v37[3]; // [rsp+68h] [rbp-100h] BYREF
  __int128 v38; // [rsp+80h] [rbp-E8h]
  __int128 v39; // [rsp+90h] [rbp-D8h] BYREF
  RECT rcMonitor; // [rsp+A0h] [rbp-C8h] BYREF
  RECT rcWork; // [rsp+B0h] [rbp-B8h]
  __int128 v42; // [rsp+C0h] [rbp-A8h] BYREF
  __m256i v43; // [rsp+D0h] [rbp-98h] BYREF
  int v44; // [rsp+F0h] [rbp-78h]
  struct tagMONITORINFO mi; // [rsp+100h] [rbp-68h] BYREF
  RECT v46; // [rsp+128h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  v37[1] = (__int64)a3;
  v30 = (__int64 (__fastcall *)(const struct winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics *))*a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v30);
  winrt::check_bool<Microsoft::WRL::ComPtr<IServiceProvider>>(&v30);
  memset_0(&rcMonitor, 0, 0x54uLL);
  v6 = MonitorFromRect(a2, 1u);
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 36);
  if ( !GetMonitorInfoW(v6, &mi) )
    winrt::throw_last_error(v7);
  rcMonitor = mi.rcMonitor;
  v37[0] = 0LL;
  v8 = (__int64 (__fastcall *)(const struct winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics *))*a3;
  v9 = *(__int64 (__fastcall **)(__int64 (__fastcall *)(const struct winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics *), SID *, GUID *, __int64 *))(*(_QWORD *)*a3 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v37);
  v10 = v9(v8, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, v37);
  if ( v10 < 0 )
    winrt::throw_hresult((unsigned int)v10);
  *(_QWORD *)v32 = 0LL;
  v11 = v37[0];
  v12 = *(int (__fastcall **)(__int64, HMONITOR, SID *, GUID *))(*(_QWORD *)v37[0] + 72LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v32);
  v29 = v32;
  if ( v12(v11, v6, &SID_EdgeUi, &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e) < 0 )
  {
    LOBYTE(v13) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl,
      v13);
    rcWork = mi.rcWork;
    v43.m256i_i32[1] = 3;
    v38 = 0LL;
    v42 = 0LL;
  }
  else
  {
    WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
    if ( WindowW && GetPropW(WindowW, L"IsAutoHideEnabled") )
    {
      (*(void (__fastcall **)(_QWORD, RECT *))(**(_QWORD **)v32 + 152LL))(*(_QWORD *)v32, &v46);
      v16 = v46;
    }
    else
    {
      v16 = mi.rcWork;
    }
    rcWork = v16;
    LOBYTE(v15) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl,
      v15);
    v43.m256i_i32[1] = 3;
    v17 = (*(__int64 (__fastcall **)(_QWORD, __int8 *))(**(_QWORD **)v32 + 80LL))(*(_QWORD *)v32, &v43.m256i_i8[4]);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x27,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\SearchAppPositionerHelpers.h",
        (const char *)(unsigned int)v17,
        (int)v32);
    v38 = 0LL;
    v42 = 0LL;
    v18 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)v32 + 112LL))(*(_QWORD *)v32, &v42);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x29,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\SearchAppPositionerHelpers.h",
        (const char *)(unsigned int)v18,
        (int)v29);
    v19 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v32 + 96LL))(*(_QWORD *)v32, &v31);
    if ( v19 < 0 )
      winrt::throw_hresult((unsigned int)v19);
    v43.m256i_i8[1] = v31 != 0;
  }
  v43.m256i_i8[0] = mi.dwFlags == 1;
  v43.m256i_i32[2] = ExperienceManagerUtils::GetPerMonitorDpi((ExperienceManagerUtils *)v6, v20);
  v43.m256i_i32[7] = 1;
  v44 = 1;
  v39 = 0LL;
  *(_OWORD *)((char *)&v43.m256i_u64[1] + 4) = 0LL;
  v37[2] = (__int64)&qword_18098E3D8;
  _InterlockedIncrement64(&qword_18098E3D8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::TaskbarLayout,winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics> )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_ITaskbarLayoutStatics<winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics>::Current(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::TaskbarLayout,winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics>,
      &v33);
    _InterlockedDecrement64(&qword_18098E3D8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E3D8);
    v30 = _lambda_a9de7e7a0851adce5db2c194794b7096_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::TaskbarLayout,winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics>::call<winrt::WindowsUdk::UI::Shell::TaskbarLayout (*)(winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics const &)>(
      v21,
      &v33,
      &v30);
  }
  winrt::impl::consume_WindowsUdk_UI_Shell_ITaskbarLayout<winrt::WindowsUdk::UI::Shell::ITaskbarLayout>::GetAlignment(
    &v33,
    &v36,
    v6);
  v30 = 0LL;
  if ( !(unsigned __int8)winrt::Windows::Foundation::operator==(&v36, &v30) )
    v43.m256i_i32[7] = winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<enum winrt::WindowsUdk::UI::Shell::TaskbarAlignment>,enum winrt::WindowsUdk::UI::Shell::TaskbarAlignment>::Value(&v36);
  winrt::impl::consume_WindowsUdk_UI_Shell_ITaskbarLayout<winrt::WindowsUdk::UI::Shell::ITaskbarLayout>::GetSearchMode(
    &v33,
    &v35,
    v6);
  v30 = 0LL;
  if ( !(unsigned __int8)winrt::Windows::Foundation::operator==(&v35, &v30) )
    v44 = winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<enum winrt::WindowsUdk::UI::Shell::TaskbarSearchMode>,enum winrt::WindowsUdk::UI::Shell::TaskbarSearchMode>::Value(&v35);
  v31 = 1;
  winrt::impl::consume_WindowsUdk_UI_Shell_ITaskbarLayout<winrt::WindowsUdk::UI::Shell::ITaskbarLayout>::GetShellViewButtonBoundsInRawPixels(
    &v33,
    &v34,
    v6,
    &v31);
  v30 = 0LL;
  if ( !(unsigned __int8)winrt::Windows::Foundation::operator==(&v34, &v30) )
  {
    v23 = (float *)winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::Rect>::Value(
                     &v34,
                     &v39);
    v24 = *v23;
    v25 = v23[1];
    v26 = v23[2];
    v27 = v23[3];
    v43.m256i_i32[3] = (int)*v23;
    v43.m256i_i32[4] = (int)v25;
    v43.m256i_i32[5] = (int)(float)(v24 + v26);
    v43.m256i_i32[6] = (int)(float)(v25 + v27);
  }
  if ( v34 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v34);
  if ( v35 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v35);
  if ( v36 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v36);
  if ( v33 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v33);
  LOBYTE(v22) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl,
    v22);
  v43.m256i_i8[1] = 0;
  *(RECT *)a1 = rcMonitor;
  *(RECT *)(a1 + 16) = rcWork;
  *(_OWORD *)(a1 + 32) = v42;
  *(__m256i *)(a1 + 48) = v43;
  *(_DWORD *)(a1 + 80) = v44;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v32);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v37);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a3);
  return a1;
}
