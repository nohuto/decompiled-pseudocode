/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$1 @ 0x1801BC650
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_InitCoro$2 @ 0x1801BC598 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Init.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?await_resume@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA?AUIRandomAccessStreamReference@Streams@Storage@Windows@3@XZ @ 0x18001AB44 (-await_resume@-$notify_awaiter@U-$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@.c)
 *     ?await_resume@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA?AUIRandomAccessStreamWithContentType@Streams@Storage@Windows@3@XZ @ 0x18001AC14 (-await_resume@-$notify_awaiter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@St.c)
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??1IPrelaunchActivatedEventArgs@Activation@ApplicationModel@Windows@winrt@@QEAA@XZ @ 0x180020144 (--1IPrelaunchActivatedEventArgs@Activation@ApplicationModel@Windows@winrt@@QEAA@XZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020174 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@34@@experimental@std@@@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@34@@experimental@std@@@experimental@std@@@Z @ 0x180022E4C (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@Windows@winrt.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUMeetAndChatFallbackProp@implementation@Shell@Internal@34@@experimental@std@@@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUMeetAndChatFallbackProp@implementation@Shell@Internal@34@@experimental@std@@@experimental@std@@@Z @ 0x180022E58 (--$await_suspend@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUMe.c)
 *     ?LoadImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@W4LOAD_IMAGE_WITH_WIC_OPTION@@PEAPEAUIWICBitmapSource@@PEAPEAUIWICBitmapFrameDecode@@PEAU_GUID@@@Z @ 0x180030DEC (-LoadImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@W4LOAD_IMAGE_WITH_WIC_OPTION@@PEAPEAU.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003DA78 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$await_transform@U?$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windows@winrt@@@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVMeetAndChatIris@implementation@Shell@Internal@Windows@2@W4MeetAndChatUsageType@5672@@experimental@std@@QEAA?AU?$notify_awaiter@U?$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@$$QEAU?$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windows@6@@Z @ 0x18003F8F8 (--$await_transform@U-$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windo.c)
 *     ?OpenReadAsync@?$consume_Windows_Storage_Streams_IRandomAccessStreamReference@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@3@XZ @ 0x18003FD64 (-OpenReadAsync@-$consume_Windows_Storage_Streams_IRandomAccessStreamReference@UIRandomAccessStre.c)
 *     ??$capture@UIStream@@P6AJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@ZPEAU2@@winrt@@YA?AU?$com_ptr@UIStream@@@0@P6AJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z$$QEAPEAU2@@Z @ 0x180040E58 (--$capture@UIStream@@P6AJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@ZPEAU2@@winrt@@YA-AU-$com_ptr@UIStream.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x180041CEC (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@imp.c)
 *     ??$out_param@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AU?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@0@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x1800432B4 (--$out_param@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1-De.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x1800435C8 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@impl.c)
 *     ?get_strong@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x180043A1C (-get_strong@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxy.c)
 *     ?await_ready@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180044190 (-await_ready@-$notify_awaiter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Sto.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F6E50 (-release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F9DD8 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x18017928C (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXXZ @ 0x18017FF44 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXX.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180190C7C (-ContinueOnCurrentThread@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801D3354 (-IgnoreCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgRe.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18022CC64 (--1-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integr.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180237994 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 *     ?release_ref@?$com_ptr@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1802387B4 (-release_ref@-$com_ptr@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AE.c)
 *     ?ConvertWICBitmapToHBITMAP@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@Z @ 0x180239068 (-ConvertWICBitmapToHBITMAP@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@.c)
 *     ?GetThumbnailAsync@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@3@AEBUBitmapSize@Imaging@Graphics@63@_N@Z @ 0x180239156 (-GetThumbnailAsync@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@I.c)
 *     ?GetThumbnailSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEBA?AUBitmapSize@Imaging@Graphics@56@_N@Z @ 0x1802391C0 (-GetThumbnailSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEBA-AUBitmapSize@.c)
 *     ??1?$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x18049A2BC (--1-$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ.c)
 *     ??$Start@HH@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@SA?AV01@$$QEAH0@Z @ 0x18057AB1C (--$Start@HH@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@SA-AV01@$$QEAH0@Z.c)
 *     ??0WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAA@XZ @ 0x18057ACA0 (--0WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAA@XZ.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18057AD98 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$.c)
 *     ??1WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAA@XZ @ 0x18057ADE8 (--1WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAA@XZ.c)
 *     ??4WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18057AE14 (--4WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     wil::details::lambda_call__lambda_74486eaaeca8e264bd14b205336c09f8___::reset @ 0x18057D928 (wil--details--lambda_call__lambda_74486eaaeca8e264bd14b205336c09f8___--reset.c)
 */

// Hidden C++ exception states: #wind=21 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync__ResumeCoro_1(
        char *a1)
{
  __int64 *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // al
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 ThumbnailAsync; // rax
  __int64 v18; // rcx
  char v19; // al
  char v20; // bl
  _QWORD *Async; // rax
  __int64 v22; // rcx
  char v23; // al
  struct IWICImagingFactory **v24; // rbx
  struct IWICImagingFactory *v25; // rcx
  int ImageWithWIC; // eax
  HBITMAP *v27; // rax
  struct IWICImagingFactory *v28; // rcx
  int v29; // eax
  HWND *v30; // rax
  HWND v31; // rcx
  __int16 v32; // ax
  struct IWICBitmapDecoder *v33; // [rsp+20h] [rbp-118h]
  __int16 v34; // [rsp+30h] [rbp-108h]

  try
  {
    v34 = *((_WORD *)a1 + 4);
    if ( (unsigned __int16)(v34 + 1) > 0xAu )
    {
LABEL_25:
      __debugbreak();
    }
    else
    {
      switch ( v34 )
      {
        case -1:
        case 3:
          goto LABEL_23;
        case 0:
        case 1:
          goto LABEL_25;
        case 2:
          *((_QWORD *)a1 + 190) = a1 + 1;
          v3 = (__int64 *)(a1 + 1857);
          *((_QWORD *)a1 + 192) = v3;
          v4 = *v3;
          *((_QWORD *)a1 + 194) = v4;
          *((_QWORD *)a1 + 132) = v4;
          winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
            v4,
            (__int64 *)a1 + 2);
          WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::WindowTabHostLivePreviewThumbnailRequested((WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested *)(a1 + 32));
          *((_DWORD *)a1 + 88) = 0;
          *((_DWORD *)a1 + 89) = 0;
          v5 = WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::Start<int,int>((WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested *)(a1 + 368));
          *((_QWORD *)a1 + 182) = v5;
          WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::operator=(a1 + 32, v5);
          WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::~WindowTabHostLivePreviewThumbnailRequested((WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested *)(a1 + 368));
          wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(
            a1 + 32,
            v6,
            v7,
            v8);
          a1[688] = 0;
          *((_QWORD *)a1 + 87) = a1 + 688;
          v9 = winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_ready();
          a1[1088] = v9;
          if ( v9 )
            goto LABEL_7;
          *((_WORD *)a1 + 4) = 4;
          ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAUTabProxyWindow_implementation_Shell_Internal_Windows_2__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAAXU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAUTabProxyWindow_implementation_Shell_Internal_Windows_2__experimental_std___experimental_std___Z(
            v10,
            a1);
          return;
        case 4:
LABEL_7:
          _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAAXXZ();
          wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
            (struct wil::details::IFailureCallback *)(a1 + 32),
            (wil::ActivityThreadWatcher *)(a1 + 704));
          v11 = *((_QWORD *)a1 + 2) + 176LL;
          *((_QWORD *)a1 + 196) = v11;
          *((_QWORD *)a1 + 140) = v11;
          wil::srwlock::lock_exclusive(v11, (__int64)(a1 + 784));
          *((_DWORD *)a1 + 198) = 0;
          v12 = (__int64 *)(*((_QWORD *)a1 + 190) + 1856LL);
          *((_QWORD *)a1 + 198) = v12;
          v13 = *v12;
          *((_QWORD *)a1 + 200) = *v12;
          *((_QWORD *)a1 + 100) = v13;
          *((_QWORD *)a1 + 101) = a1 + 792;
          *((_OWORD *)a1 + 51) = *((_OWORD *)a1 + 50);
          a1[832] = 1;
          *((_QWORD *)a1 + 202) = v12;
          *((_QWORD *)a1 + 204) = v13;
          *((_QWORD *)a1 + 142) = v13;
          LOBYTE(v14) = 1;
          winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetThumbnailSize(v13, a1 + 840, v14);
          v15 = *((_QWORD *)a1 + 2) + 48LL;
          *((_QWORD *)a1 + 206) = v15;
          *((_QWORD *)a1 + 144) = v15;
          LOBYTE(v16) = 1;
          ThumbnailAsync = winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::GetThumbnailAsync(
                             v15,
                             a1 + 856,
                             a1 + 840,
                             v16);
          *((_QWORD *)a1 + 138) = ThumbnailAsync;
          *((_QWORD *)a1 + 106) = std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *,enum winrt::Windows::Internal::Shell::MeetAndChatUsageType>::promise_type::await_transform<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Web::Http::HttpStatusCode>>(
                                    v18,
                                    (__int64)(a1 + 864),
                                    ThumbnailAsync);
          v19 = winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_ready();
          a1[1040] = v19;
          if ( v19 )
            goto LABEL_10;
          *((_WORD *)a1 + 4) = 6;
          winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::promise_type>();
          return;
        case 5:
          WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::~WindowTabHostLivePreviewThumbnailRequested((WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested *)(a1 + 32));
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::DashboardManager>::release_ref(a1 + 16);
          goto LABEL_23;
        case 6:
LABEL_10:
          winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>>::await_resume(
            *((_QWORD *)a1 + 106),
            (__int64)(a1 + 888));
          winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 864);
          winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 856));
          wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
            (struct wil::details::IFailureCallback *)(a1 + 32),
            (wil::ActivityThreadWatcher *)(a1 + 896));
          *((_QWORD *)a1 + 123) = 0LL;
          v20 = winrt::Windows::Foundation::operator==(
                  (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))a1 + 111,
                  (_QWORD *)a1 + 123);
          a1[976] = v20;
          winrt::Windows::Foundation::IUnknown::release_ref((winrt::Windows::Foundation::IUnknown *)(a1 + 984));
          if ( v20 )
          {
            wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 32);
            wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a1 + 896));
            winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs::~IPrelaunchActivatedEventArgs((winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs *)(a1 + 888));
            wil::details::lambda_call__lambda_74486eaaeca8e264bd14b205336c09f8___::reset(a1 + 816);
            wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)a1 + 98);
            wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a1 + 704));
            WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::~WindowTabHostLivePreviewThumbnailRequested((WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested *)(a1 + 32));
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::DashboardManager>::release_ref(a1 + 16);
          }
          else
          {
            Async = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStreamReference<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>::OpenReadAsync(
                      (__int64 *)a1 + 111,
                      (_QWORD *)a1 + 125);
            *((_QWORD *)a1 + 146) = Async;
            *((_QWORD *)a1 + 124) = std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *,enum winrt::Windows::Internal::Shell::MeetAndChatUsageType>::promise_type::await_transform<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Web::Http::HttpStatusCode>>(
                                      v22,
                                      (__int64)(a1 + 1008),
                                      (__int64)Async);
            v23 = winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_ready();
            a1[1072] = v23;
            if ( !v23 )
            {
              *((_WORD *)a1 + 4) = 8;
              winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp *>::promise_type>();
              return;
            }
LABEL_15:
            winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_resume(
              *((_QWORD *)a1 + 124),
              (__int64)(a1 + 1184));
            winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 1008);
            winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 1000));
            wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
              (struct wil::details::IFailureCallback *)(a1 + 32),
              (wil::ActivityThreadWatcher *)(a1 + 1200));
            *((_QWORD *)a1 + 160) = *((_QWORD *)a1 + 148);
            winrt::capture<IStream,long (*)(IUnknown *,_GUID const &,void * *),IUnknown *>(
              (_QWORD *)a1 + 161,
              CreateStreamOverRandomAccessStream,
              (_QWORD *)a1 + 160);
            *((_QWORD *)a1 + 162) = 0LL;
            *((_QWORD *)a1 + 163) = 0LL;
            wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)a1 + 163);
            v24 = (struct IWICImagingFactory **)(*((_QWORD *)a1 + 2) + 104LL);
            *((_QWORD *)a1 + 208) = v24;
            v25 = *v24;
            *((_QWORD *)a1 + 210) = *v24;
            *((_QWORD *)a1 + 170) = v25;
            ImageWithWIC = LoadImageWithWIC(v25, *((_QWORD *)a1 + 161), 0, (struct IWICBitmapSource **)a1 + 163, v33);
            *((_DWORD *)a1 + 372) = ImageWithWIC;
            if ( ImageWithWIC >= 0 )
            {
              v27 = (HBITMAP *)wil::out_param<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>>(
                                 (__int64)(a1 + 1320),
                                 (__int64)(a1 + 1296));
              *((_QWORD *)a1 + 184) = v27++;
              *((_QWORD *)a1 + 212) = v27;
              *((_QWORD *)a1 + 174) = v27;
              v28 = *v24;
              *((_QWORD *)a1 + 214) = *v24;
              *((_QWORD *)a1 + 172) = v28;
              v29 = ConvertWICBitmapToHBITMAP(v28, *((struct IWICBitmapSource **)a1 + 163), v27);
              *((_DWORD *)a1 + 376) = v29;
              a1[1312] = v29 >= 0;
              wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>>(a1 + 1320);
              if ( a1[1312] )
              {
                v30 = (HWND *)(*((_QWORD *)a1 + 2) + 32LL);
                *((_QWORD *)a1 + 216) = v30;
                v31 = *v30;
                *((_QWORD *)a1 + 218) = *v30;
                *((_QWORD *)a1 + 176) = v31;
                if ( DwmSetIconicLivePreviewBitmap(v31, *((HBITMAP *)a1 + 162), 0LL, 0) >= 0 )
                  a1[832] = 0;
              }
            }
            wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)a1 + 163);
            wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>(a1 + 1296);
            if ( *((_QWORD *)a1 + 161) )
              winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 161);
            wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a1 + 1200));
            winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 1184));
            wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a1 + 896));
            winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs::~IPrelaunchActivatedEventArgs((winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs *)(a1 + 888));
            wil::details::lambda_call__lambda_74486eaaeca8e264bd14b205336c09f8___::reset(a1 + 816);
            wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 32);
            wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)a1 + 98);
            wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a1 + 704));
            WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::~WindowTabHostLivePreviewThumbnailRequested((WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested *)(a1 + 32));
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::DashboardManager>::release_ref(a1 + 16);
          }
          std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::DashboardManager *>::promise_type::final_suspend(
            (__int64)a1,
            a1 + 1344);
LABEL_23:
          *((_QWORD *)a1 + 220) = a1 + 10;
          v32 = *((_WORD *)a1 + 5);
          *((_WORD *)a1 + 888) = v32;
          if ( v32 )
          {
            *((_QWORD *)a1 + 224) = 1865LL;
            *((_QWORD *)a1 + 180) = 1865LL;
            *((_QWORD *)a1 + 178) = a1;
            *((_QWORD *)a1 + 230) = a1 + 10;
            operator delete(a1);
          }
          break;
        case 7:
          winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 864);
          winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 856));
          wil::details::lambda_call__lambda_74486eaaeca8e264bd14b205336c09f8___::reset(a1 + 816);
          wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)a1 + 98);
          wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a1 + 704));
          WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::~WindowTabHostLivePreviewThumbnailRequested((WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested *)(a1 + 32));
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::DashboardManager>::release_ref(a1 + 16);
          goto LABEL_23;
        case 8:
          goto LABEL_15;
        case 9:
          winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 1008);
          winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 1000));
          wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a1 + 896));
          winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs::~IPrelaunchActivatedEventArgs((winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs *)(a1 + 888));
          wil::details::lambda_call__lambda_74486eaaeca8e264bd14b205336c09f8___::reset(a1 + 816);
          wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)a1 + 98);
          wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a1 + 704));
          WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::~WindowTabHostLivePreviewThumbnailRequested((WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested *)(a1 + 32));
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::DashboardManager>::release_ref(a1 + 16);
          goto LABEL_23;
      }
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,MiniSearchExperienceManager *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type::unhandled_exception();
  }
}
