/*
 * XREFs of ?CanSwitchItemMoveDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAE@Z @ 0x180541830
 * Callers:
 *     <none>
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

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopController::CanSwitchItemMoveDesktops(
        RTL_SRWLOCK *this,
        struct IUnknown *a2,
        bool *a3)
{
  RTL_SRWLOCK *v6; // rsi
  void *v7; // r8
  unsigned int v8; // edi
  struct IApplicationView *v9; // rbx
  __int64 v10; // rcx
  BOOL v11; // ecx
  VirtualDesktopController *v12; // rcx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  BOOL v16; // [rsp+60h] [rbp+30h] BYREF
  struct IApplicationView *v17; // [rsp+70h] [rbp+40h] BYREF
  struct IApplicationView *v18; // [rsp+78h] [rbp+48h] BYREF

  *a3 = 0;
  v6 = this + 17;
  AcquireSRWLockShared(this + 17);
  if ( !this[11].Ptr )
  {
    v8 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x137,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)0x8007139FLL);
    goto LABEL_11;
  }
  v18 = 0LL;
  winrt::copy_from_abi((winrt *)&v18, a2, v7);
  v9 = v18;
  v17 = v18;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v17);
  if ( VirtualDesktopController::IsTaskGroupSwitchItem(v10, (__int64 *)&v17) )
  {
    VirtualDesktopController::InitializeTaskGroupController((VirtualDesktopController *)this);
    LODWORD(v17) = 1;
    v11 = (unsigned __int8)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemController<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupSwitchItemController>::IsVisibleOnDesktops(
                             &this[16],
                             &v18,
                             &v17) == 0;
    v16 = v11;
  }
  else
  {
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v17);
    VirtualDesktopController::GetApplicationViewFromSwitchItem(
      v12,
      (struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *)a2,
      &v17);
    v13 = (*(__int64 (__fastcall **)(PVOID, struct IApplicationView *, BOOL *))(*(_QWORD *)this[11].Ptr + 40LL))(
            this[11].Ptr,
            v17,
            &v16);
    v8 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x145,
        (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
        (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v17);
      goto LABEL_9;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v17);
    v11 = v16;
  }
  *a3 = v11;
  v8 = 0;
LABEL_9:
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
LABEL_11:
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v8;
}
