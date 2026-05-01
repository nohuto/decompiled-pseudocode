/*
 * XREFs of ?CancelSwipe@MultitaskingViewGestureHandler@@UEAAJXZ @ 0x18054D830
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::CancelSwipe(MultitaskingViewGestureHandler *this)
{
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 24LL))(*((_QWORD *)this + 9), 4LL);
  *((_QWORD *)this + 15) = 0LL;
  return 0LL;
}
