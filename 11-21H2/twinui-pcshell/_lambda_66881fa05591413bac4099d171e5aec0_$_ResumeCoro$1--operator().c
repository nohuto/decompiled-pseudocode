/*
 * XREFs of _lambda_66881fa05591413bac4099d171e5aec0_$_ResumeCoro$1::operator() @ 0x1801D7D60
 * Callers:
 *     _lambda_66881fa05591413bac4099d171e5aec0_$_InitCoro$2::operator() @ 0x1801D7C90 (_lambda_66881fa05591413bac4099d171e5aec0_$_InitCoro$2--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@experimental@std@@@Z @ 0x1801D7260 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewM.c)
 *     std::experimental::coroutine_traits_winrt::fire_and_forget__lambda_ead74eb18ddaf5d60afd1f95853bb976__const___winrt::WindowsUdk::UI::MenuItem_const_&_winrt::WindowsUdk::UI::MenuItemInvokedArgs_const_&_::promise_type::final_suspend @ 0x1801E8050 (std--experimental--coroutine_traits_winrt--fire_and_forget__lambda_ead74eb18ddaf5d60afd1f95853bb.c)
 *     ?await_ready@?$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180350F8C (-await_ready@-$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ?await_resume@?$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAAXXZ @ 0x180350FBC (-await_resume@-$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAAXXZ.c)
 *     ?_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@Z @ 0x1805DBD08 (-_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCo.c)
 */

// Hidden C++ exception states: #try_helpers=1
void __fastcall lambda_66881fa05591413bac4099d171e5aec0___ResumeCoro_1::operator()(char *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  char v4; // al
  CLauncherTipContextMenu ***v5; // rcx
  CLauncherTipContextMenu **v6; // rax
  CLauncherTipContextMenu *v7; // rdi
  CLauncherTipContextMenu *v8; // rax
  __int16 v9; // ax

  switch ( *((_WORD *)a1 + 4) )
  {
    case 0xFFFF:
    case 3:
    case 5:
      goto LABEL_5;
    case 2:
      *((_QWORD *)a1 + 16) = a1 + 1;
      v2 = a1 + 401;
      *((_QWORD *)a1 + 18) = a1 + 401;
      v3 = *(_QWORD *)(a1 + 401);
      *((_QWORD *)a1 + 20) = *v2;
      v3 += 24LL;
      *((_QWORD *)a1 + 22) = v3;
      *((_QWORD *)a1 + 7) = v3;
      *((_QWORD *)a1 + 2) = v3;
      v4 = winrt::impl::notify_awaiter<winrt::apartment_context const &>::await_ready(a1 + 16);
      a1[80] = v4;
      if ( v4 )
        goto LABEL_4;
      *((_WORD *)a1 + 4) = 4;
      winrt::impl::notify_awaiter<winrt::apartment_context &>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CMultitaskingViewManager *,winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs>::promise_type>((struct winrt::impl::resume_apartment_context **)a1 + 2);
      break;
    case 4:
LABEL_4:
      winrt::impl::notify_awaiter<winrt::apartment_context const &>::await_resume(a1 + 16);
      v5 = (CLauncherTipContextMenu ***)(*((_QWORD *)a1 + 16) + 400LL);
      *((_QWORD *)a1 + 24) = v5;
      v6 = *v5;
      *((_QWORD *)a1 + 26) = *v5;
      v7 = *v6;
      *((_QWORD *)a1 + 28) = *v6;
      *((_QWORD *)a1 + 8) = v7;
      *((_QWORD *)a1 + 4) = a1 + 24;
      *((_QWORD *)a1 + 30) = v5;
      *((_QWORD *)a1 + 32) = v6;
      v6 += 2;
      *((_QWORD *)a1 + 34) = v6;
      *((_QWORD *)a1 + 6) = v6;
      v8 = *v6;
      *((_QWORD *)a1 + 36) = v8;
      *((_QWORD *)a1 + 3) = v8;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)a1 + 3);
      CLauncherTipContextMenu::_ExecuteCommand(v7);
      std::experimental::coroutine_traits_winrt::fire_and_forget__lambda_ead74eb18ddaf5d60afd1f95853bb976__const___winrt::WindowsUdk::UI::MenuItem_const___winrt::WindowsUdk::UI::MenuItemInvokedArgs_const___::promise_type::final_suspend(
        a1,
        a1 + 40);
LABEL_5:
      *((_QWORD *)a1 + 38) = a1 + 10;
      v9 = *((_WORD *)a1 + 5);
      *((_WORD *)a1 + 160) = v9;
      if ( v9 )
      {
        *((_QWORD *)a1 + 42) = 425LL;
        *((_QWORD *)a1 + 14) = 425LL;
        *((_QWORD *)a1 + 12) = a1;
        *((_QWORD *)a1 + 48) = a1 + 10;
        operator delete(a1);
      }
      break;
    default:
      __debugbreak();
      break;
  }
}
