/*
 * XREFs of ?WindowWrapperFromWindow@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x180177884
 * Callers:
 *     ?OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z @ 0x18009A480 (-OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall WindowEventDispatcher::WindowWrapperFromWindow(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rsi
  __int64 v8; // rcx
  __int64 v9; // rbx

  *a2 = 0LL;
  v5 = *(_QWORD **)(a1 + 368);
  v6 = *(_QWORD **)(a1 + 376);
  while ( v5 != v6 )
  {
    if ( *v5 && a3 == (*(int (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 256LL))(*v5) )
    {
      v8 = *v5;
      v9 = *a2;
      *a2 = v8;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      return a2;
    }
    ++v5;
  }
  return a2;
}
