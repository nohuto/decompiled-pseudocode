/*
 * XREFs of ?_SnapWindowToLocation@HotkeyHandler@@AEAAJPEAUHWND__@@PEAUIImmersiveMonitor@@W4SNAP_LOCATION@@@Z @ 0x1805AB0AC
 * Callers:
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805A9A60 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HotkeyHandler::_SnapWindowToLocation(__int64 a1, __int64 a2, IUnknown *a3, unsigned int a4)
{
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v10; // eax
  unsigned int v11; // ebx
  HRESULT v12; // eax
  __int64 v13; // rdx
  __int64 v15[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *ppvOut; // [rsp+60h] [rbp+8h] BYREF

  v15[0] = 0LL;
  v7 = *(_QWORD *)(a1 + 56);
  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v7 + 48LL);
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(v15);
  v10 = v8(v7, a2, AddressOf);
  v11 = v10;
  if ( v10 >= 0 )
  {
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
    v12 = IUnknown_QueryService(
            a3,
            &GUID_fff59320_db70_4865_8fed_8b502d692f12,
            &GUID_fff59320_db70_4865_8fed_8b502d692f12,
            &ppvOut);
    v11 = v12;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ppvOut + 24LL))(
              ppvOut,
              v15[0],
              a4,
              0LL,
              0LL);
      v11 = v12;
      if ( v12 >= 0 )
      {
        v11 = 0;
        goto LABEL_9;
      }
      v13 = 563LL;
    }
    else
    {
      v13 = 561LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
      (const char *)(unsigned int)v12);
LABEL_9:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x22E,
    (__int64)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
    (const char *)(unsigned int)v10);
LABEL_10:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v15);
  return v11;
}
