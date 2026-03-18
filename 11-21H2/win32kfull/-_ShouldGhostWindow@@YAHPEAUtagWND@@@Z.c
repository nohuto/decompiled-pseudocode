/*
 * XREFs of ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01456A8
 * Callers:
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00E1344 (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxRegisterGhostWindow @ 0x1C0144AD4 (xxxRegisterGhostWindow.c)
 * Callees:
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C0083884 (IsWindowBeingDestroyed.c)
 */

__int64 __fastcall _ShouldGhostWindow(struct tagWND *a1)
{
  __int64 v1; // rdi
  unsigned int v3; // ebx
  _QWORD *v4; // r14
  __int64 v5; // rcx

  v1 = *((_QWORD *)a1 + 2);
  v3 = 0;
  v4 = *(_QWORD **)(v1 + 424);
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a1)
    && (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x10) != 0
    && IsTopLevelWindow(v5)
    && *(_QWORD *)(v1 + 456) == grpdeskRitInput
    && **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) != *(_WORD *)(gpsi + 900LL)
    && !GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1378LL), 1u)
    && (*(_DWORD *)(*(_QWORD *)(v1 + 424) + 12LL) & 0x8000000) == 0
    && *v4 != gpepCSRSS
    && !(unsigned int)IsProcessDwm(*v4)
    && !PsGetProcessDebugPort(**(_QWORD **)(v1 + 424))
    && (*(_DWORD *)(v1 + 632) > 0x9900u || (*(_DWORD *)(v1 + 648) & 0x80000) == 0)
    && a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
  {
    return 1;
  }
  return v3;
}
