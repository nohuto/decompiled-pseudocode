/*
 * XREFs of ?_CycleInDirection@CVirtualDesktopHotkeyHandler@@AEAAJPEAUHMONITOR__@@W4VirtualDesktopSwitchDirection@@@Z @ 0x18054DA60
 * Callers:
 *     ?HandleHotkey@CVirtualDesktopHotkeyHandler@@UEAAJPEAUHMONITOR__@@W4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x18054D8C0 (-HandleHotkey@CVirtualDesktopHotkeyHandler@@UEAAJPEAUHMONITOR__@@W4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualDesktopHotkeyHandler::_CycleInDirection(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64, __int64 *); // rbx
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64, _QWORD, __int64 *); // rbx
  int v12; // eax
  RTL_SRWLOCK *v14[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v16; // [rsp+70h] [rbp+30h] BYREF
  __int64 v17; // [rsp+88h] [rbp+48h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**(_QWORD **)(a1 + 32) + 32LL))(*(_QWORD *)(a1 + 32), v14);
  v17 = 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v6 + 312LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
  v8 = v7(v6, a2, &v17);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v16 = 0LL;
    v10 = *(_QWORD *)(a1 + 16);
    v11 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 328LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
    v9 = v11(v10, v17, (unsigned int)(a3 != 0) + 3, &v16);
    if ( v9 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(
              *(_QWORD *)(a1 + 24),
              a2,
              v16,
              a3);
      v9 = v12;
      if ( v12 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3A,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
          (const char *)(unsigned int)v12);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
      (const char *)(unsigned int)v8);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v14);
  return (unsigned int)v9;
}
