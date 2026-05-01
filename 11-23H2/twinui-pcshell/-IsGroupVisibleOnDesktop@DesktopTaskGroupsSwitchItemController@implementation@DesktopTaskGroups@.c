/*
 * XREFs of ?IsGroupVisibleOnDesktop@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@AEAA_NAEBUTaskGroup@TaskGroups@4567@PEAUIVirtualDesktop@@@Z @ 0x18064A7A8
 * Callers:
 *     ?IsVisibleOnDesktop@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAA_NAEBUISwitchItem@Multitasking@ComposableShell@567@AEBUIVirtualDesktop@9ComposableShell@567@@Z @ 0x18064AA70 (-IsVisibleOnDesktop@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell.c)
 *     ?IsVisibleOnDesktops@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAA_NAEBUISwitchItem@Multitasking@ComposableShell@567@AEBW4VirtualDesktopsScope@TaskGroups@4567@@Z @ 0x18064ABF0 (-IsVisibleOnDesktops@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shel.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CoTaskMemFree_0 @ 0x1801C7A7D (CoTaskMemFree_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?Windows@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18064A16C (-Windows@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Int.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::IsGroupVisibleOnDesktop(
        winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController *this,
        const struct winrt::Windows::Internal::Shell::TaskGroups::TaskGroup *a2,
        struct IVirtualDesktop *a3)
{
  char *v5; // rdi
  char *v6; // rsi
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  signed int v10; // eax
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  LPVOID pv; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v14; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v16; // [rsp+68h] [rbp+20h] BYREF

  winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Windows(
    (__int64 *)a2,
    (__int64)&pv);
  v5 = (char *)pv;
  v6 = (char *)pv + 4 * v14;
  while ( 1 )
  {
    if ( v5 == v6 )
    {
      if ( pv )
        CoTaskMemFree_0(pv);
      return 1;
    }
    v12 = 0LL;
    v7 = (__int64 *)*((_QWORD *)this + 3);
    v8 = *v7;
    v12 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v8 + 48))(v7, *(unsigned int *)v5, &v12);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x53,
        (int)"pcshell\\twinui\\taskgroups\\lib\\desktoptaskgroupsswitchitemcontroller.cpp",
        (const char *)(unsigned int)v9);
      goto LABEL_6;
    }
    v10 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, __int64, int *))(*(_QWORD *)a3 + 24LL))(a3, v12, &v16);
    if ( v10 < 0 )
      winrt::throw_hresult(v10);
    if ( !v16 )
      break;
LABEL_6:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
    v5 += 4;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
  if ( pv )
    CoTaskMemFree_0(pv);
  return 0;
}
