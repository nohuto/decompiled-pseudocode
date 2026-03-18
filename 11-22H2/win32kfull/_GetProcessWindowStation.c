/*
 * XREFs of _GetProcessWindowStation @ 0x1C006B240
 * Callers:
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C0018F04 (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x1C004BBD8 (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     xxxDwmStopRedirection @ 0x1C0057060 (xxxDwmStopRedirection.c)
 *     zzzDwmStartRedirection @ 0x1C00588D8 (zzzDwmStartRedirection.c)
 *     EditionOpenInputDesktopEntryPoint @ 0x1C006B0C0 (EditionOpenInputDesktopEntryPoint.c)
 *     DesktopFromDesktopWindow @ 0x1C006CAB4 (DesktopFromDesktopWindow.c)
 *     NtUserSetImeInfoEx @ 0x1C00B8970 (NtUserSetImeInfoEx.c)
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetProcessWindowStation(_QWORD *a1)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v3; // r9

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v3 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v3 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( a1 )
    *a1 = *(_QWORD *)(v3 + 664);
  return *(_QWORD *)(v3 + 656);
}
