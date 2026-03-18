/*
 * XREFs of NtUserCopyAcceleratorTable @ 0x1C00F6A80
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserCopyAcceleratorTable(__int64 a1, char *a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v15; // rcx
  char v16; // [rsp+88h] [rbp+20h] BYREF

  v3 = (int)a3;
  v6 = 0;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v16);
  v7 = HMValidateHandle(a1, 8u);
  v11 = v7;
  if ( v7 )
  {
    if ( a2 )
    {
      if ( v3 > 0x2AAAAAAAAAAAAAAALL )
        ExRaiseAccessViolation();
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v9);
      ProbeForWrite(a2, 6 * v3, CurrentProcessWow64Process != 0 ? 1 : 4);
      if ( (int)v3 > *(_DWORD *)(v11 + 24) )
        LODWORD(v3) = *(_DWORD *)(v11 + 24);
      while ( v6 < (int)v3 )
      {
        v15 = 3LL * v6;
        *(_BYTE *)(v11 + 2 * v15 + 29) = 0;
        *(_DWORD *)&a2[2 * v15] = *(_DWORD *)(v11 + 6LL * v6 + 28);
        *(_WORD *)&a2[2 * v15 + 4] = *(_WORD *)(v11 + 6LL * v6 + 32);
        a2[2 * v15] &= ~0x80u;
        ++v6;
      }
    }
    else
    {
      LODWORD(v3) = *(_DWORD *)(v7 + 24);
    }
  }
  else
  {
    LODWORD(v3) = 0;
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v16, v8, v10);
  UserSessionSwitchLeaveCrit(v12);
  return (unsigned int)v3;
}
