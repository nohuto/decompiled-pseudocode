/*
 * XREFs of ?PinUnPinSwitchItemViewToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18048DA60
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x1800510EC (-GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@Co.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsSwitchItemViewPinnedToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAE@Z @ 0x18048D460 (-IsSwitchItemViewPinnedToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopController::PinUnPinSwitchItemViewToAllDesktops(
        __int64 **this,
        struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *a2)
{
  __int64 *AddressOf; // rax
  VirtualDesktopController *v5; // rcx
  int ApplicationViewFromSwitchItem; // eax
  unsigned int v7; // ebx
  __int64 *v8; // rcx
  __int64 v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int8 v12; // [rsp+40h] [rbp+18h] BYREF
  __int64 v13; // [rsp+48h] [rbp+20h] BYREF

  v13 = 0LL;
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v13);
  ApplicationViewFromSwitchItem = VirtualDesktopController::GetApplicationViewFromSwitchItem(
                                    v5,
                                    a2,
                                    (struct IApplicationView **)AddressOf);
  v7 = ApplicationViewFromSwitchItem;
  if ( ApplicationViewFromSwitchItem >= 0 )
  {
    v12 = 0;
    VirtualDesktopController::IsSwitchItemViewPinnedToAllDesktops((VirtualDesktopController *)this, a2, (bool *)&v12);
    v8 = this[13];
    v9 = *v8;
    if ( v12 )
      (*(void (__fastcall **)(__int64 *, __int64))(v9 + 64))(v8, v13);
    else
      (*(void (__fastcall **)(__int64 *, __int64))(v9 + 56))(v8, v13);
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x140,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)ApplicationViewFromSwitchItem);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v13);
  return v7;
}
