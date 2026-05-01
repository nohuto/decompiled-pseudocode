/*
 * XREFs of ?HandleForegroundWindow@UwpWindowEventDispatcher@@AEAAXPEAUHWND__@@@Z @ 0x18009B6C4
 * Callers:
 *     ?HandleFrameWindowChange@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowWrapperInternal@@@Z @ 0x180057F20 (-HandleFrameWindowChange@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowWrapperInternal@@@Z.c)
 *     ?OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z @ 0x18009AFE0 (-OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?WindowWrapperFromFrameOrWindow@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@PEA_N@Z @ 0x18004243C (-WindowWrapperFromFrameOrWindow@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrapperI.c)
 *     ?attach@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x18009D078 (-attach@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIUwpWi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall UwpWindowEventDispatcher::HandleForegroundWindow(UwpWindowEventDispatcher *this, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 *v7; // rax
  __int64 v8; // rdx
  bool v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  v10 = 0LL;
  if ( (unsigned int)IsShellManagedWindow(a2) )
  {
    v9 = 0;
    v7 = UwpWindowEventDispatcher::WindowWrapperFromFrameOrWindow((__int64)this, &v11, a2, &v9);
    v8 = *v7;
    *v7 = 0LL;
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::attach(&v10, v8);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
    v4 = v10;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 336LL))(v10);
  }
  v5 = *((_QWORD *)this + 59);
  if ( v5 != v4 )
  {
    if ( v5 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 344LL))(v5, 0LL);
    if ( v4 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 344LL))(v4, 1LL);
  }
  v6 = *((_QWORD *)this + 59);
  *((_QWORD *)this + 59) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  *((_QWORD *)this + 58) = a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
}
