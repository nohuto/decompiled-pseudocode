/*
 * XREFs of ?ShowSnapBarOnMonitorAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@UtagPOINT@@@Z @ 0x180228684
 * Callers:
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2PEAUtagRECT@@3@Z @ 0x180661C80 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2P.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     SnapFlyoutHost::ShowSnapBarOnMonitorAsync$_InitCoro$2 @ 0x180228370 (SnapFlyoutHost--ShowSnapBarOnMonitorAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall SnapFlyoutHost::ShowSnapBarOnMonitorAsync(__int64 a1, _BYTE *a2, __int64 a3)
{
  void *v5; // rax
  int v7; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v8; // [rsp+C0h] [rbp+18h] BYREF

  v8 = a3;
  v5 = operator new(0x62uLL);
  v7 = 0;
  SnapFlyoutHost::ShowSnapBarOnMonitorAsync__InitCoro_2(&v7, (__int64)v5, a2, &v8, a1);
  return a2;
}
