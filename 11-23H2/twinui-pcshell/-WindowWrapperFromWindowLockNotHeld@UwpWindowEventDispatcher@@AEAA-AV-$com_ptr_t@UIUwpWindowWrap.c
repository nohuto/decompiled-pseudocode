/*
 * XREFs of ?WindowWrapperFromWindowLockNotHeld@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x1804D3ECC
 * Callers:
 *     ?GetViewFromHwnd@UwpWindowEventDispatcher@@UEAAJPEAUHWND__@@PEAPEAUINtUserViewWrapper@@@Z @ 0x1804D1410 (-GetViewFromHwnd@UwpWindowEventDispatcher@@UEAAJPEAUHWND__@@PEAPEAUINtUserViewWrapper@@@Z.c)
 * Callees:
 *     ?WindowWrapperFromWindow@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x18009B85C (-WindowWrapperFromWindow@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrapperInternal.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall UwpWindowEventDispatcher::WindowWrapperFromWindowLockNotHeld(
        RTL_SRWLOCK *a1,
        __int64 *a2,
        __int64 a3)
{
  RTL_SRWLOCK *v6; // rsi

  v6 = a1 + 61;
  AcquireSRWLockShared(a1 + 61);
  UwpWindowEventDispatcher::WindowWrapperFromWindow((__int64)a1, a2, a3);
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return a2;
}
