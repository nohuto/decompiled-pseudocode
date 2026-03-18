/*
 * XREFs of NtUserCountClipboardFormats @ 0x1C00CA370
 * Callers:
 *     <none>
 * Callees:
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1C00CA3D4 (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00CD268 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 */

__int64 __fastcall NtUserCountClipboardFormats(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  struct tagWINDOWSTATION *v5; // rdi
  __int64 CurrentProcessWin32Process; // rax

  EnterSharedCrit(a1, a2, a3);
  v3 = 0;
  v5 = CheckClipboardAccess();
  if ( v5 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    v3 = CountNumClipFormatForIL(*(_QWORD *)(CurrentProcessWin32Process + 880), v5);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v3;
}
