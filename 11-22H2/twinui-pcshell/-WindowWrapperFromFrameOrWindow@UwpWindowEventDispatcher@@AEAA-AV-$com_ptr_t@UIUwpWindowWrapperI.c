/*
 * XREFs of ?WindowWrapperFromFrameOrWindow@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@PEA_N@Z @ 0x18004243C
 * Callers:
 *     ?HandleForegroundWindow@UwpWindowEventDispatcher@@AEAAXPEAUHWND__@@@Z @ 0x18009B6C4 (-HandleForegroundWindow@UwpWindowEventDispatcher@@AEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall UwpWindowEventDispatcher::WindowWrapperFromFrameOrWindow(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        bool *a4)
{
  _QWORD *v7; // rbx
  _QWORD *v8; // rbp
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rbx

  *a4 = 0;
  *a2 = 0LL;
  v7 = *(_QWORD **)(a1 + 384);
  v8 = *(_QWORD **)(a1 + 392);
  while ( v7 != v8 )
  {
    if ( *v7 )
    {
      v9 = (*(int (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 256LL))(*v7);
      if ( a3 == (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 352LL))(*v7) || a3 == v9 )
      {
        v10 = *v7;
        v11 = *a2;
        *a2 = v10;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        *a4 = a3 == v9;
        return a2;
      }
    }
    ++v7;
  }
  return a2;
}
