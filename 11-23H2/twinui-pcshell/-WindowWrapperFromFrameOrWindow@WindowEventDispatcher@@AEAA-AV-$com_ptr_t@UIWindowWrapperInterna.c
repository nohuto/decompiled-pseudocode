/*
 * XREFs of ?WindowWrapperFromFrameOrWindow@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@PEA_N@Z @ 0x1804CCF84
 * Callers:
 *     ?HandleForegroundWindow@WindowEventDispatcher@@AEAAXPEAUHWND__@@@Z @ 0x1804C6128 (-HandleForegroundWindow@WindowEventDispatcher@@AEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall WindowEventDispatcher::WindowWrapperFromFrameOrWindow(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        bool *a4)
{
  _QWORD *v7; // rbx
  _QWORD *v8; // rbp
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx

  *a4 = 0;
  *a2 = 0LL;
  v7 = *(_QWORD **)(a1 + 368);
  v8 = *(_QWORD **)(a1 + 376);
  while ( v7 != v8 )
  {
    if ( *v7 )
    {
      v9 = (*(int (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 256LL))(*v7);
      v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 352LL))(*v7);
      if ( a3 == v9 || a3 == v10 )
      {
        v11 = *v7;
        v12 = *a2;
        *a2 = v11;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        *a4 = a3 == v9;
        return a2;
      }
    }
    ++v7;
  }
  return a2;
}
