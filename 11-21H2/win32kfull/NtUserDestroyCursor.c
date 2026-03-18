/*
 * XREFs of NtUserDestroyCursor @ 0x1C0021300
 * Callers:
 *     <none>
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C00233C4 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

_BOOL8 __fastcall NtUserDestroyCursor(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  _BOOL8 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v10; // rcx
  char v11; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v11);
  LOBYTE(v4) = 3;
  v5 = HMValidateHandle(a1, v4);
  v6 = 0LL;
  v7 = v5;
  if ( v5 )
  {
    if ( a2 )
    {
      if ( a2 != 1 )
      {
        v10 = 87LL;
LABEL_11:
        UserSetLastError(v10);
        goto LABEL_6;
      }
    }
    else if ( PsGetCurrentProcess() != gpepCSRSS && *(_QWORD *)(v7 + 24) != PsGetCurrentProcessWin32Process() )
    {
LABEL_10:
      v10 = 5LL;
      goto LABEL_11;
    }
    if ( *(_QWORD *)(v7 + 48) == v7 )
    {
      v6 = _DestroyCursor((struct tagCURSOR *)v7, a2);
      goto LABEL_6;
    }
    goto LABEL_10;
  }
LABEL_6:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v11);
  UserSessionSwitchLeaveCrit(v8);
  return v6;
}
