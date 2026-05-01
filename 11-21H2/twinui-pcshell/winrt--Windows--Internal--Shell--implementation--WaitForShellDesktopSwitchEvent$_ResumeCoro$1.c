/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::WaitForShellDesktopSwitchEvent$_ResumeCoro$1 @ 0x1801CDF90
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WaitForShellDesktopSwitchEvent$_InitCoro$2 @ 0x1801CDE68 (winrt--Windows--Internal--Shell--implementation--WaitForShellDesktopSwitchEvent$_InitCoro$2.c)
 * Callees:
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@@experimental@std@@@Z @ 0x1800444D8 (--$await_suspend@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@ex.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800E5674 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA_NXZ @ 0x1801732E4 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ra.c)
 *     ?await_ready@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA_NXZ @ 0x180177638 (-await_ready@-$notify_awaiter@Uawaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$rat.c)
 *     ?resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x180178CCC (-resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z.c)
 *     ??1awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAA@XZ @ 0x18017AD28 (--1awaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??$await_transform@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?AU?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@12@$$QEAUawaitable@?1??resume_on_signal@2@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@Z @ 0x1801C2448 (--$await_transform@Uawaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$r_ea_1801C2448.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x1801C46BC (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@e.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801CEEC8 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_1801CEEC8.c)
 *     ?final_suspend@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?AUfinal_suspend_awaiter@123@XZ @ 0x1801CF3C8 (-final_suspend@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::WaitForShellDesktopSwitchEvent__ResumeCoro_1(
        __int64 a1)
{
  wil::details **v3; // r14
  HANDLE v4; // rax
  void *v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // r9
  PVOID *v8; // r14
  void *v9; // rdx
  __int64 v10; // rax
  __int16 v11; // ax

  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_8;
    case 2:
      v3 = (wil::details **)(a1 + 16);
      v4 = OpenEventW(0x100000u, 0, L"ShellDesktopSwitchEvent");
      *(_QWORD *)(a1 + 16) = v4;
      if ( !v4 )
        goto LABEL_7;
      *(_QWORD *)(a1 + 160) = a1 - 96;
      v6 = (_QWORD *)winrt::resume_on_signal(a1 + 24, *(_QWORD *)(a1 + 16), 3000000000LL);
      v8 = (PVOID *)___await_transform_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z____promise_base_Upromise_type___coroutine_traits_UIAsyncAction_Foundation_Windows_winrt____V_experimental_std__UIAsyncAction_Foundation_Windows_winrt__X_impl_winrt__QEAA_AU__notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__12___QEAUawaitable__1__resume_on_signal_2_YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__Z(
                      v7,
                      (_QWORD *)(a1 + 80),
                      v6);
      *(_QWORD *)(a1 + 144) = v8;
      if ( _await_ready___notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_NXZ((__int64)v8) )
      {
LABEL_6:
        _await_resume___notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_NXZ(*(__int64 **)(a1 + 144));
        `winrt::resume_on_signal'::`2'::awaitable::~awaitable(a1 + 24);
        v3 = (wil::details **)(a1 + 16);
LABEL_7:
        __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
          v3,
          v5);
        *(_QWORD *)(a1 + 160) = a1 - 96;
        v10 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend(
                a1 - 96,
                a1 + 96);
        *(_QWORD *)(a1 + 88) = v10;
        *(_WORD *)(a1 + 8) = 0;
        if ( !(unsigned __int8)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::final_suspend_awaiter::await_suspend(v10) )
        {
LABEL_8:
          *(_QWORD *)(a1 + 160) = a1 - 96;
          winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(a1 - 96);
          *(_QWORD *)(a1 + 176) = a1 + 10;
          v11 = *(_WORD *)(a1 + 10);
          *(_WORD *)(a1 + 192) = v11;
          if ( v11 )
          {
            *(_QWORD *)(a1 + 208) = 353LL;
            *(_QWORD *)(a1 + 128) = 353LL;
            *(_QWORD *)(a1 + 112) = a1 - 96;
            operator delete(*(void **)(a1 + 112));
          }
        }
      }
      else
      {
        *(_WORD *)(a1 + 8) = 4;
        ___await_suspend_Upromise_type___coroutine_traits_UIAsyncAction_Foundation_Windows_winrt____V_experimental_std_____notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAAXU__coroutine_handle_Upromise_type___coroutine_traits_UIAsyncAction_Foundation_Windows_winrt____V_experimental_std___experimental_std___Z(v8);
      }
      return;
    case 4:
      goto LABEL_6;
    case 5:
      `winrt::resume_on_signal'::`2'::awaitable::~awaitable(a1 + 24);
      __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
        (wil::details **)(a1 + 16),
        v9);
      goto LABEL_8;
    default:
      __debugbreak();
      return;
  }
}
