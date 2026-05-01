/*
 * XREFs of winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Management::Deployment::DeploymentResult_winrt::Windows::Management::Deployment::DeploymentProgress___::cancel_asynchronously$_ResumeCoro$1 @ 0x1802493E0
 * Callers:
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Management::Deployment::PackageVolume___::cancel_asynchronously$_InitCoro$2 @ 0x18024914C (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Managemen.c)
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Management::Deployment::DeploymentResult_winrt::Windows::Management::Deployment::DeploymentProgress___::cancel_asynchronously$_InitCoro$2 @ 0x180249228 (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperationWithProgress_winrt--Window.c)
 * Callees:
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@XZ @ 0x1801BA18C (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@X.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUDashboardManager@implementation@Shell@Internal@34@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUDashboardManager@implementation@Shell@Internal@34@@experimental@std@@@experimental@std@@@Z @ 0x1801FB824 (--$await_suspend@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUDa.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@U?$com_ptr@UIServiceProvider@@@2@AEBUCRect@Geometry@@I@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x18022B434 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@V-$vector@USnapLaunchTarg.c)
 *     ?Cancel@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180238260 (-Cancel@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@UPackageVolume@Deployment@Man.c)
 */

// Hidden C++ exception states: #try_helpers=1
void __fastcall winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Management::Deployment::DeploymentResult_winrt::Windows::Management::Deployment::DeploymentProgress___::cancel_asynchronously__ResumeCoro_1(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx

  v1 = a1;
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 3:
    case 5:
      goto LABEL_6;
    case 2:
      *(_BYTE *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = a1 + 16;
      if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
        goto LABEL_4;
      *(_WORD *)(v1 + 8) = 4;
      ___await_suspend_Upromise_type___coroutine_traits_UIAsyncAction_Foundation_Windows_winrt__PEAUDashboardManager_implementation_Shell_Internal_34__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_UIAsyncAction_Foundation_Windows_winrt__PEAUDashboardManager_implementation_Shell_Internal_34__experimental_std___experimental_std___Z(
        v2,
        (void *)v1);
      break;
    case 4:
LABEL_4:
      _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_XZ();
      try
      {
        winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>>::Cancel(v1 + 34);
      }
      catch ( winrt::hresult_error )
      {
        v1 = a1;
      }
      std::experimental::coroutine_traits<winrt::fire_and_forget,std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>,winrt::com_ptr<IServiceProvider>,Geometry::CRect const &,unsigned int>::promise_type::final_suspend(
        v1,
        (_BYTE *)(v1 + 32));
LABEL_6:
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(v1 + 34));
      if ( *(_WORD *)(v1 + 10) )
        operator delete((void *)v1);
      break;
    default:
      __debugbreak();
      break;
  }
}
