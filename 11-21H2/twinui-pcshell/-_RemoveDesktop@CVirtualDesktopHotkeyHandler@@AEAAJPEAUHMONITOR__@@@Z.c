/*
 * XREFs of ?_RemoveDesktop@CVirtualDesktopHotkeyHandler@@AEAAJPEAUHMONITOR__@@@Z @ 0x18054DBE8
 * Callers:
 *     ?HandleHotkey@CVirtualDesktopHotkeyHandler@@UEAAJPEAUHMONITOR__@@W4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x18054D8C0 (-HandleHotkey@CVirtualDesktopHotkeyHandler@@UEAAJPEAUHMONITOR__@@W4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualDesktopHotkeyHandler::_RemoveDesktop(CVirtualDesktopHotkeyHandler *this, HMONITOR a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, HMONITOR, __int64 *); // rbx
  int v6; // eax
  int v7; // ebx
  int v8; // r14d
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64, __int64, __int64 *); // rbx
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, __int64, __int64, __int64 *); // rbx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v18; // [rsp+60h] [rbp+30h] BYREF
  __int64 v19; // [rsp+70h] [rbp+40h] BYREF
  RTL_SRWLOCK *v20; // [rsp+78h] [rbp+48h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4), &v20);
  v19 = 0LL;
  v4 = *((_QWORD *)this + 2);
  v5 = *(__int64 (__fastcall **)(__int64, HMONITOR, __int64 *))(*(_QWORD *)v4 + 312LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
  v6 = v5(v4, a2, &v19);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = 0;
    v18 = 0LL;
    v9 = *((_QWORD *)this + 2);
    v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v9 + 328LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
    v7 = v10(v9, v19, 6LL, &v18);
    if ( v7 == -2147316575 )
    {
      v8 = 1;
      v11 = *((_QWORD *)this + 2);
      v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v11 + 328LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
      v7 = v12(v11, v19, 5LL, &v18);
    }
    if ( v7 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, HMONITOR, __int64, __int64, int))(**((_QWORD **)this + 3) + 32LL))(
              *((_QWORD *)this + 3),
              a2,
              v19,
              v18,
              v8);
      v7 = v15;
      if ( v15 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
        goto LABEL_11;
      }
      v13 = (unsigned int)v15;
      v14 = 87LL;
    }
    else
    {
      v13 = (unsigned int)v7;
      v14 = 86LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
      (const char *)v13);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4B,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
    (const char *)(unsigned int)v6);
LABEL_11:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v20);
  return (unsigned int)v7;
}
