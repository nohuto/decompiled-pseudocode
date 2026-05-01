/*
 * XREFs of ?WindowWrapperFromWindowLockNotHeld@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x1803F8488
 * Callers:
 *     ?GetViewFromHwnd@UwpWindowEventDispatcher@@UEAAJPEAUHWND__@@PEAPEAUINtUserViewWrapper@@@Z @ 0x1803EE5C0 (-GetViewFromHwnd@UwpWindowEventDispatcher@@UEAAJPEAUHWND__@@PEAPEAUINtUserViewWrapper@@@Z.c)
 *     ?OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z @ 0x1803EEF80 (-OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?WindowWrapperFromWindow@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x1803F8388 (-WindowWrapperFromWindow@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrapperInternal.c)
 */

// Hidden C++ exception states: #wind=1
RTL_SRWLOCK *__fastcall UwpWindowEventDispatcher::WindowWrapperFromWindowLockNotHeld(
        RTL_SRWLOCK *a1,
        RTL_SRWLOCK *a2,
        __int64 a3)
{
  RTL_SRWLOCK *v6; // rbx
  RTL_SRWLOCK *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v6 = a1 + 59;
  AcquireSRWLockShared(a1 + 59);
  v8 = v6;
  UwpWindowEventDispatcher::WindowWrapperFromWindow((__int64)a1, (__int64 *)a2, a3);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v8);
  return a2;
}
