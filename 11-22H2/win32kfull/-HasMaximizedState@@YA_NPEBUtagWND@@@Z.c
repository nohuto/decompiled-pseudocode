/*
 * XREFs of ?HasMaximizedState@@YA_NPEBUtagWND@@@Z @ 0x1C0096E98
 * Callers:
 *     ?RemoveSemiMaximizedState@@YAXPEAUtagWND@@@Z @ 0x1C0096E48 (-RemoveSemiMaximizedState@@YAXPEAUtagWND@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C00D0C30 (xxxInheritWindowMonitor.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01BA7E4 (xxxAppAdjustDpiCandidateRect.c)
 * Callees:
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00D0C08 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 */

char __fastcall HasMaximizedState(const struct tagWND *a1)
{
  bool v1; // al
  __int64 v2; // rcx
  char v3; // dl
  __int64 v4; // rcx

  v1 = IsSemiMaximized(a1);
  v3 = 0;
  if ( v1 )
    return 1;
  v4 = *(_QWORD *)(v2 + 40);
  if ( (*(_BYTE *)(v4 + 31) & 1) != 0 || (*(_BYTE *)(v4 + 20) & 0x40) != 0 )
    return 1;
  return v3;
}
