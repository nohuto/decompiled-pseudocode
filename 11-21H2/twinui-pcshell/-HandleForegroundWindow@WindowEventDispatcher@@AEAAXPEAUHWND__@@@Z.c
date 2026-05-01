/*
 * XREFs of ?HandleForegroundWindow@WindowEventDispatcher@@AEAAXPEAUHWND__@@@Z @ 0x18009AB50
 * Callers:
 *     ?HandleFrameWindowChange@WindowEventDispatcher@@UEAAJPEAUIWindowWrapperInternal@@@Z @ 0x18009A420 (-HandleFrameWindowChange@WindowEventDispatcher@@UEAAJPEAUIWindowWrapperInternal@@@Z.c)
 *     ?OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z @ 0x18009A480 (-OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall WindowEventDispatcher::HandleForegroundWindow(WindowEventDispatcher *this, HWND a2, __int64 a3)
{
  __int64 v5; // rbx
  bool v6; // r14
  _QWORD *v7; // rdi
  _QWORD *v8; // r15
  HWND v9; // r12
  __int64 v10; // rcx
  __int64 v11; // rdi

  v5 = 0LL;
  if ( (unsigned int)IsShellManagedWindow(a2, a2, a3) )
  {
    v6 = 0;
    v7 = (_QWORD *)*((_QWORD *)this + 46);
    v8 = (_QWORD *)*((_QWORD *)this + 47);
    while ( v7 != v8 )
    {
      if ( *v7 )
      {
        v9 = (HWND)(*(int (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 256LL))(*v7);
        if ( a2 == (HWND)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 352LL))(*v7) || a2 == v9 )
        {
          v5 = *v7;
          if ( *v7 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
          v6 = a2 == v9;
          break;
        }
      }
      ++v7;
    }
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 336LL))(v5);
  }
  v10 = *((_QWORD *)this + 57);
  if ( v10 != v5 )
  {
    if ( v10 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 344LL))(v10, 0LL);
    if ( v5 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 344LL))(v5, 1LL);
  }
  v11 = *((_QWORD *)this + 57);
  *((_QWORD *)this + 57) = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  *((_QWORD *)this + 56) = a2;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
}
