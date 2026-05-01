/*
 * XREFs of ?ShowGripperAsync@TouchEdgeGripperHost@@QEAA?AUfire_and_forget@winrt@@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_N@Z @ 0x18022024C
 * Callers:
 *     ?ShowTouchEdgeGripper@TouchEdgeGestureManager@@UEAAJHPEAUIImmersiveMonitor@@PEAUITouchEdgeGripperEventHandler@@@Z @ 0x18064D8D0 (-ShowTouchEdgeGripper@TouchEdgeGestureManager@@UEAAJHPEAUIImmersiveMonitor@@PEAUITouchEdgeGrippe.c)
 *     ?StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ @ 0x18064DA00 (-StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     TouchEdgeGripperHost::ShowGripperAsync$_InitCoro$2 @ 0x18021FF7C (TouchEdgeGripperHost--ShowGripperAsync$_InitCoro$2.c)
 */

_BYTE *TouchEdgeGripperHost::ShowGripperAsync(__int64 a1, _BYTE *a2, int a3, __int64 a4, ...)
{
  void *v7; // rax
  int v9; // [rsp+C8h] [rbp+10h] BYREF
  int v10; // [rsp+D0h] [rbp+18h] BYREF
  va_list va; // [rsp+E0h] [rbp+28h] BYREF

  va_start(va, a4);
  v10 = a3;
  v7 = operator new(0x53uLL);
  v9 = 0;
  TouchEdgeGripperHost::ShowGripperAsync__InitCoro_2(&v9, (__int64)v7, a2, &v10, a4, va, a1);
  return a2;
}
