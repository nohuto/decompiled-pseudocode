/*
 * XREFs of FallbackFlyoutView::Show$_ResumeCoro$1 @ 0x1801D44F0
 * Callers:
 *     FallbackFlyoutView::Show$_InitCoro$2 @ 0x1801D4398 (FallbackFlyoutView--Show$_InitCoro$2.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x1801C46BC (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@e.c)
 *     ?final_suspend@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?AUfinal_suspend_awaiter@123@XZ @ 0x1801CF3C8 (-final_suspend@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@AEBURect@234@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@4@_JAEBVCorrelationVector@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801D47FC (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_1801D47FC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x18031996C (-SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z.c)
 *     ?EnsureExperienceManager@FallbackFlyoutView@@AEAA?AV?$com_ptr_t@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1805D1C88 (-EnsureExperienceManager@FallbackFlyoutView@@AEAA-AV-$com_ptr_t@UINetworkFlyoutExperienceManager.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall FallbackFlyoutView::Show__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r14
  _OWORD *v3; // rax
  __int64 *v4; // rcx
  __int64 v5; // rcx
  __int64 **v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  _QWORD *v11; // rax
  __int16 v12; // ax
  int v13; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = a1;
  v2 = a1;
  LOWORD(v13) = *(_WORD *)(a1 + 8);
  switch ( (__int16)v13 )
  {
    case -1:
    case 1:
    case 3:
      goto LABEL_8;
    case 2:
      try
      {
        *(_QWORD *)(a1 + 160) = a1 + 9;
        *(_QWORD *)(a1 + 176) = a1 + 361;
        v3 = *(_OWORD **)(a1 + 361);
        *(_QWORD *)(a1 + 192) = v3;
        *(_QWORD *)(a1 + 80) = v3;
        *(_OWORD *)(a1 + 16) = *v3;
        *(_QWORD *)(a1 + 208) = a1 + 1;
        v4 = (__int64 *)(a1 + 353);
        *(_QWORD *)(v1 + 224) = v4;
        v5 = *v4;
        *(_QWORD *)(v1 + 240) = v5;
        *(_QWORD *)(v1 + 96) = v5;
        v6 = (__int64 **)FallbackFlyoutView::EnsureExperienceManager(v5, v1 + 32);
        *(_QWORD *)(v1 + 112) = v6;
        v7 = *v6;
        v8 = **v6;
        *(_OWORD *)(v1 + 64) = *(_OWORD *)(v1 + 16);
        v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v8 + 48))(v7, v1 + 64, 0LL);
        if ( v9 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x3A,
            (int)"pcshell\\twinui\\meetandchatmanager\\lib\\fallbackflyoutview.cpp",
            (const char *)(unsigned int)v9,
            v13);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(v1 + 32));
        v10 = SHRegSetDWORD(
                HKEY_CURRENT_USER,
                L"Software\\Microsoft\\Windows\\CurrentVersion\\Communications",
                L"FallbackShown",
                1u);
        if ( v10 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3B,
            (__int64)"pcshell\\twinui\\meetandchatmanager\\lib\\fallbackflyoutview.cpp",
            (const char *)(unsigned int)v10);
      }
      catch ( ... )
      {
        *(_WORD *)(a1 + 8) = -1;
        *(_QWORD *)(a1 + 256) = a1 - 96;
        winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,HWND__ *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::unhandled_exception(a1 - 96);
        v1 = a1;
        v2 = a1;
      }
      *(_QWORD *)(v1 + 256) = v1 - 96;
      v11 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend(
              v1 - 96,
              (_QWORD *)(v1 + 48));
      *(_QWORD *)(v1 + 40) = v11;
      *(_WORD *)(v1 + 8) = 0;
      if ( !(unsigned __int8)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,winrt::Windows::Foundation::Rect const &,enum winrt::WindowsUdk::UI::Shell::TaskbarLocation const &,__int64,CorrelationVector const &>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::final_suspend_awaiter::await_suspend(v11) )
      {
LABEL_8:
        *(_QWORD *)(v1 + 256) = v1 - 96;
        winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(v1 - 96);
        *(_QWORD *)(v1 + 272) = v1 + 10;
        v12 = *(_WORD *)(v1 + 10);
        *(_WORD *)(v1 + 288) = v12;
        if ( v12 )
        {
          *(_QWORD *)(v1 + 304) = 489LL;
          *(_QWORD *)(v1 + 144) = 489LL;
          *(_QWORD *)(v2 + 128) = v1 - 96;
          operator delete(*(void **)(v1 + 128));
        }
      }
      break;
    default:
      __debugbreak();
      break;
  }
}
