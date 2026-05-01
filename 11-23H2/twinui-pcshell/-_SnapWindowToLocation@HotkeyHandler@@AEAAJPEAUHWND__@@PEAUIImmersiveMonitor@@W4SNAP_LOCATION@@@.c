/*
 * XREFs of ?_SnapWindowToLocation@HotkeyHandler@@AEAAJPEAUHWND__@@PEAUIImmersiveMonitor@@W4SNAP_LOCATION@@@Z @ 0x180677C74
 * Callers:
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x180676370 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HotkeyHandler::_SnapWindowToLocation(__int64 a1, __int64 a2, IUnknown *a3, unsigned int a4)
{
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64, __int64 *); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  HRESULT v11; // eax
  __int64 v12; // rdx
  __int64 v14[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *ppvOut; // [rsp+60h] [rbp+8h] BYREF

  v14[0] = 0LL;
  v7 = *(_QWORD *)(a1 + 56);
  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v7 + 48LL);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v14);
  v9 = v8(v7, a2, v14);
  v10 = v9;
  if ( v9 >= 0 )
  {
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
    v11 = IUnknown_QueryService(
            a3,
            &GUID_fff59320_db70_4865_8fed_8b502d692f12,
            &GUID_fff59320_db70_4865_8fed_8b502d692f12,
            &ppvOut);
    v10 = v11;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ppvOut + 24LL))(
              ppvOut,
              v14[0],
              a4,
              0LL,
              0LL);
      v10 = v11;
      if ( v11 >= 0 )
      {
        v10 = 0;
        goto LABEL_9;
      }
      v12 = 524LL;
    }
    else
    {
      v12 = 522LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
      (const char *)(unsigned int)v11);
LABEL_9:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x207,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
    (const char *)(unsigned int)v9);
LABEL_10:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v14);
  return v10;
}
