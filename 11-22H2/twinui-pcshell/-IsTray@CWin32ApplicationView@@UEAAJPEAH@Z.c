/*
 * XREFs of ?IsTray@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x1803CECA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::IsTray(CWin32ApplicationView *this, int *a2)
{
  *a2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 56LL))(*((_QWORD *)this + 27));
  return 0LL;
}
