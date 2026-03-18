/*
 * XREFs of NtUserSetFallbackForeground @ 0x1C01FD2F0
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0023254 (IAMThreadAccessGranted.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _SetFallbackForeground @ 0x1C01CEEFC (_SetFallbackForeground.c)
 */

__int64 __fastcall NtUserSetFallbackForeground(__int64 a1, int a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rcx
  char v13; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v13);
  v5 = 0;
  if ( IAMThreadAccessGranted(gptiCurrent) )
  {
    if ( a1 )
    {
      v9 = ValidateHwnd(a1);
      if ( !v9 || (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x2FFF) == 0x29D || !IsTopLevelWindow(v9) || !a2 )
        goto LABEL_9;
    }
    else
    {
      v10 = 0LL;
      if ( a2 )
      {
LABEL_9:
        v6 = 87LL;
        goto LABEL_3;
      }
    }
    v5 = SetFallbackForeground(v10, a2);
    goto LABEL_12;
  }
  v6 = 5LL;
LABEL_3:
  UserSetLastError(v6, v4);
LABEL_12:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v13, v7, v8);
  UserSessionSwitchLeaveCrit(v11);
  return v5;
}
