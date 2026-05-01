/*
 * XREFs of ?GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z @ 0x1801268E0
 * Callers:
 *     _lambda_45515fc8494d7051ed1d2c04434d8f2b_::operator() @ 0x180311CC0 (_lambda_45515fc8494d7051ed1d2c04434d8f2b_--operator().c)
 *     ?IsMirrored@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x180313440 (-IsMirrored@CWin32ApplicationView@@UEAAJPEAH@Z.c)
 *     ?SetViewState@CWin32ApplicationView@@UEAAJI@Z @ 0x180313AF0 (-SetViewState@CWin32ApplicationView@@UEAAJI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::GetWindow(CWin32ApplicationView *this, HWND *a2)
{
  *a2 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 24LL))(*((_QWORD *)this + 8));
  return 0LL;
}
