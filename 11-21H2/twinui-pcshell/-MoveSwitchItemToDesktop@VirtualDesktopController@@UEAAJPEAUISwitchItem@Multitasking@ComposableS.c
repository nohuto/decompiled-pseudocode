/*
 * XREFs of ?MoveSwitchItemToDesktop@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktop@3456@@Z @ 0x18048D700
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

// Hidden C++ exception states: #wind=4
__int64 __fastcall VirtualDesktopController::MoveSwitchItemToDesktop(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *a2,
        __int64 (__fastcall ***a3)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *))
{
  RTL_SRWLOCK *v6; // rsi
  int v7; // ebx
  __int64 (__fastcall *v8)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *); // rbx
  int v9; // eax
  __int64 *AddressOf; // rax
  VirtualDesktopController *v11; // rcx
  PVOID Ptr; // rdi
  __int64 (__fastcall *v13)(PVOID, __int64, _QWORD); // rbx
  _QWORD *v14; // rax
  __int64 v16[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v18; // [rsp+60h] [rbp+30h] BYREF
  __int64 v19; // [rsp+78h] [rbp+48h] BYREF

  v6 = this + 15;
  AcquireSRWLockShared(this + 15);
  v16[1] = (__int64)v6;
  if ( this[10].Ptr )
  {
    v18 = 0LL;
    v8 = **a3;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
    v9 = v8(
           (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *)a3,
           &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
           &v18);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v19 = 0LL;
      AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v19);
      VirtualDesktopController::GetApplicationViewFromSwitchItem(v11, a2, (struct IApplicationView **)AddressOf);
      Ptr = this[10].Ptr;
      v13 = *(__int64 (__fastcall **)(PVOID, __int64, _QWORD))(*(_QWORD *)Ptr + 32LL);
      v14 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 24LL))(v18, v16);
      v7 = v13(Ptr, v19, *v14);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v16);
      if ( v7 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD2,
          (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
          (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v19);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCD,
        (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
        (const char *)(unsigned int)v9);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
  }
  else
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCA,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)0x8007139FLL);
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return (unsigned int)v7;
}
