/*
 * XREFs of ?HandleForegroundWindow@WindowEventDispatcher@@AEAAXPEAUHWND__@@@Z @ 0x1804C6128
 * Callers:
 *     ?HandleFrameWindowChange@WindowEventDispatcher@@UEAAJPEAUIWindowWrapperInternal@@@Z @ 0x1802D7930 (-HandleFrameWindowChange@WindowEventDispatcher@@UEAAJPEAUIWindowWrapperInternal@@@Z.c)
 *     ?OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z @ 0x1802D7BA0 (-OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?WindowWrapperFromFrameOrWindow@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@PEA_N@Z @ 0x1804CCF84 (-WindowWrapperFromFrameOrWindow@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInterna.c)
 *     ?attach@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIWindowWrapperInternal@@@Z @ 0x1804CD334 (-attach@-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIWindowWr.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall WindowEventDispatcher::HandleForegroundWindow(WindowEventDispatcher *this, HWND a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  char v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  v10 = 0LL;
  if ( (unsigned int)IsShellManagedWindow(a2) )
  {
    v9 = 0;
    v5 = (__int64 *)WindowEventDispatcher::WindowWrapperFromFrameOrWindow(this, &v11, a2, &v9);
    v6 = *v5;
    *v5 = 0LL;
    wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::attach(&v10, v6);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
    v4 = v10;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 336LL))(v10);
  }
  v7 = *((_QWORD *)this + 57);
  if ( v7 != v4 )
  {
    if ( v7 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 344LL))(v7, 0LL);
    if ( v4 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 344LL))(v4, 1LL);
  }
  v8 = *((_QWORD *)this + 57);
  *((_QWORD *)this + 57) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  *((_QWORD *)this + 56) = a2;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
}
