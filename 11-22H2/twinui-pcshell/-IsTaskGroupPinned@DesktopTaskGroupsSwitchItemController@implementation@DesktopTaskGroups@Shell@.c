/*
 * XREFs of ?IsTaskGroupPinned@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@AEAA_NAEBUTaskGroup@TaskGroups@4567@@Z @ 0x18064A8EC
 * Callers:
 *     ?IsVisibleOnDesktops@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAA_NAEBUISwitchItem@Multitasking@ComposableShell@567@AEBW4VirtualDesktopsScope@TaskGroups@4567@@Z @ 0x18064ABF0 (-IsVisibleOnDesktops@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shel.c)
 *     ?PinUnpinToAllDesktops@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAAXAEBUISwitchItem@Multitasking@ComposableShell@567@@Z @ 0x18064B080 (-PinUnpinToAllDesktops@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Sh.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     CoTaskMemFree_0 @ 0x1801C7A7D (CoTaskMemFree_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Windows@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18064A16C (-Windows@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Int.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::IsTaskGroupPinned(
        winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController *this,
        const struct winrt::Windows::Internal::Shell::TaskGroups::TaskGroup *a2)
{
  char *v3; // rdi
  char *v4; // rbp
  __int64 *v5; // rcx
  __int64 v6; // rax
  LPVOID pv; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+28h] [rbp-10h]
  int v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  if ( *((_QWORD *)this + 5) )
  {
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Windows(
      (__int64 *)a2,
      (__int64)&pv);
    v3 = (char *)pv;
    v4 = (char *)pv + 4 * v9;
    while ( 1 )
    {
      if ( v3 == v4 )
      {
        if ( pv )
          CoTaskMemFree_0(pv);
        return 1;
      }
      v11 = 0LL;
      v5 = (__int64 *)*((_QWORD *)this + 3);
      v6 = *v5;
      v11 = 0LL;
      if ( (*(int (__fastcall **)(__int64 *, _QWORD, __int64 *))(v6 + 48))(v5, *(unsigned int *)v3, &v11) < 0 )
        break;
      (*(void (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 5) + 48LL))(
        *((_QWORD *)this + 5),
        v11,
        &v10);
      if ( !v10 )
        break;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
      v3 += 4;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
    if ( pv )
      CoTaskMemFree_0(pv);
  }
  return 0;
}
