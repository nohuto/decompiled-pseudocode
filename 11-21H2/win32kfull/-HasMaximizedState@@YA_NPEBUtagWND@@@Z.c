/*
 * XREFs of ?HasMaximizedState@@YA_NPEBUtagWND@@@Z @ 0x1C006F94C
 * Callers:
 *     GetNewMonitor @ 0x1C006F304 (GetNewMonitor.c)
 *     xxxInheritWindowMonitor @ 0x1C0075834 (xxxInheritWindowMonitor.c)
 *     _anonymous_namespace_::xxxMigrateWindow @ 0x1C00B28A8 (_anonymous_namespace_--xxxMigrateWindow.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01E0A3C (xxxAppAdjustDpiCandidateRect.c)
 * Callees:
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C006F980 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
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
