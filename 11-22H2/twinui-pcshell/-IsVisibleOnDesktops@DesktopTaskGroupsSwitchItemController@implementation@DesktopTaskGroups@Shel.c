/*
 * XREFs of ?IsVisibleOnDesktops@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAA_NAEBUISwitchItem@Multitasking@ComposableShell@567@AEBW4VirtualDesktopsScope@TaskGroups@4567@@Z @ 0x18064ABF0
 * Callers:
 *     ?IsVisibleOnDesktops@?$produce@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIPlatformTaskGroupsSwitchItemController@TaskGroups@4567@@impl@winrt@@UEAAHPEAXHPEA_N@Z @ 0x18064AB80 (-IsVisibleOnDesktops@-$produce@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTask.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Data@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180027964 (-Data@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem@UISwitchItem@Multitask.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$as@UTaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUTaskGroup@TaskGroups@Shell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18064A718 (--$as@UTaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@Windo.c)
 *     ?IsGroupVisibleOnDesktop@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@AEAA_NAEBUTaskGroup@TaskGroups@4567@PEAUIVirtualDesktop@@@Z @ 0x18064A7A8 (-IsGroupVisibleOnDesktop@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@.c)
 *     ?IsTaskGroupPinned@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@AEAA_NAEBUTaskGroup@TaskGroups@4567@@Z @ 0x18064A8EC (-IsTaskGroupPinned@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::IsVisibleOnDesktops(
        winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController *this,
        const struct winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem *a2,
        const enum winrt::Windows::Internal::Shell::TaskGroups::VirtualDesktopsScope *a3)
{
  const char *v5; // r9
  _QWORD *v7; // rax
  char IsTaskGroupPinned; // bl
  __int64 v9; // rax
  signed int v10; // eax
  struct IVirtualDesktop *v11; // rbx
  _QWORD *v12; // rax
  _QWORD v13[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IVirtualDesktop *v15; // [rsp+50h] [rbp+20h] BYREF
  __int64 v16; // [rsp+68h] [rbp+38h] BYREF

  v5 = (const char *)*((_QWORD *)this + 4);
  if ( !v5 )
    return 1;
  if ( *(_DWORD *)a3 )
  {
    if ( *(_DWORD *)a3 != 1 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x47,
        (int)"pcshell\\twinui\\taskgroups\\lib\\desktoptaskgroupsswitchitemcontroller.cpp",
        v5);
    v7 = winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>::Data(
           (__int64 *)a2,
           &v16);
    winrt::impl::as<winrt::Windows::Internal::Shell::TaskGroups::TaskGroup,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v15,
      (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*v7);
    IsTaskGroupPinned = winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::IsTaskGroupPinned(
                          this,
                          (const struct winrt::Windows::Internal::Shell::TaskGroups::TaskGroup *)&v15);
    if ( v15 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
    if ( v16 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
  }
  else
  {
    v15 = 0LL;
    v9 = *(_QWORD *)v5;
    v15 = 0LL;
    v10 = (*(__int64 (__fastcall **)(const char *, struct IVirtualDesktop **))(v9 + 48))(v5, &v15);
    if ( v10 < 0 )
      winrt::throw_hresult(v10);
    v11 = v15;
    v12 = winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>::Data(
            (__int64 *)a2,
            v13);
    winrt::impl::as<winrt::Windows::Internal::Shell::TaskGroups::TaskGroup,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v16,
      (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*v12);
    IsTaskGroupPinned = winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::IsGroupVisibleOnDesktop(
                          this,
                          (const struct winrt::Windows::Internal::Shell::TaskGroups::TaskGroup *)&v16,
                          v11);
    if ( v16 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
    if ( v13[0] )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v13);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v15);
  }
  return IsTaskGroupPinned;
}
