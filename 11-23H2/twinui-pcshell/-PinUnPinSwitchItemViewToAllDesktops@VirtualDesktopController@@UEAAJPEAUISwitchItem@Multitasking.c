/*
 * XREFs of ?PinUnPinSwitchItemViewToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180542FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x180037648 (-GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@Co.c)
 *     ?IsTaskGroupSwitchItem@VirtualDesktopController@@AEAA_NUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x180037704 (-IsTaskGroupSwitchItem@VirtualDesktopController@@AEAA_NUISwitchItem@Multitasking@ComposableShell.c)
 *     ?copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z @ 0x1800AD764 (-copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsSwitchItemViewPinnedToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAE@Z @ 0x180542670 (-IsSwitchItemViewPinnedToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopController::PinUnPinSwitchItemViewToAllDesktops(
        __int64 **this,
        struct IUnknown *a2,
        void *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // edi
  VirtualDesktopController *v8; // rcx
  int ApplicationViewFromSwitchItem; // eax
  __int64 *v10; // rcx
  __int64 v11; // rax
  _QWORD v13[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v15; // [rsp+60h] [rbp+30h] BYREF
  struct IApplicationView *v16; // [rsp+68h] [rbp+38h] BYREF

  v13[0] = 0LL;
  winrt::copy_from_abi((winrt *)v13, a2, a3);
  v5 = v13[0];
  v15 = v13[0];
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v15);
  if ( VirtualDesktopController::IsTaskGroupSwitchItem(v6, &v15) )
  {
    v7 = -2147467259;
  }
  else
  {
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v16);
    ApplicationViewFromSwitchItem = VirtualDesktopController::GetApplicationViewFromSwitchItem(
                                      v8,
                                      (struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *)a2,
                                      &v16);
    v7 = ApplicationViewFromSwitchItem;
    if ( ApplicationViewFromSwitchItem >= 0 )
    {
      LOBYTE(v15) = 0;
      VirtualDesktopController::IsSwitchItemViewPinnedToAllDesktops((VirtualDesktopController *)this, a2, (bool *)&v15);
      v10 = this[14];
      v11 = *v10;
      if ( (_BYTE)v15 )
        (*(void (__fastcall **)(__int64 *, struct IApplicationView *))(v11 + 64))(v10, v16);
      else
        (*(void (__fastcall **)(__int64 *, struct IApplicationView *))(v11 + 56))(v10, v16);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v16);
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C5,
        (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
        (const char *)(unsigned int)ApplicationViewFromSwitchItem);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v16);
    }
  }
  if ( v5 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v13);
  return v7;
}
