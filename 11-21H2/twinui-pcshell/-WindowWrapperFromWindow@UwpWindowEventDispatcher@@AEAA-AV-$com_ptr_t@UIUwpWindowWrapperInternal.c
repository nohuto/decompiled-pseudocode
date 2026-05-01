/*
 * XREFs of ?WindowWrapperFromWindow@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x1803F8388
 * Callers:
 *     ?OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z @ 0x1803EEF80 (-OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z.c)
 *     ?WindowWrapperFromWindowLockNotHeld@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x1803F8488 (-WindowWrapperFromWindowLockNotHeld@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrap.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall UwpWindowEventDispatcher::WindowWrapperFromWindow(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rbx

  *a2 = 0LL;
  v5 = *(_QWORD **)(a1 + 368);
  v6 = *(_QWORD **)(a1 + 376);
  while ( v5 != v6 )
  {
    if ( *v5 && a3 == (*(int (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 256LL))(*v5) )
    {
      v7 = *v5;
      v8 = *a2;
      *a2 = v7;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      return a2;
    }
    ++v5;
  }
  return a2;
}
