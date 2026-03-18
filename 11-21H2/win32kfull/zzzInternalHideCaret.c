/*
 * XREFs of zzzInternalHideCaret @ 0x1C00C33BC
 * Callers:
 *     xxxBeginPaint @ 0x1C005E22C (xxxBeginPaint.c)
 *     NtUserHideCaret @ 0x1C0072630 (NtUserHideCaret.c)
 *     xxxScrollWindowEx @ 0x1C00BFE8C (xxxScrollWindowEx.c)
 *     zzzInternalDestroyCaret @ 0x1C00C32D8 (zzzInternalDestroyCaret.c)
 *     zzzHideCaret @ 0x1C023AA44 (zzzHideCaret.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C00C2950 (-UT_InvertCaret@@YAXXZ.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00C344C (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 */

void zzzInternalHideCaret()
{
  __int64 v0; // rbx
  int v1; // eax
  bool v2; // zf

  v0 = *(_QWORD *)(gptiCurrent + 432LL);
  v1 = *(_DWORD *)(v0 + 304);
  if ( (v1 & 1) != 0 )
  {
    UT_InvertCaret();
    v1 = *(_DWORD *)(v0 + 304);
  }
  v2 = ++*(_DWORD *)(v0 + 308) == 1;
  *(_DWORD *)(v0 + 304) = v1 & 0xFFFFFFFE;
  if ( v2 )
  {
    RemoveCaretTimer(*(struct tagWND **)(v0 + 296), (struct tagQ *)v0);
    xxxWindowEvent(0x8003u, *(struct tagWND **)(v0 + 296), -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
  }
}
