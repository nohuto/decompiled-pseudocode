/*
 * XREFs of FallbackFlyoutView::Hide$_ResumeCoro$1 @ 0x1801D4140
 * Callers:
 *     FallbackFlyoutView::Hide$_InitCoro$2 @ 0x1801D4008 (FallbackFlyoutView--Hide$_InitCoro$2.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x1801C46BC (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@e.c)
 *     ?final_suspend@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?AUfinal_suspend_awaiter@123@XZ @ 0x1801CF3C8 (-final_suspend@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@PEAUHWND__@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801D489C (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_1801D489C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureExperienceManager@FallbackFlyoutView@@AEAA?AV?$com_ptr_t@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1805D1C88 (-EnsureExperienceManager@FallbackFlyoutView@@AEAA-AV-$com_ptr_t@UINetworkFlyoutExperienceManager.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall FallbackFlyoutView::Hide__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // rcx
  _QWORD *v4; // rax
  int v5; // eax
  _QWORD *v6; // rax
  __int16 v7; // ax
  int v8; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = a1;
  v2 = a1;
  LOWORD(v8) = *(_WORD *)(a1 + 8);
  switch ( (__int16)v8 )
  {
    case -1:
    case 1:
    case 3:
      goto LABEL_6;
    case 2:
      try
      {
        *(_QWORD *)(a1 + 112) = a1 + 1;
        *(_QWORD *)(a1 + 128) = a1 + 257;
        v3 = *(_QWORD *)(a1 + 257);
        *(_QWORD *)(v1 + 144) = v3;
        *(_QWORD *)(v1 + 48) = v3;
        v4 = (_QWORD *)FallbackFlyoutView::EnsureExperienceManager(v3, v1 + 16);
        *(_QWORD *)(v1 + 64) = v4;
        v5 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 56LL))(*v4);
        if ( v5 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x41,
            (int)"pcshell\\twinui\\meetandchatmanager\\lib\\fallbackflyoutview.cpp",
            (const char *)(unsigned int)v5,
            v8);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(v1 + 16));
      }
      catch ( ... )
      {
        *(_WORD *)(a1 + 8) = -1;
        *(_QWORD *)(a1 + 160) = a1 - 96;
        winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,HWND__ *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::unhandled_exception(a1 - 96);
        v1 = a1;
        v2 = a1;
      }
      *(_QWORD *)(v1 + 160) = v1 - 96;
      v6 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend(
             v1 - 96,
             (_QWORD *)(v1 + 32));
      *(_QWORD *)(v1 + 24) = v6;
      *(_WORD *)(v1 + 8) = 0;
      if ( !(unsigned __int8)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,HWND__ *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::final_suspend_awaiter::await_suspend(v6) )
      {
LABEL_6:
        *(_QWORD *)(v1 + 160) = v1 - 96;
        winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(v1 - 96);
        *(_QWORD *)(v1 + 176) = v1 + 10;
        v7 = *(_WORD *)(v1 + 10);
        *(_WORD *)(v1 + 192) = v7;
        if ( v7 )
        {
          *(_QWORD *)(v1 + 208) = 369LL;
          *(_QWORD *)(v1 + 96) = 369LL;
          *(_QWORD *)(v2 + 80) = v1 - 96;
          operator delete(*(void **)(v1 + 80));
        }
      }
      break;
    default:
      __debugbreak();
      break;
  }
}
