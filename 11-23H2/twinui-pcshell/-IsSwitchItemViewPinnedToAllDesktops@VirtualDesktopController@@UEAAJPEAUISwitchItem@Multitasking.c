/*
 * XREFs of ?IsSwitchItemViewPinnedToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAE@Z @ 0x180542670
 * Callers:
 *     ?PinUnPinSwitchItemViewToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180542FB0 (-PinUnPinSwitchItemViewToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking.c)
 * Callees:
 *     ?GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x180037648 (-GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@Co.c)
 *     ?IsTaskGroupSwitchItem@VirtualDesktopController@@AEAA_NUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x180037704 (-IsTaskGroupSwitchItem@VirtualDesktopController@@AEAA_NUISwitchItem@Multitasking@ComposableShell.c)
 *     ?copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z @ 0x1800AD764 (-copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InitializeTaskGroupController@VirtualDesktopController@@AEAAXXZ @ 0x180541EA8 (-InitializeTaskGroupController@VirtualDesktopController@@AEAAXXZ.c)
 *     ?IsVisibleOnDesktops@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemController@UTaskGroupSwitchItemController@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@AEBW4VirtualDesktopsScope@TaskGroups@Shell@783@@Z @ 0x1805427B8 (-IsVisibleOnDesktops@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemController@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopController::IsSwitchItemViewPinnedToAllDesktops(
        VirtualDesktopController *this,
        struct IUnknown *a2,
        bool *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  VirtualDesktopController *v8; // rcx
  int ApplicationViewFromSwitchItem; // eax
  unsigned int v10; // edi
  __int64 v11; // rdx
  struct IApplicationView *v13; // [rsp+20h] [rbp-10h] BYREF
  __int64 v14; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v16; // [rsp+68h] [rbp+38h] BYREF

  v14 = 0LL;
  winrt::copy_from_abi((winrt *)&v14, a2, a3);
  v6 = v14;
  v16 = v14;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v16);
  if ( !VirtualDesktopController::IsTaskGroupSwitchItem(v7, &v16) )
  {
    v13 = 0LL;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v13);
    ApplicationViewFromSwitchItem = VirtualDesktopController::GetApplicationViewFromSwitchItem(
                                      v8,
                                      (struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *)a2,
                                      &v13);
    v10 = ApplicationViewFromSwitchItem;
    if ( ApplicationViewFromSwitchItem >= 0 )
    {
      LODWORD(v16) = 0;
      ApplicationViewFromSwitchItem = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64 *))(**((_QWORD **)this + 14) + 48LL))(
                                        *((_QWORD *)this + 14),
                                        v13,
                                        &v16);
      v10 = ApplicationViewFromSwitchItem;
      if ( ApplicationViewFromSwitchItem >= 0 )
      {
        *a3 = (_DWORD)v16 != 0;
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v13);
        goto LABEL_9;
      }
      v11 = 381LL;
    }
    else
    {
      v11 = 378LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)ApplicationViewFromSwitchItem);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v13);
    goto LABEL_10;
  }
  VirtualDesktopController::InitializeTaskGroupController(this);
  LODWORD(v16) = 1;
  *a3 = (unsigned __int8)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemController<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupSwitchItemController>::IsVisibleOnDesktops(
                           (char *)this + 128,
                           &v14,
                           &v16) != 0;
LABEL_9:
  v10 = 0;
LABEL_10:
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
  return v10;
}
