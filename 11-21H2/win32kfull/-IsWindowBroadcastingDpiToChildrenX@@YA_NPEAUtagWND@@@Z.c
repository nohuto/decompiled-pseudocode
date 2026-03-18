/*
 * XREFs of ?IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z @ 0x1C006A6D8
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C004DF70 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     NtUserIsWindowBroadcastingDpiToChildren @ 0x1C0106450 (NtUserIsWindowBroadcastingDpiToChildren.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01E0A3C (xxxAppAdjustDpiCandidateRect.c)
 *     xxxTrackPopupMenuEx @ 0x1C024614C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 */

char __fastcall IsWindowBroadcastingDpiToChildrenX(struct tagWND *a1)
{
  char v1; // r9
  int v2; // edx
  __int64 v3; // r10

  v1 = 0;
  v2 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF;
  if ( v2 == 3 || v2 == 2 && (unsigned int)IsTopLevelWindow(a1) && (*(_DWORD *)(v3 + 320) & 0x100000) != 0 )
    return 1;
  return v1;
}
