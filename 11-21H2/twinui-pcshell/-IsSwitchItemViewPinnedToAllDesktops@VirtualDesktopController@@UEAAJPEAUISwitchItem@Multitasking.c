/*
 * XREFs of ?IsSwitchItemViewPinnedToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAE@Z @ 0x18048D460
 * Callers:
 *     ?PinUnPinSwitchItemViewToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18048DA60 (-PinUnPinSwitchItemViewToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking.c)
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x1800510EC (-GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@Co.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopController::IsSwitchItemViewPinnedToAllDesktops(
        VirtualDesktopController *this,
        struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *a2,
        bool *a3)
{
  __int64 *AddressOf; // rax
  VirtualDesktopController *v7; // rcx
  int ApplicationViewFromSwitchItem; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v12[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v14; // [rsp+58h] [rbp+20h] BYREF

  v12[0] = 0LL;
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(v12);
  ApplicationViewFromSwitchItem = VirtualDesktopController::GetApplicationViewFromSwitchItem(
                                    v7,
                                    a2,
                                    (struct IApplicationView **)AddressOf);
  v9 = ApplicationViewFromSwitchItem;
  if ( ApplicationViewFromSwitchItem >= 0 )
  {
    v14 = 0;
    ApplicationViewFromSwitchItem = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 13) + 48LL))(
                                      *((_QWORD *)this + 13),
                                      v12[0],
                                      &v14);
    v9 = ApplicationViewFromSwitchItem;
    if ( ApplicationViewFromSwitchItem >= 0 )
    {
      *a3 = v14 != 0;
      v9 = 0;
      goto LABEL_7;
    }
    v10 = 273LL;
  }
  else
  {
    v10 = 270LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
    (const char *)(unsigned int)ApplicationViewFromSwitchItem);
LABEL_7:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v12);
  return v9;
}
