/*
 * XREFs of winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncAction_::cancel_asynchronously$_ResumeCoro$1 @ 0x1801B4070
 * Callers:
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType___::cancel_asynchronously$_InitCoro$2 @ 0x1801B3F90 (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Storage--.c)
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncAction_::cancel_asynchronously$_InitCoro$2 @ 0x1801CF008 (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncAction_--cancel_asynchronously$_Ini.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?await_ready@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180044190 (-await_ready@-$notify_awaiter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Sto.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXXZ @ 0x18017FF44 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXX.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@UIAsyncAction@Foundation@Windows@2@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@UIAsyncAction@Foundation@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x18022B998 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@UIAsyncAction@Foundati.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUHWND__@@W4ShowFlags@3@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x18022BDF0 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUH.c)
 *     ?Cancel@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBAXXZ @ 0x18049A350 (-Cancel@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@UIRandomAccessStreamReference.c)
 */

// Hidden C++ exception states: #try_helpers=1
void __fastcall winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncAction_::cancel_asynchronously__ResumeCoro_1(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  char v3; // al
  __int64 v4; // rcx
  __int16 v5; // ax

  v1 = a1;
  v2 = a1;
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 3:
    case 5:
      goto LABEL_6;
    case 2:
      *(_BYTE *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = a1 + 16;
      v3 = winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_ready();
      *(_BYTE *)(v1 + 48) = v3;
      if ( v3 )
        goto LABEL_4;
      *(_WORD *)(v1 + 8) = 4;
      ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__UIAsyncAction_Foundation_Windows_2__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAAXU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__UIAsyncAction_Foundation_Windows_2__experimental_std___experimental_std___Z(
        v4,
        v1);
      break;
    case 4:
LABEL_4:
      _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAAXXZ();
      try
      {
        *(_QWORD *)(v1 + 96) = v1 + 1;
        *(_QWORD *)(v1 + 112) = v1 + 257;
        winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>>::Cancel();
      }
      catch ( winrt::hresult_error )
      {
        v1 = a1;
        v2 = a1;
      }
      std::experimental::coroutine_traits<winrt::fire_and_forget,SnapFlyoutHost *,HWND__ *,enum SnapFlyoutHost::ShowFlags>::promise_type::final_suspend(
        v1,
        v1 + 32);
LABEL_6:
      *(_QWORD *)(v1 + 96) = v1 + 1;
      *(_QWORD *)(v1 + 128) = v1 + 257;
      winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(v1 + 257));
      *(_QWORD *)(v1 + 144) = v1 + 10;
      v5 = *(_WORD *)(v1 + 10);
      *(_WORD *)(v1 + 160) = v5;
      if ( v5 )
      {
        *(_QWORD *)(v1 + 176) = 265LL;
        *(_QWORD *)(v1 + 80) = 265LL;
        *(_QWORD *)(v2 + 64) = v1;
        *(_QWORD *)(v1 + 240) = v1 + 1;
        *(_QWORD *)(v1 + 224) = v1 + 10;
        operator delete((void *)v1);
      }
      break;
    default:
      __debugbreak();
      break;
  }
}
