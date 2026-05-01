/*
 * XREFs of ?PinUnpinToAllDesktops@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAAXAEBUISwitchItem@Multitasking@ComposableShell@567@@Z @ 0x18064B080
 * Callers:
 *     ?PinUnpinToAllDesktops@?$produce@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIPlatformTaskGroupsSwitchItemController@TaskGroups@4567@@impl@winrt@@UEAAHPEAX@Z @ 0x18064B020 (-PinUnpinToAllDesktops@-$produce@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTa.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Data@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180027964 (-Data@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem@UISwitchItem@Multitask.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CoTaskMemFree_0 @ 0x1801C7A7D (CoTaskMemFree_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Windows@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18064A16C (-Windows@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Int.c)
 *     ??$as@UTaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUTaskGroup@TaskGroups@Shell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18064A718 (--$as@UTaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@Windo.c)
 *     ?IsTaskGroupPinned@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@AEAA_NAEBUTaskGroup@TaskGroups@4567@@Z @ 0x18064A8EC (-IsTaskGroupPinned@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::PinUnpinToAllDesktops(
        winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController *this,
        const struct winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem *a2,
        __int64 a3,
        const char *a4)
{
  _QWORD *v5; // rax
  char IsTaskGroupPinned; // r15
  char *v7; // rbx
  char *v8; // r14
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 *v12; // rcx
  __int64 v13; // rax
  LPVOID pv; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v15; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v17; // [rsp+50h] [rbp+20h] BYREF
  __int64 v18; // [rsp+60h] [rbp+30h] BYREF

  if ( !*((_QWORD *)this + 5) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x67,
      (int)"pcshell\\twinui\\taskgroups\\lib\\desktoptaskgroupsswitchitemcontroller.cpp",
      a4);
  v5 = winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>::Data(
         (__int64 *)a2,
         &v17);
  winrt::impl::as<winrt::Windows::Internal::Shell::TaskGroups::TaskGroup,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v18,
    (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*v5);
  if ( v17 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
  IsTaskGroupPinned = winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::IsTaskGroupPinned(
                        this,
                        (const struct winrt::Windows::Internal::Shell::TaskGroups::TaskGroup *)&v18);
  winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Windows(
    &v18,
    (__int64)&pv);
  v7 = (char *)pv;
  v8 = (char *)pv + 4 * v15;
  while ( v7 != v8 )
  {
    v17 = 0LL;
    v9 = (__int64 *)*((_QWORD *)this + 3);
    v10 = *v9;
    v17 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v10 + 48))(v9, *(unsigned int *)v7, &v17);
    if ( v11 >= 0 )
    {
      v12 = (__int64 *)*((_QWORD *)this + 5);
      v13 = *v12;
      if ( IsTaskGroupPinned )
        (*(void (__fastcall **)(__int64 *, __int64))(v13 + 64))(v12, v17);
      else
        (*(void (__fastcall **)(__int64 *, __int64))(v13 + 56))(v12, v17);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x70,
        (int)"pcshell\\twinui\\taskgroups\\lib\\desktoptaskgroupsswitchitemcontroller.cpp",
        (const char *)(unsigned int)v11);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
    v7 += 4;
  }
  if ( pv )
    CoTaskMemFree_0(pv);
  if ( v18 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
}
