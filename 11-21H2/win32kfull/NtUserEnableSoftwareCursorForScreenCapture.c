/*
 * XREFs of NtUserEnableSoftwareCursorForScreenCapture @ 0x1C01F3150
 * Callers:
 *     <none>
 * Callees:
 *     ChangeComposableCursor @ 0x1C01CFAF0 (ChangeComposableCursor.c)
 */

__int64 __fastcall NtUserEnableSoftwareCursorForScreenCapture(unsigned int a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 CurrentProcess; // rax
  __int64 v6; // rcx

  EnterCrit(0LL, 0LL);
  v2 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v4, v3);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    if ( a1 != gbScreenCaptureSoftwareCursorEnabled )
    {
      ChangeComposableCursor(a1);
      gbScreenCaptureSoftwareCursorEnabled = a1;
    }
    v2 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v2;
}
