/*
 * XREFs of ?_AddDesktop@CVirtualDesktopHotkeyHandler@@AEAAJPEAUHMONITOR__@@@Z @ 0x18054D958
 * Callers:
 *     ?HandleHotkey@CVirtualDesktopHotkeyHandler@@UEAAJPEAUHMONITOR__@@W4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x18054D8C0 (-HandleHotkey@CVirtualDesktopHotkeyHandler@@UEAAJPEAUHMONITOR__@@W4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopHotkeyHandler::_AddDesktop(CVirtualDesktopHotkeyHandler *this, HMONITOR a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, HMONITOR, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v12; // [rsp+60h] [rbp+18h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4), &v12);
  v11 = 0LL;
  v4 = *((_QWORD *)this + 2);
  v5 = *(__int64 (__fastcall **)(__int64, HMONITOR, __int64 *))(*(_QWORD *)v4 + 344LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  v6 = v5(v4, a2, &v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 66LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_6;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, HMONITOR, __int64, __int64))(**((_QWORD **)this + 3) + 24LL))(
         *((_QWORD *)this + 3),
         a2,
         v11,
         1LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 67LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v12);
  return v7;
}
