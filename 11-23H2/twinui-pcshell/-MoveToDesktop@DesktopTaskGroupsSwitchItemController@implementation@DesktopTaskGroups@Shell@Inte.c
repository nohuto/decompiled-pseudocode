/*
 * XREFs of ?MoveToDesktop@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAAXAEBUISwitchItem@Multitasking@ComposableShell@567@AEBUIVirtualDesktop@9ComposableShell@567@@Z @ 0x18064ADDC
 * Callers:
 *     ?MoveToDesktop@?$produce@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIPlatformTaskGroupsSwitchItemController@TaskGroups@4567@@impl@winrt@@UEAAHPEAX0@Z @ 0x18064AD70 (-MoveToDesktop@-$produce@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Data@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180027964 (-Data@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem@UISwitchItem@Multitask.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CoTaskMemFree_0 @ 0x1801C7A7D (CoTaskMemFree_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?Windows@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18064A16C (-Windows@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Int.c)
 *     ??$as@UIVirtualDesktopInternal@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIVirtualDesktopInternal@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18064A6B0 (--$as@UIVirtualDesktopInternal@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0.c)
 *     ??$as@UTaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUTaskGroup@TaskGroups@Shell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18064A718 (--$as@UTaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@Windo.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::MoveToDesktop(
        winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController *this,
        const struct winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem *a2,
        const struct winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *a3,
        const char *a4)
{
  _QWORD *v6; // rax
  __int64 v7; // rbx
  signed int v8; // eax
  char *v9; // r15
  char *v10; // rsi
  __int64 v11; // rdi
  __int64 *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // r14
  void (__fastcall *v16)(__int64, __int64, _QWORD); // rsi
  _QWORD *v17; // rax
  __int64 v18; // [rsp+20h] [rbp-30h] BYREF
  __int64 v19; // [rsp+28h] [rbp-28h] BYREF
  __int64 v20; // [rsp+30h] [rbp-20h] BYREF
  char *v21; // [rsp+38h] [rbp-18h]
  LPVOID pv; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v25; // [rsp+80h] [rbp+30h] BYREF
  __int64 v26; // [rsp+98h] [rbp+48h] BYREF

  if ( !*((_QWORD *)this + 4) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xA1,
      (int)"pcshell\\twinui\\taskgroups\\lib\\desktoptaskgroupsswitchitemcontroller.cpp",
      a4);
  winrt::impl::as<IVirtualDesktopInternal,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v19,
    *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a3);
  v6 = winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>::Data(
         (__int64 *)a2,
         &v25);
  winrt::impl::as<winrt::Windows::Internal::Shell::TaskGroups::TaskGroup,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v18,
    (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*v6);
  if ( v25 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v25);
  v7 = v18;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 48LL))(*((_QWORD *)this + 6), v18);
  if ( v8 < 0 )
    winrt::throw_hresult(v8);
  winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Windows(
    &v18,
    (__int64)&pv);
  v9 = (char *)pv;
  v10 = (char *)pv + 4 * v23;
  v21 = v10;
  v11 = v19;
  while ( v9 != v10 )
  {
    v26 = 0LL;
    v12 = (__int64 *)*((_QWORD *)this + 3);
    v13 = *v12;
    v26 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v13 + 48))(v12, *(unsigned int *)v9, &v26);
    if ( v14 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)this + 5) + 48LL))(
        *((_QWORD *)this + 5),
        v26,
        &v25);
      if ( !(_DWORD)v25 )
      {
        v15 = *((_QWORD *)this + 4);
        v16 = *(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v15 + 32LL);
        v17 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, &v20);
        v16(v15, v26, *v17);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
        v10 = v21;
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xAA,
        (int)"pcshell\\twinui\\taskgroups\\lib\\desktoptaskgroupsswitchitemcontroller.cpp",
        (const char *)(unsigned int)v14);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
    v9 += 4;
  }
  if ( pv )
    CoTaskMemFree_0(pv);
  if ( v7 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
  if ( v11 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v19);
}
