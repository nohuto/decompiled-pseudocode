/*
 * XREFs of NtUserUpdateInputContext @ 0x1C0105800
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?UpdateInputContext@@YAHPEAUtagIMC@@W4_UPDATEINPUTCONTEXTCLASS@@_K@Z @ 0x1C0105898 (-UpdateInputContext@@YAHPEAUtagIMC@@W4_UPDATEINPUTCONTEXTCLASS@@_K@Z.c)
 */

__int64 __fastcall NtUserUpdateInputContext(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  int updated; // ebx
  __int64 v11; // rcx
  char v13; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v13);
  if ( (*gpsi & 4) != 0 )
  {
    v7 = HMValidateHandle(a1, 0x11u);
    updated = 0;
    if ( v7 )
      updated = UpdateInputContext(v7, a2, a3);
  }
  else
  {
    UserSetLastError(120LL, v6);
    updated = 0;
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v13, v8, v9);
  UserSessionSwitchLeaveCrit(v11);
  return updated;
}
