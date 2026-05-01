/*
 * XREFs of ApplicationFlyoutView::Hide$_ResumeCoro$1 @ 0x1801D5250
 * Callers:
 *     ApplicationFlyoutView::Hide$_InitCoro$2 @ 0x1801D5118 (ApplicationFlyoutView--Hide$_InitCoro$2.c)
 * Callees:
 *     ?await_ready@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180044190 (-await_ready@-$notify_awaiter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Sto.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXXZ @ 0x18017FF44 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXX.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@@experimental@std@@@Z @ 0x1801C2304 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@_ea_1801C2304.c)
 *     ??$await_transform@Uawaitable@?1??resume_background@winrt@@YA@XZ@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?AU?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@12@$$QEAUawaitable@?1??resume_background@2@YA@XZ@@Z @ 0x1801C240C (--$await_transform@Uawaitable@-1--resume_background@winrt@@YA@XZ@@-$promise_base@Upromise_type@-.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x1801C46BC (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@e.c)
 *     ?final_suspend@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?AUfinal_suspend_awaiter@123@XZ @ 0x1801CF3C8 (-final_suspend@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@.c)
 *     ?MissingRegistrationRecovery@MeetAndChatTelemetry@@SAXXZ @ 0x1801D5538 (-MissingRegistrationRecovery@MeetAndChatTelemetry@@SAXXZ.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVApplicationFlyoutView@@PEAUHWND__@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801D5B6C (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_1801D5B6C.c)
 *     ?FindWindowByPropertyName@Utils@@YAPEAUHWND__@@PEBG@Z @ 0x1805D094C (-FindWindowByPropertyName@Utils@@YAPEAUHWND__@@PEBG@Z.c)
 *     ?TryShowHideWindow@ApplicationFlyoutView@@AEAAXPEAUHWND__@@_N@Z @ 0x1805D3230 (-TryShowHideWindow@ApplicationFlyoutView@@AEAAXPEAUHWND__@@_N@Z.c)
 */

// Hidden C++ exception states: #try_helpers=1
void __fastcall ApplicationFlyoutView::Hide__ResumeCoro_1(__int64 a1)
{
  HWND WindowByPropertyName; // rax
  __int64 v4; // rcx
  HWND v5; // rdx
  ApplicationFlyoutView *v6; // rcx
  HWND *v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int16 v10; // ax

  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
    case 5:
      goto LABEL_10;
    case 2:
      WindowByPropertyName = Utils::FindWindowByPropertyName(
                               (Utils *)L"MeetAndChatFlyout",
                               (const unsigned __int16 *)&_ImageBase);
      *(_QWORD *)(a1 + 96) = WindowByPropertyName;
      *(_QWORD *)(a1 + 16) = WindowByPropertyName;
      *(_BYTE *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 160) = a1 - 96;
      *(_QWORD *)(a1 + 144) = ___await_transform_Uawaitable__1__resume_background_winrt__YA_XZ____promise_base_Upromise_type___coroutine_traits_U__IAsyncOperation__N_Foundation_Windows_winrt____V_experimental_std__U__IAsyncOperation__N_Foundation_Windows_winrt__X_impl_winrt__QEAA_AU__notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__12___QEAUawaitable__1__resume_background_2_YA_XZ__Z(
                                a1 - 96,
                                (_QWORD *)(a1 + 32),
                                a1 + 24);
      if ( winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_ready() )
        goto LABEL_4;
      *(_WORD *)(a1 + 8) = 4;
      ___await_suspend_Upromise_type___coroutine_traits_U__IAsyncOperation__N_Foundation_Windows_winrt____V_experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAAXU__coroutine_handle_Upromise_type___coroutine_traits_U__IAsyncOperation__N_Foundation_Windows_winrt____V_experimental_std___experimental_std___Z(
        v4,
        (void *)a1);
      return;
    case 4:
LABEL_4:
      _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAAXXZ();
      v5 = *(HWND *)(a1 + 16);
      if ( v5 )
      {
        *(_QWORD *)(a1 + 176) = a1 + 1;
        *(_QWORD *)(a1 + 192) = a1 + 417;
        v6 = *(ApplicationFlyoutView **)(a1 + 417);
        *(_QWORD *)(a1 + 208) = v6;
        *(_QWORD *)(a1 + 64) = v6;
      }
      else
      {
        *(_QWORD *)(a1 + 224) = a1 + 9;
        v7 = (HWND *)(a1 + 425);
        *(_QWORD *)(a1 + 240) = a1 + 425;
        v8 = *(_QWORD *)(a1 + 425);
        *(_QWORD *)(a1 + 256) = v8;
        if ( !v8 )
          goto LABEL_9;
        MeetAndChatTelemetry::MissingRegistrationRecovery();
        *(_QWORD *)(a1 + 176) = a1 + 1;
        *(_QWORD *)(a1 + 272) = a1 + 417;
        v6 = *(ApplicationFlyoutView **)(a1 + 417);
        *(_QWORD *)(a1 + 288) = v6;
        *(_QWORD *)(a1 + 80) = v6;
        *(_QWORD *)(a1 + 304) = v7;
        v5 = *v7;
        *(_QWORD *)(a1 + 320) = *v7;
      }
      ApplicationFlyoutView::TryShowHideWindow(v6, v5, 0);
LABEL_9:
      *(_QWORD *)(a1 + 160) = a1 - 96;
      v9 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend(
             a1 - 96,
             (_QWORD *)(a1 + 48));
      *(_QWORD *)(a1 + 40) = v9;
      *(_WORD *)(a1 + 8) = 0;
      if ( !(unsigned __int8)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,ApplicationFlyoutView *,HWND__ *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::final_suspend_awaiter::await_suspend(v9) )
      {
LABEL_10:
        *(_QWORD *)(a1 + 160) = a1 - 96;
        winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(a1 - 96);
        *(_QWORD *)(a1 + 336) = a1 + 10;
        v10 = *(_WORD *)(a1 + 10);
        *(_WORD *)(a1 + 352) = v10;
        if ( v10 )
        {
          *(_QWORD *)(a1 + 368) = 529LL;
          *(_QWORD *)(a1 + 128) = 529LL;
          *(_QWORD *)(a1 + 112) = a1 - 96;
          operator delete(*(void **)(a1 + 112));
        }
      }
      return;
    default:
      __debugbreak();
      return;
  }
}
