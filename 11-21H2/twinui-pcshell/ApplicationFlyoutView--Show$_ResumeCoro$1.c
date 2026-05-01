/*
 * XREFs of ApplicationFlyoutView::Show$_ResumeCoro$1 @ 0x1801D56C0
 * Callers:
 *     ApplicationFlyoutView::Show$_InitCoro$2 @ 0x1801D5564 (ApplicationFlyoutView--Show$_InitCoro$2.c)
 * Callees:
 *     ?await_ready@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180044190 (-await_ready@-$notify_awaiter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Sto.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Increment@CorrelationVector@@QEAAAEBV1@XZ @ 0x1800C7878 (-Increment@CorrelationVector@@QEAAAEBV1@XZ.c)
 *     ??1CorrelationVector@@QEAA@XZ @ 0x18017C464 (--1CorrelationVector@@QEAA@XZ.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXXZ @ 0x18017FF44 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXX.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@@experimental@std@@@Z @ 0x1801C2304 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@_ea_1801C2304.c)
 *     ??$await_transform@Uawaitable@?1??resume_background@winrt@@YA@XZ@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?AU?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@12@$$QEAUawaitable@?1??resume_background@2@YA@XZ@@Z @ 0x1801C240C (--$await_transform@Uawaitable@-1--resume_background@winrt@@YA@XZ@@-$promise_base@Upromise_type@-.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x1801C46BC (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@e.c)
 *     ?final_suspend@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?AUfinal_suspend_awaiter@123@XZ @ 0x1801CF3C8 (-final_suspend@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@.c)
 *     ?EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z @ 0x1801D4E00 (-EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVApplicationFlyoutView@@AEBURect@234@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@4@_JAEBVCorrelationVector@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801D5ACC (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_1801D5ACC.c)
 *     ?Extend@CorrelationVector@@QEBA?AV1@XZ @ 0x1805D0708 (-Extend@CorrelationVector@@QEBA-AV1@XZ.c)
 *     ?SetRectAndTaskbarLocation@ApplicationFlyoutView@@AEAAXAEBURect@Foundation@Windows@winrt@@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@5@@Z @ 0x1805D2DB4 (-SetRectAndTaskbarLocation@ApplicationFlyoutView@@AEAAXAEBURect@Foundation@Windows@winrt@@AEBW4T.c)
 *     ?TryShowHideWindow@ApplicationFlyoutView@@AEAAXPEAUHWND__@@_N@Z @ 0x1805D3230 (-TryShowHideWindow@ApplicationFlyoutView@@AEAAXPEAUHWND__@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
void __fastcall ApplicationFlyoutView::Show__ResumeCoro_1(__int64 a1)
{
  __int64 v3; // rcx
  ApplicationFlyoutView *v4; // rcx
  const enum winrt::WindowsUdk::UI::Shell::TaskbarLocation *v5; // r8
  const struct winrt::Windows::Foundation::Rect *v6; // rdx
  __int64 v7; // rcx
  ApplicationFlyoutView **v8; // r15
  ApplicationFlyoutView *v9; // rbx
  TraceLoggingCorrelationVector **v10; // rax
  __int64 v11; // rdx
  HWND v12; // rbx
  ApplicationFlyoutView *v13; // rcx
  _QWORD *v14; // rax
  __int16 v15; // ax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_8;
    case 2:
      *(_QWORD *)(a1 + 272) = a1 + 33;
      *(_QWORD *)(a1 + 288) = a1 + 705;
      v3 = *(_QWORD *)(a1 + 705);
      *(_QWORD *)(a1 + 304) = v3;
      *(_QWORD *)(a1 + 96) = v3;
      CorrelationVector::Extend(v3, a1 + 16);
      *(_QWORD *)(a1 + 320) = a1 + 1;
      *(_QWORD *)(a1 + 336) = a1 + 673;
      v4 = *(ApplicationFlyoutView **)(a1 + 673);
      *(_QWORD *)(a1 + 352) = v4;
      *(_QWORD *)(a1 + 112) = v4;
      *(_QWORD *)(a1 + 368) = a1 + 17;
      *(_QWORD *)(a1 + 384) = a1 + 689;
      v5 = *(const enum winrt::WindowsUdk::UI::Shell::TaskbarLocation **)(a1 + 689);
      *(_QWORD *)(a1 + 400) = v5;
      *(_QWORD *)(a1 + 416) = a1 + 9;
      *(_QWORD *)(a1 + 432) = a1 + 681;
      v6 = *(const struct winrt::Windows::Foundation::Rect **)(a1 + 681);
      *(_QWORD *)(a1 + 448) = v6;
      ApplicationFlyoutView::SetRectAndTaskbarLocation(v4, v6, v5);
      *(_BYTE *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 464) = a1 - 96;
      *(_QWORD *)(a1 + 128) = a1 - 96;
      *(_QWORD *)(a1 + 80) = ___await_transform_Uawaitable__1__resume_background_winrt__YA_XZ____promise_base_Upromise_type___coroutine_traits_U__IAsyncOperation__N_Foundation_Windows_winrt____V_experimental_std__U__IAsyncOperation__N_Foundation_Windows_winrt__X_impl_winrt__QEAA_AU__notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__12___QEAUawaitable__1__resume_background_2_YA_XZ__Z(
                               a1 - 96,
                               (_QWORD *)(a1 + 32),
                               a1 + 24);
      if ( winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_ready() )
        goto LABEL_5;
      *(_WORD *)(a1 + 8) = 4;
      ___await_suspend_Upromise_type___coroutine_traits_U__IAsyncOperation__N_Foundation_Windows_winrt____V_experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAAXU__coroutine_handle_Upromise_type___coroutine_traits_U__IAsyncOperation__N_Foundation_Windows_winrt____V_experimental_std___experimental_std___Z(
        v7,
        (void *)a1);
      return;
    case 4:
LABEL_5:
      _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAAXXZ();
      v8 = (ApplicationFlyoutView **)(*(_QWORD *)(a1 + 320) + 672LL);
      *(_QWORD *)(a1 + 480) = v8;
      v9 = *v8;
      *(_QWORD *)(a1 + 496) = *v8;
      *(_QWORD *)(a1 + 176) = v9;
      v10 = CorrelationVector::Increment((TraceLoggingCorrelationVector **)(a1 + 16));
      *(_QWORD *)(a1 + 160) = v10;
      *(_QWORD *)(a1 + 512) = a1 + 25;
      *(_QWORD *)(a1 + 528) = a1 + 697;
      v11 = *(_QWORD *)(a1 + 697);
      *(_QWORD *)(a1 + 544) = v11;
      *(_QWORD *)(a1 + 144) = v11;
      v12 = ApplicationFlyoutView::EnsureWindow(v9, v11, (const struct CorrelationVector *)v10);
      *(_QWORD *)(a1 + 256) = v12;
      *(_QWORD *)(a1 + 40) = v12;
      *(_QWORD *)(a1 + 560) = v8;
      v13 = *v8;
      *(_QWORD *)(a1 + 576) = *v8;
      *(_QWORD *)(a1 + 192) = v13;
      ApplicationFlyoutView::TryShowHideWindow(v13, v12, 1);
      *(_BYTE *)(a1 + 208) = !SetForegroundWindow(v12);
      *(_QWORD *)(a1 + 64) = retaddr;
      if ( *(_BYTE *)(a1 + 208) )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x84,
          (__int64)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
          (const char *)0x80070005LL);
      CorrelationVector::~CorrelationVector((void **)(a1 + 16));
      *(_QWORD *)(a1 + 464) = a1 - 96;
      v14 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend(
              a1 - 96,
              (_QWORD *)(a1 + 56));
      *(_QWORD *)(a1 + 48) = v14;
      *(_WORD *)(a1 + 8) = 0;
      if ( !(unsigned __int8)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,ApplicationFlyoutView *,winrt::Windows::Foundation::Rect const &,enum winrt::WindowsUdk::UI::Shell::TaskbarLocation const &,__int64,CorrelationVector const &>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::final_suspend_awaiter::await_suspend(v14) )
        goto LABEL_8;
      return;
    case 5:
      CorrelationVector::~CorrelationVector((void **)(a1 + 16));
LABEL_8:
      *(_QWORD *)(a1 + 464) = a1 - 96;
      winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(a1 - 96);
      *(_QWORD *)(a1 + 592) = a1 + 10;
      v15 = *(_WORD *)(a1 + 10);
      *(_WORD *)(a1 + 608) = v15;
      if ( v15 )
      {
        *(_QWORD *)(a1 + 624) = 809LL;
        *(_QWORD *)(a1 + 240) = 809LL;
        *(_QWORD *)(a1 + 224) = a1 - 96;
        operator delete(*(void **)(a1 + 224));
      }
      break;
    default:
      __debugbreak();
      break;
  }
}
