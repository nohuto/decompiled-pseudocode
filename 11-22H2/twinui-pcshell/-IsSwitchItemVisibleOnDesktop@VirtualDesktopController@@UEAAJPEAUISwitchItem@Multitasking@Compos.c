/*
 * XREFs of ?IsSwitchItemVisibleOnDesktop@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktop@3456@PEAE@Z @ 0x1800374F0
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
 *     ?IsVisibleOnDesktops@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemController@UTaskGroupSwitchItemController@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@AEBW4VirtualDesktopsScope@TaskGroups@Shell@783@@Z @ 0x1805427B8 (-IsVisibleOnDesktops@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemController@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall VirtualDesktopController::IsSwitchItemVisibleOnDesktop(
        VirtualDesktopController *this,
        struct IUnknown *a2,
        struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *a3,
        bool *a4)
{
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *); // rdi
  int v11; // eax
  int v12; // edi
  VirtualDesktopController *v13; // rcx
  _QWORD *v14; // rax
  struct IApplicationView *v16; // [rsp+20h] [rbp-20h] BYREF
  __int64 v17; // [rsp+28h] [rbp-18h] BYREF
  __int64 v18; // [rsp+30h] [rbp-10h] BYREF
  _BYTE v19[8]; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v21; // [rsp+78h] [rbp+38h] BYREF

  *a4 = 0;
  v18 = 0LL;
  winrt::copy_from_abi((winrt *)&v18, a2, a3);
  v8 = v18;
  v21 = v18;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v21);
  if ( (unsigned __int8)VirtualDesktopController::IsTaskGroupSwitchItem(v9, &v21) )
  {
    VirtualDesktopController::InitializeTaskGroupController(this);
    LODWORD(v21) = 1;
    *a4 = (unsigned __int8)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemController<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupSwitchItemController>::IsVisibleOnDesktops(
                             (char *)this + 128,
                             &v18,
                             &v21) != 0;
    goto LABEL_5;
  }
  v17 = 0LL;
  v10 = **(__int64 (__fastcall ***)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *))a3;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  v11 = v10(a3, &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2, &v17);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x107,
      (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v11,
      (int)v16);
  }
  else
  {
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
    VirtualDesktopController::GetApplicationViewFromSwitchItem(
      v13,
      (struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *)a2,
      &v16);
    v14 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v17 + 24LL))(v17, v19);
    v12 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64 *))(*(_QWORD *)*v14 + 24LL))(
            *v14,
            v16,
            &v21);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v19);
    if ( v12 >= 0 )
    {
      *a4 = (_DWORD)v21 != 0;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
LABEL_5:
      v12 = 0;
      goto LABEL_6;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10D,
      (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v12,
      (int)v16);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
LABEL_6:
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
  return (unsigned int)v12;
}
