/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::ReportMeetAndChatUsage$_ResumeCoro$1 @ 0x1801D63D0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::ReportMeetAndChatUsage$_InitCoro$2 @ 0x1801D6304 (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--ReportMeetAndChatUsage$_InitCo.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??$await_transform@U?$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windows@winrt@@@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVMeetAndChatIris@implementation@Shell@Internal@Windows@2@W4MeetAndChatUsageType@5672@@experimental@std@@QEAA?AU?$notify_awaiter@U?$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@$$QEAU?$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windows@6@@Z @ 0x18003F8F8 (--$await_transform@U-$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windo.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUHWND__@@W4ShowFlags@3@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x18022BDF0 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUH.c)
 *     ?await_ready@?$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180350F8C (-await_ready@-$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ??1?$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x18049A2BC (--1-$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVMeetAndChatIris@implementation@Shell@Internal@Windows@2@W4MeetAndChatUsageType@5672@@experimental@std@@@?$notify_awaiter@U?$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVMeetAndChatIris@implementation@Shell@Internal@Windows@2@W4MeetAndChatUsageType@5672@@experimental@std@@@experimental@std@@@Z @ 0x1805D3D6C (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVMeetAndChatIris@im.c)
 *     ?ReportActionAsync@?$consume_WindowsUdk_Services_Iris_IIrisServiceProvider@UIIrisServiceProvider@Iris@Services@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windows@3@AEBUIrisCreative@Iris@Services@WindowsUdk@3@AEBW4IrisAction@89WindowsUdk@3@@Z @ 0x1805D5AE4 (-ReportActionAsync@-$consume_WindowsUdk_Services_Iris_IIrisServiceProvider@UIIrisServiceProvider.c)
 *     ?ReportImpressionAsync@?$consume_WindowsUdk_Services_Iris_IIrisServiceProvider@UIIrisServiceProvider@Iris@Services@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windows@3@AEBUIrisCreative@Iris@Services@WindowsUdk@3@@Z @ 0x1805D5B4C (-ReportImpressionAsync@-$consume_WindowsUdk_Services_Iris_IIrisServiceProvider@UIIrisServiceProv.c)
 *     ?await_resume@?$notify_awaiter@U?$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA?AW4HttpStatusCode@Http@Web@Windows@3@XZ @ 0x1805D5EF8 (-await_resume@-$notify_awaiter@U-$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foun.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::ReportMeetAndChatUsage__ResumeCoro_1(
        char *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rax
  __int64 v4; // r8
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int16 v9; // ax
  __int64 v10; // rax
  __int64 v11; // rcx
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *v12; // rcx
  __int16 v13; // ax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_19;
      case 2:
        *((_QWORD *)a1 + 18) = a1 + 1;
        *((_QWORD *)a1 + 20) = a1 + 337;
        v2 = *(__int64 **)(a1 + 337);
        *((_QWORD *)a1 + 22) = v2;
        v2 += 4;
        *((_QWORD *)a1 + 24) = v2;
        v3 = *v2;
        *((_QWORD *)a1 + 26) = v3;
        if ( !v3 )
          goto LABEL_18;
        v4 = *(_QWORD *)(a1 + 337);
        if ( !*(_DWORD *)(v4 + 48) )
          goto LABEL_18;
        *((_QWORD *)a1 + 28) = a1 + 9;
        v5 = *(_DWORD *)(a1 + 345);
        if ( v5 )
        {
          if ( v5 != 1 )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x198,
              (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatiris.cpp",
              (const char *)1);
          *((_DWORD *)a1 + 16) = 0;
          v10 = winrt::impl::consume_WindowsUdk_Services_Iris_IIrisServiceProvider<winrt::WindowsUdk::Services::Iris::IIrisServiceProvider>::ReportActionAsync(
                  v4 + 32,
                  a1 + 72,
                  *(_QWORD *)(v4 + 40));
          v8 = std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *,enum winrt::Windows::Internal::Shell::MeetAndChatUsageType>::promise_type::await_transform<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Web::Http::HttpStatusCode>>(
                 v11,
                 (__int64)(a1 + 80),
                 v10);
          *((_QWORD *)a1 + 7) = v8;
          if ( !(unsigned __int8)winrt::impl::notify_awaiter<winrt::apartment_context const &>::await_ready(v8) )
          {
            v9 = 6;
            goto LABEL_8;
          }
LABEL_16:
          winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Web::Http::HttpStatusCode>>::await_resume(*((_QWORD *)a1 + 7));
          winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 80);
          v12 = (winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 72);
        }
        else
        {
          v6 = winrt::impl::consume_WindowsUdk_Services_Iris_IIrisServiceProvider<winrt::WindowsUdk::Services::Iris::IIrisServiceProvider>::ReportImpressionAsync(
                 v4 + 32,
                 a1 + 24,
                 *(_QWORD *)(v4 + 40));
          v8 = std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *,enum winrt::Windows::Internal::Shell::MeetAndChatUsageType>::promise_type::await_transform<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Web::Http::HttpStatusCode>>(
                 v7,
                 (__int64)(a1 + 32),
                 v6);
          *((_QWORD *)a1 + 2) = v8;
          if ( !(unsigned __int8)winrt::impl::notify_awaiter<winrt::apartment_context const &>::await_ready(v8) )
          {
            v9 = 4;
LABEL_8:
            *((_WORD *)a1 + 4) = v9;
            winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Web::Http::HttpStatusCode>>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *,enum winrt::Windows::Internal::Shell::MeetAndChatUsageType>::promise_type>(
              v8,
              a1);
            return;
          }
LABEL_14:
          winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Web::Http::HttpStatusCode>>::await_resume(*((_QWORD *)a1 + 2));
          winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 32);
          v12 = (winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 24);
        }
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2(v12);
LABEL_18:
        std::experimental::coroutine_traits<winrt::fire_and_forget,SnapFlyoutHost *,HWND__ *,enum SnapFlyoutHost::ShowFlags>::promise_type::final_suspend(
          a1,
          a1 + 104);
LABEL_19:
        *((_QWORD *)a1 + 30) = a1 + 10;
        v13 = *((_WORD *)a1 + 5);
        *((_WORD *)a1 + 128) = v13;
        if ( v13 )
        {
          *((_QWORD *)a1 + 34) = 353LL;
          *((_QWORD *)a1 + 16) = 353LL;
          *((_QWORD *)a1 + 14) = a1;
          *((_QWORD *)a1 + 40) = a1 + 10;
          operator delete(a1);
        }
        break;
      case 4:
        goto LABEL_14;
      case 5:
        winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 32);
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 24));
        goto LABEL_19;
      case 6:
        goto LABEL_16;
      case 7:
        winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 80);
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 72));
        goto LABEL_19;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,MiniSearchExperienceManager *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
