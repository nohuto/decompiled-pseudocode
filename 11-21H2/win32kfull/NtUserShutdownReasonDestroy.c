/*
 * XREFs of NtUserShutdownReasonDestroy @ 0x1C011F510
 * Callers:
 *     <none>
 * Callees:
 *     InternalRemoveProp @ 0x1C0069510 (InternalRemoveProp.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall NtUserShutdownReasonDestroy(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rax
  __int64 v8; // rdx

  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = v2;
  if ( v2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    v3 = *(_QWORD *)(v5 + 16);
    if ( *(_QWORD *)(v3 + 424) == CurrentProcessWin32Process )
    {
      v7 = InternalRemoveProp(v5, (unsigned __int16)gatomShutdownBlockingReason, 1u);
      if ( v7 )
      {
        Win32FreePool(v7);
        v4 = 1LL;
      }
      else
      {
        UserSetLastError(87LL, v8);
      }
    }
    else
    {
      v4 = 5LL;
    }
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
