/*
 * XREFs of _lambda_b8623916b833b4369876a538bb21da9f_$_ResumeCoro$1::operator() @ 0x1801BB050
 * Callers:
 *     _lambda_b8623916b833b4369876a538bb21da9f_$_InitCoro$2::operator() @ 0x1801BAF30 (_lambda_b8623916b833b4369876a538bb21da9f_$_InitCoro$2--operator().c)
 * Callees:
 *     ??1IPrelaunchActivatedEventArgs@Activation@ApplicationModel@Windows@winrt@@QEAA@XZ @ 0x180020144 (--1IPrelaunchActivatedEventArgs@Activation@ApplicationModel@Windows@winrt@@QEAA@XZ.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_b8623916b833b4369876a538bb21da9f__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__void_::final_suspend_awaiter::await_suspend @ 0x180026398 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Foundation--IAsync.c)
 *     std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_b8623916b833b4369876a538bb21da9f__const___::promise_type::_promise_type @ 0x180026438 (std--experimental--coroutine_traits_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_b8623916b833b4369876a538bb21da9f__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__void_::await_transform__winrt::resume_after_::_2_::awaitable_ @ 0x18003FB54 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_18003FB54.c)
 *     ?await_ready@?$notify_awaiter@Uawaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA_NXZ @ 0x180042498 (-await_ready@-$notify_awaiter@Uawaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_b8623916b833b4369876a538bb21da9f__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__void_::final_suspend @ 0x180043604 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_180043604.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAAXXZ @ 0x180043AE8 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$.c)
 *     ?return_value@promise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@AEBU1234@AEBU1234@@experimental@std@@QEAAX$$QEAUIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Z @ 0x180044474 (-return_value@promise_type@-$coroutine_traits@U-$IAsyncOperation@UIRandomAccessStreamReference@S.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@PEBV_lambda_b8623916b833b4369876a538bb21da9f_@@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@PEBV_lambda_b8623916b833b4369876a538bb21da9f_@@@experimental@std@@@experimental@std@@@Z @ 0x1800444E8 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UIRandomAccessStreamReferen.c)
 *     ??1awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAA@XZ @ 0x180158CE0 (--1awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
void __fastcall lambda_b8623916b833b4369876a538bb21da9f___ResumeCoro_1::operator()(__int64 a1)
{
  PVOID *v3; // rbx
  __int64 v4; // r14
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int16 v7; // ax

  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_6;
    case 2:
      *(_QWORD *)(a1 + 176) = a1 - 112;
      *(_QWORD *)(a1 + 96) = a1 - 112;
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_QWORD *)(a1 + 24) = 0LL;
      *(_QWORD *)(a1 + 32) = 10000000LL;
      *(_QWORD *)(a1 + 40) = 0LL;
      *(_DWORD *)(a1 + 48) = 0;
      v3 = (PVOID *)winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_b8623916b833b4369876a538bb21da9f__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__void_::await_transform__winrt::resume_after_::_2_::awaitable_(
                      a1 - 112,
                      (_QWORD *)(a1 + 56),
                      (_QWORD *)(a1 + 16));
      *(_QWORD *)(a1 + 112) = v3;
      if ( _await_ready___notify_awaiter_Uawaitable__1__resume_after_winrt__YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_NXZ((__int64)v3) )
        goto LABEL_5;
      *(_WORD *)(a1 + 8) = 4;
      ___await_suspend_Upromise_type___coroutine_traits_U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_winrt__PEBV_lambda_b8623916b833b4369876a538bb21da9f____experimental_std_____notify_awaiter_Uawaitable__1__resume_after_winrt__YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAAXU__coroutine_handle_Upromise_type___coroutine_traits_U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_winrt__PEBV_lambda_b8623916b833b4369876a538bb21da9f____experimental_std___experimental_std___Z(v3);
      return;
    case 4:
LABEL_5:
      _await_resume___notify_awaiter_Uawaitable__1__resume_after_winrt__YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAAXXZ(*(_QWORD **)(a1 + 112));
      `winrt::resume_after'::`2'::awaitable::~awaitable(a1 + 16);
      *(_QWORD *)(a1 + 64) = 0LL;
      v4 = *(_QWORD *)(a1 + 176);
      std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference> const &,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference> const &>::promise_type::return_value(
        v4,
        a1 + 64);
      winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs::~IPrelaunchActivatedEventArgs((winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs *)(a1 + 64));
      *(_QWORD *)(a1 + 272) = v4;
      v5 = winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_b8623916b833b4369876a538bb21da9f__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__void_::final_suspend(
             v4,
             (_QWORD *)(a1 + 80));
      *(_QWORD *)(a1 + 72) = v5;
      *(_WORD *)(a1 + 8) = 0;
      if ( !winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_b8623916b833b4369876a538bb21da9f__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__void_::final_suspend_awaiter::await_suspend(
              v5,
              v6) )
        goto LABEL_6;
      return;
    case 5:
      `winrt::resume_after'::`2'::awaitable::~awaitable(a1 + 16);
LABEL_6:
      *(_QWORD *)(a1 + 176) = a1 - 112;
      *(_QWORD *)(a1 + 128) = a1 - 112;
      std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_b8623916b833b4369876a538bb21da9f__const___::promise_type::_promise_type(a1 - 112);
      *(_QWORD *)(a1 + 192) = a1 + 10;
      v7 = *(_WORD *)(a1 + 10);
      *(_WORD *)(a1 + 208) = v7;
      if ( v7 )
      {
        *(_QWORD *)(a1 + 224) = 409LL;
        *(_QWORD *)(a1 + 160) = 409LL;
        *(_QWORD *)(a1 + 144) = a1 - 112;
        operator delete(*(void **)(a1 + 144));
      }
      break;
    default:
      __debugbreak();
      break;
  }
}
