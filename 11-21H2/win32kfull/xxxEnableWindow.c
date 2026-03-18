/*
 * XREFs of xxxEnableWindow @ 0x1C00AEC3C
 * Callers:
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     NtUserEnableWindow @ 0x1C00AEB60 (NtUserEnableWindow.c)
 *     xxxEnableScrollBar @ 0x1C00C6A60 (xxxEnableScrollBar.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00AECA8 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     IsNonImmersiveBand @ 0x1C00AEDA4 (IsNonImmersiveBand.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01D9928 (ExemptedFromImmersiveRestrictions.c)
 */

__int64 __fastcall xxxEnableWindow(struct tagWND *a1, int a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx

  v5 = 0;
  if ( (unsigned int)IsNonImmersiveBand(a1)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4),
        !(unsigned int)IsDesktopApp(CurrentProcessWin32Process))
    || (unsigned int)ExemptedFromImmersiveRestrictions(gptiCurrent) )
  {
    LOBYTE(v5) = a2 != 0;
    return xxxEnableWindowWorker(a1, v5);
  }
  else
  {
    UserSetLastError(5LL, v8);
    return (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 31LL) >> 3) & 1;
  }
}
