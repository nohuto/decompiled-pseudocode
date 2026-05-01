/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_ResumeCoro$1 @ 0x180247380
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_InitCoro$2 @ 0x180247258 (winrt--Windows--Internal--Shell--implementation--WaitConfigurableDurationAsync$_InitCoro$2.c)
 * Callees:
 *     ??$WebExperienceDelayStarted@AEAPEBG_J@DashboardManagerTelemetry@@SAXAEAPEBG$$QEA_J@Z @ 0x1800AFA3C (--$WebExperienceDelayStarted@AEAPEBG_J@DashboardManagerTelemetry@@SAXAEAPEBG$$QEA_J@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@@experimental@std@@@?$notify_awaiter@V?$duration@HU?$ratio@$0DM@$00@std@@@chrono@std@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x18018F814 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashb_ea_18018F814.c)
 *     ??$await_transform@AEAV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?A_PAEAV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@Z @ 0x18019AD44 (--$await_transform@AEAV-$duration@_JU-$ratio@$00$0DOI@@std@@@chrono@std@@@-$promise_base@Upromis.c)
 *     ?await_ready@?$notify_awaiter@V?$duration@HU?$ratio@$0DM@$00@std@@@chrono@std@@@impl@winrt@@QEAA_NXZ @ 0x1801BCE34 (-await_ready@-$notify_awaiter@V-$duration@HU-$ratio@$0DM@$00@std@@@chrono@std@@@impl@winrt@@QEAA.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     wcscmp_0 @ 0x1801CE4C6 (wcscmp_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FixWidgetsPrelaunchDelay@@@details@wil@@QEAA_NXZ @ 0x1802489A0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FixWidgetsPrelaunchDelay@@@detail.c)
 *     ?final_suspend@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVCLauncherTipContextMenu@@UtagRECT@@@experimental@std@@U?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1802E7674 (-final_suspend@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IVectorView.c)
 *     ??1?$notify_awaiter@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA@XZ @ 0x1802E79A0 (--1-$notify_awaiter@V-$duration@_JU-$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA@XZ.c)
 *     ?await_resume@?$notify_awaiter@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA@XZ @ 0x1806389B4 (-await_resume@-$notify_awaiter@V-$duration@_JU-$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x180695208 (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180698A60 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_180698A60.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync__ResumeCoro_1(
        __int64 a1)
{
  _WORD *v2; // r14
  LPCWSTR *v3; // r12
  __int64 v4; // rax
  DWORD *pcbData; // rax
  unsigned int *pvData; // rbx
  void *v7; // rbx
  __int64 v8; // rax

  v2 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_16;
    case 2:
      v3 = (LPCWSTR *)(a1 + 145);
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixWidgetsPrelaunchDelay>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FixWidgetsPrelaunchDelay>::GetImpl'::`2'::impl) )
      {
        if ( *v3 && !wcscmp_0(*v3, L"PrelaunchDelay") )
        {
          *(_DWORD *)(a1 + 16) = 8;
          if ( RegGetValueW(
                 HKEY_CURRENT_USER,
                 L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Dsh",
                 *v3,
                 0x48u,
                 0LL,
                 (PVOID)(a1 + 24),
                 (LPDWORD)(a1 + 16)) )
          {
            goto LABEL_12;
          }
          v4 = *(_QWORD *)(a1 + 24);
          goto LABEL_11;
        }
        pcbData = (DWORD *)(a1 + 32);
        pvData = (unsigned int *)(a1 + 36);
      }
      else
      {
        pcbData = (DWORD *)(a1 + 40);
        pvData = (unsigned int *)(a1 + 44);
      }
      *pcbData = 4;
      if ( RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Dsh",
             *v3,
             0x18u,
             0LL,
             pvData,
             pcbData) )
      {
        goto LABEL_12;
      }
      v4 = *pvData;
LABEL_11:
      *(_QWORD *)(a1 + 153) = v4;
LABEL_12:
      *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 153);
      DashboardManagerTelemetry::WebExperienceDelayStarted<unsigned short const * &,__int64>(
        (const WCHAR **)(a1 + 145),
        (int *)(a1 + 48));
      *(_QWORD *)(a1 + 128) = a1 - 96;
      v7 = (void *)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,unsigned short const *,std::chrono::duration<__int64,std::ratio<1,1000>>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::await_transform<std::chrono::duration<__int64,std::ratio<1,1000>> &>(
                     a1 - 96,
                     a1 + 56,
                     (_QWORD *)(a1 + 153));
      *(_QWORD *)(a1 + 112) = v7;
      if ( winrt::impl::notify_awaiter<std::chrono::duration<int,std::ratio<60,1>>>::await_ready((__int64)v7) )
      {
LABEL_15:
        winrt::impl::notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>::await_resume(*(_QWORD *)(a1 + 112));
        winrt::impl::notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>::~notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>(a1 + 56);
        v8 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>>,CLauncherTipContextMenu *,tagRECT>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>>,void>::final_suspend(
               *(_QWORD *)(a1 + 128),
               a1 + 104);
        *(_QWORD *)(a1 + 96) = v8;
        *v2 = 0;
        if ( !(unsigned __int8)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,unsigned short const *,std::chrono::duration<__int64,std::ratio<1,1000>>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::final_suspend_awaiter::await_suspend(v8) )
        {
LABEL_16:
          *(_QWORD *)(a1 + 128) = a1 - 96;
          winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,unsigned short const *,std::chrono::duration<__int64,std::ratio<1,1000>>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,unsigned short const *,std::chrono::duration<__int64,std::ratio<1,1000>>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(a1 - 96);
          if ( *(_WORD *)(a1 + 10) )
            operator delete((void *)(a1 - 96));
        }
      }
      else
      {
        *v2 = 4;
        winrt::impl::notify_awaiter<std::chrono::duration<int,std::ratio<60,1>>>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::DashboardManager *>::promise_type>(v7);
      }
      return;
    case 4:
      goto LABEL_15;
    case 5:
      winrt::impl::notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>::~notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>(a1 + 56);
      goto LABEL_16;
    default:
      __debugbreak();
      return;
  }
}
