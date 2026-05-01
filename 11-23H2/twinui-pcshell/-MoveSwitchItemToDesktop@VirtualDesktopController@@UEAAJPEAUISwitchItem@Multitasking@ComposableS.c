/*
 * XREFs of ?MoveSwitchItemToDesktop@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktop@3456@@Z @ 0x180542AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x180037648 (-GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@Co.c)
 *     ?IsTaskGroupSwitchItem@VirtualDesktopController@@AEAA_NUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x180037704 (-IsTaskGroupSwitchItem@VirtualDesktopController@@AEAA_NUISwitchItem@Multitasking@ComposableShell.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z @ 0x1800AD764 (-copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InitializeTaskGroupController@VirtualDesktopController@@AEAAXXZ @ 0x180541EA8 (-InitializeTaskGroupController@VirtualDesktopController@@AEAAXXZ.c)
 *     ?MoveToDesktop@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemController@UTaskGroupSwitchItemController@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@AEBUIVirtualDesktop@56783@@Z @ 0x180542D00 (-MoveToDesktop@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemController@UTaskG.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall VirtualDesktopController::MoveSwitchItemToDesktop(
        RTL_SRWLOCK *this,
        struct IUnknown *a2,
        struct IUnknown *a3)
{
  RTL_SRWLOCK *v6; // r14
  void *v7; // r8
  int v8; // edi
  struct IApplicationView *v9; // rbx
  __int64 v10; // rcx
  void *v11; // r8
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  int v13; // eax
  VirtualDesktopController *v14; // rcx
  PVOID Ptr; // rsi
  __int64 (__fastcall *v16)(PVOID, struct IApplicationView *, _QWORD); // rdi
  _QWORD *v17; // rax
  struct IApplicationView *v19; // [rsp+20h] [rbp-20h] BYREF
  __int64 v20[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct IApplicationView *v22; // [rsp+70h] [rbp+30h] BYREF
  __int64 v23; // [rsp+88h] [rbp+48h] BYREF

  v6 = this + 17;
  AcquireSRWLockShared(this + 17);
  v20[1] = (__int64)v6;
  if ( this[11].Ptr )
  {
    v19 = 0LL;
    winrt::copy_from_abi((winrt *)&v19, a2, v7);
    v9 = v19;
    v22 = v19;
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v22);
    if ( VirtualDesktopController::IsTaskGroupSwitchItem(v10, (__int64 *)&v22) )
    {
      VirtualDesktopController::InitializeTaskGroupController((VirtualDesktopController *)this);
      v22 = 0LL;
      winrt::copy_from_abi((winrt *)&v22, a3, v11);
      winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemController<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupSwitchItemController>::MoveToDesktop(
        &this[16],
        &v19,
        &v22);
      if ( v22 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v22);
      v8 = 0;
    }
    else
    {
      v23 = 0LL;
      QueryInterface = a3->lpVtbl->QueryInterface;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
      v13 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
              a3,
              &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
              &v23);
      v8 = v13;
      if ( v13 >= 0 )
      {
        v22 = 0LL;
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v22);
        VirtualDesktopController::GetApplicationViewFromSwitchItem(
          v14,
          (struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *)a2,
          &v22);
        Ptr = this[11].Ptr;
        v16 = *(__int64 (__fastcall **)(PVOID, struct IApplicationView *, _QWORD))(*(_QWORD *)Ptr + 32LL);
        v17 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 24LL))(v23, v20);
        v8 = v16(Ptr, v22, *v17);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v20);
        if ( v8 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x12B,
            (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
            (const char *)(unsigned int)v8);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v22);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x126,
          (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
          (const char *)(unsigned int)v13);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
    }
    if ( v9 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
  }
  else
  {
    v8 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x119,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)0x8007139FLL);
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return (unsigned int)v8;
}
