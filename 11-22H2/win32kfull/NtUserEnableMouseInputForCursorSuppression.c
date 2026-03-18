/*
 * XREFs of NtUserEnableMouseInputForCursorSuppression @ 0x1C003D7F0
 * Callers:
 *     <none>
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C003D8F0 (TransitionCursorSuppressionState.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserEnableMouseInputForCursorSuppression(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx

  EnterCrit(0LL, 0LL);
  v5 = 0LL;
  if ( (a1 != 0) != a1 )
  {
    UserSetLastError(87LL);
    goto LABEL_6;
  }
  v6 = (unsigned int)(gCursorSuppressionState - 1);
  if ( gCursorSuppressionState == 1 )
    goto LABEL_7;
  v6 = (unsigned int)(gCursorSuppressionState - 2);
  if ( gCursorSuppressionState == 2 )
    goto LABEL_4;
  v6 = (unsigned int)(gCursorSuppressionState - 4);
  if ( gCursorSuppressionState == 4 )
    goto LABEL_4;
  v6 = (unsigned int)(gCursorSuppressionState - 5);
  if ( gCursorSuppressionState == 5 )
  {
LABEL_7:
    if ( !a1 )
      goto LABEL_5;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    v9 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v9 = ((unsigned __int128)-(__int128)*(unsigned __int64 *)CurrentProcessWin32Process >> 64) & CurrentProcessWin32Process;
    *(_DWORD *)(v9 + 816) &= ~0x80000u;
    v10 = 2LL;
LABEL_11:
    TransitionCursorSuppressionState(v10);
    goto LABEL_5;
  }
  v6 = (unsigned int)(gCursorSuppressionState - 6);
  if ( gCursorSuppressionState != 6 && gCursorSuppressionState != 8 )
    goto LABEL_5;
LABEL_4:
  if ( !a1 )
  {
    v11 = PsGetCurrentProcessWin32Process(v6);
    v12 = v11;
    if ( v11 )
      v12 = -(__int64)(*(_QWORD *)v11 != 0LL) & v11;
    *(_DWORD *)(v12 + 816) |= 0x80000u;
    v10 = 1LL;
    goto LABEL_11;
  }
LABEL_5:
  v5 = 1LL;
LABEL_6:
  UserSessionSwitchLeaveCrit(v6, v2, v3, v4);
  return v5;
}
