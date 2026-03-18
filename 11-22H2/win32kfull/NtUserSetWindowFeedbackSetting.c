/*
 * XREFs of NtUserSetWindowFeedbackSetting @ 0x1C00C6170
 * Callers:
 *     <none>
 * Callees:
 *     FeedbackSetWindowSetting @ 0x1C00C62CC (FeedbackSetWindowSetting.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     FeedbackClearWindowSetting @ 0x1C01ADB9C (FeedbackClearWindowSetting.c)
 */

__int64 __fastcall NtUserSetWindowFeedbackSetting(__int64 a1, int a2, int a3, int a4, _DWORD *Address)
{
  int v9; // edi
  unsigned int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r15
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // rdx
  int v18; // ebx
  int v19; // eax
  __int64 v21; // rcx

  v9 = 0;
  v10 = 0;
  EnterCrit(0LL, 0LL);
  v15 = ValidateHwnd(a1);
  if ( !v15 )
    goto LABEL_17;
  if ( !a2 || a2 > 13 || a4 && !Address || a3 || (a4 & 0xFFFFFFFB) != 0 )
  {
    v21 = 87LL;
    goto LABEL_21;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
  v17 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v17 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( v17 != *(_QWORD *)(*(_QWORD *)(v15 + 16) + 424LL) )
  {
    UserSetLastError(5LL);
    v21 = 0LL;
LABEL_21:
    UserSetLastError(v21);
    goto LABEL_17;
  }
  if ( Address )
  {
    v18 = 0;
    ProbeForRead(Address, 4uLL, 4u);
    v10 = *Address;
  }
  else
  {
    v18 = 1;
  }
  if ( v18 )
    v19 = FeedbackClearWindowSetting(v15, (unsigned int)a2);
  else
    v19 = FeedbackSetWindowSetting(v15, (unsigned int)a2, v10);
  v9 = v19;
LABEL_17:
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v9;
}
