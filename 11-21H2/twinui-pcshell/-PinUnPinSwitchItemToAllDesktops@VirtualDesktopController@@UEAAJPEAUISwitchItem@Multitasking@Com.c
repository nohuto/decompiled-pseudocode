/*
 * XREFs of ?PinUnPinSwitchItemToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18048D910
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x1800510EC (-GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@Co.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsSwitchItemPinnedToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAE@Z @ 0x18048D310 (-IsSwitchItemPinnedToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@Com.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopController::PinUnPinSwitchItemToAllDesktops(
        __int64 **this,
        struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *a2)
{
  __int64 *AddressOf; // rax
  VirtualDesktopController *v5; // rcx
  int ApplicationViewFromSwitchItem; // eax
  unsigned int v7; // ebx
  __int64 v8; // rbx
  int (__fastcall *v9)(__int64, __int64 *); // rdi
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v13; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+28h] [rbp-18h]
  __int64 v15; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned __int8 v17; // [rsp+70h] [rbp+30h] BYREF
  __int64 v18; // [rsp+78h] [rbp+38h] BYREF

  v18 = 0LL;
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v18);
  ApplicationViewFromSwitchItem = VirtualDesktopController::GetApplicationViewFromSwitchItem(
                                    v5,
                                    a2,
                                    (struct IApplicationView **)AddressOf);
  v7 = ApplicationViewFromSwitchItem;
  if ( ApplicationViewFromSwitchItem >= 0 )
  {
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v8 = v18;
    v9 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 136LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v13);
    v14 = -1LL;
    v15 = -1LL;
    if ( v9(v8, &v13) >= 0 )
    {
      v17 = 0;
      VirtualDesktopController::IsSwitchItemPinnedToAllDesktops((VirtualDesktopController *)this, a2, (bool *)&v17);
      v10 = this[13];
      v11 = *v10;
      if ( v17 )
        (*(void (__fastcall **)(__int64 *, __int64))(v11 + 40))(v10, v13);
      else
        (*(void (__fastcall **)(__int64 *, __int64))(v11 + 32))(v10, v13);
    }
    v7 = 0;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v13);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12A,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)ApplicationViewFromSwitchItem);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v18);
  return v7;
}
