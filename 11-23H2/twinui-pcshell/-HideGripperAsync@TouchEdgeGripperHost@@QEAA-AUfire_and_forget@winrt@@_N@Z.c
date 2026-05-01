/*
 * XREFs of ?HideGripperAsync@TouchEdgeGripperHost@@QEAA?AUfire_and_forget@winrt@@_N@Z @ 0x18021F95C
 * Callers:
 *     ?HideTouchEdgeGripper@TouchEdgeGestureManager@@UEAAJ_N@Z @ 0x18064D490 (-HideTouchEdgeGripper@TouchEdgeGestureManager@@UEAAJ_N@Z.c)
 *     ?StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ @ 0x18064DA00 (-StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     TouchEdgeGripperHost::HideGripperAsync$_InitCoro$2 @ 0x18021F6B8 (TouchEdgeGripperHost--HideGripperAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall TouchEdgeGripperHost::HideGripperAsync(__int64 a1, _BYTE *a2, char a3)
{
  void *v5; // rax
  int v7; // [rsp+98h] [rbp+10h] BYREF
  char v8; // [rsp+A0h] [rbp+18h] BYREF

  v8 = a3;
  v5 = operator new(0x4BuLL);
  v7 = 0;
  TouchEdgeGripperHost::HideGripperAsync__InitCoro_2(&v7, (__int64)v5, a2, &v8, a1);
  return a2;
}
