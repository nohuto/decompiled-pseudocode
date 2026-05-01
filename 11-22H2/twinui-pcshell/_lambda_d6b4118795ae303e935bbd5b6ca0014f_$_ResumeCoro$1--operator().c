/*
 * XREFs of _lambda_d6b4118795ae303e935bbd5b6ca0014f_$_ResumeCoro$1::operator() @ 0x180257050
 * Callers:
 *     _lambda_d6b4118795ae303e935bbd5b6ca0014f_$_InitCoro$2::operator() @ 0x180256F80 (_lambda_d6b4118795ae303e935bbd5b6ca0014f_$_InitCoro$2--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCJumpViewExperienceManager@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCJumpViewExperienceManager@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@experimental@std@@@Z @ 0x180072C04 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCJumpViewExperienc.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x180234F54 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?await_ready@?$notify_awaiter@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180248A54 (-await_ready@-$notify_awaiter@U-$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Manage.c)
 *     ?await_resume@?$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA@XZ @ 0x18043D24C (-await_resume@-$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA@XZ.c)
 *     std::experimental::coroutine_traits_winrt::fire_and_forget__lambda_d6b4118795ae303e935bbd5b6ca0014f__const___winrt::WindowsUdk::UI::MenuItem_const_&_winrt::WindowsUdk::UI::MenuItemInvokedArgs_const_&_::promise_type::final_suspend @ 0x180554204 (std--experimental--coroutine_traits_winrt--fire_and_forget__lambda_d6b4118795ae303e935bbd5b6ca00.c)
 *     std::experimental::coroutine_traits_winrt::fire_and_forget__lambda_d6b4118795ae303e935bbd5b6ca0014f__const___winrt::WindowsUdk::UI::MenuItem_const_&_winrt::WindowsUdk::UI::MenuItemInvokedArgs_const_&_::promise_type::await_transform_winrt::apartment_context_const_&_ @ 0x18065E7D4 (std--experimental--coroutine_traits_winrt--fire_and_forget__lambda_d6b4118795ae303e_ea_18065E7D4.c)
 *     ?_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@Z @ 0x1806DF458 (-_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCo.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_d6b4118795ae303e935bbd5b6ca0014f___ResumeCoro_1::operator()(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  CLauncherTipContextMenu *v3; // rdi

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_7;
      case 2:
        v1 = std::experimental::coroutine_traits_winrt::fire_and_forget__lambda_d6b4118795ae303e935bbd5b6ca0014f__const___winrt::WindowsUdk::UI::MenuItem_const___winrt::WindowsUdk::UI::MenuItemInvokedArgs_const___::promise_type::await_transform_winrt::apartment_context_const___(
               a1,
               a1 + 24,
               *(_QWORD *)(a1 + 58) + 24LL);
        *(_QWORD *)(a1 + 16) = v1;
        if ( winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>>::await_ready() )
          goto LABEL_6;
        *(_WORD *)(a1 + 8) = 4;
        winrt::impl::notify_awaiter<winrt::apartment_context &>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CJumpViewExperienceManager *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type>(
          v1,
          a1);
        return;
      case 4:
LABEL_6:
        winrt::impl::notify_awaiter<winrt::apartment_context const &>::await_resume(*(_QWORD *)(a1 + 16));
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(a1 + 24));
        v2 = *(_QWORD *)(a1 + 58);
        v3 = *(CLauncherTipContextMenu **)v2;
        *(_QWORD *)(a1 + 48) = *(_QWORD *)(v2 + 16);
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 48));
        CLauncherTipContextMenu::_ExecuteCommand(v3);
        std::experimental::coroutine_traits_winrt::fire_and_forget__lambda_d6b4118795ae303e935bbd5b6ca0014f__const___winrt::WindowsUdk::UI::MenuItem_const___winrt::WindowsUdk::UI::MenuItemInvokedArgs_const___::promise_type::final_suspend(
          a1,
          a1 + 56);
        goto LABEL_7;
      case 5:
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(a1 + 24));
LABEL_7:
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits_winrt::fire_and_forget__lambda_c27fb3894833df319de68fad3b02a886__const___::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
