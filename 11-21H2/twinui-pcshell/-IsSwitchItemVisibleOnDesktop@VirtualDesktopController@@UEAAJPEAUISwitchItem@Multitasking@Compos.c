/*
 * XREFs of ?IsSwitchItemVisibleOnDesktop@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktop@3456@PEAE@Z @ 0x180050FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x1800510EC (-GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@Co.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopController::IsSwitchItemVisibleOnDesktop(
        VirtualDesktopController *this,
        struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *a2,
        __int64 (__fastcall ***a3)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *),
        bool *a4)
{
  __int64 (__fastcall *v7)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *); // rbx
  int v8; // eax
  int v9; // ebx
  __int64 *AddressOf; // rax
  VirtualDesktopController *v11; // rcx
  _QWORD *v12; // rax
  __int64 v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v17; // [rsp+60h] [rbp+30h] BYREF
  __int64 v18; // [rsp+68h] [rbp+38h] BYREF

  *a4 = 0;
  v18 = 0LL;
  v7 = **a3;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
  v8 = v7(
         (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *)a3,
         &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
         &v18);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB9,
      (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v8,
      v14);
  }
  else
  {
    v14 = 0LL;
    AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v14);
    VirtualDesktopController::GetApplicationViewFromSwitchItem(v11, a2, (struct IApplicationView **)AddressOf);
    v12 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 24LL))(v18, &v15);
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(*(_QWORD *)*v12 + 24LL))(*v12, v14, &v17);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBF,
        (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
        (const char *)(unsigned int)v9,
        v14);
    }
    else
    {
      *a4 = v17 != 0;
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v14);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
  return (unsigned int)v9;
}
