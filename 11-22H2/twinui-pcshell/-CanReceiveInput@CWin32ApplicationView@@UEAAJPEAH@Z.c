/*
 * XREFs of ?CanReceiveInput@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x1802D1950
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::CanReceiveInput(CWin32ApplicationView *this, int *a2)
{
  HWND v3; // rax

  v3 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  *a2 = IsWindowEnabled(v3);
  return 0LL;
}
