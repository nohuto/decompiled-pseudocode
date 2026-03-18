/*
 * XREFs of NtUserCopyAcceleratorTable @ 0x1C0013EE0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002D0F8 (HMValidateHandle.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserCopyAcceleratorTable(__int64 a1, char *a2, int a3)
{
  unsigned __int64 v3; // rdi
  int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 CurrentProcessWow64Process; // rax
  __int64 v16; // rcx
  char v17; // [rsp+88h] [rbp+20h] BYREF

  v3 = a3;
  v6 = 0;
  EnterSharedCrit();
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v17);
  LOBYTE(v7) = 8;
  v8 = HMValidateHandle(a1, v7);
  v9 = v8;
  if ( v8 )
  {
    if ( a2 )
    {
      if ( v3 > 0x2AAAAAAAAAAAAAAALL )
        ExRaiseAccessViolation();
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
      ProbeForWrite(a2, 6 * v3, CurrentProcessWow64Process != 0 ? 1 : 4);
      if ( (int)v3 > *(_DWORD *)(v9 + 24) )
        LODWORD(v3) = *(_DWORD *)(v9 + 24);
      while ( v6 < (int)v3 )
      {
        v16 = 3LL * v6;
        *(_BYTE *)(v9 + 2 * v16 + 29) = 0;
        *(_DWORD *)&a2[2 * v16] = *(_DWORD *)(v9 + 6LL * v6 + 28);
        *(_WORD *)&a2[2 * v16 + 4] = *(_WORD *)(v9 + 6LL * v6 + 32);
        a2[2 * v16] &= ~0x80u;
        ++v6;
      }
    }
    else
    {
      LODWORD(v3) = *(_DWORD *)(v8 + 24);
    }
  }
  else
  {
    LODWORD(v3) = 0;
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v17);
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return (unsigned int)v3;
}
