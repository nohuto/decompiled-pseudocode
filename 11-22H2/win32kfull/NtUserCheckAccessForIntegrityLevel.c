/*
 * XREFs of NtUserCheckAccessForIntegrityLevel @ 0x1C01CD450
 * Callers:
 *     <none>
 * Callees:
 *     LockProcessByClientId @ 0x1C004FEE0 (LockProcessByClientId.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserCheckAccessForIntegrityLevel(__int64 a1, __int64 a2, _DWORD *a3)
{
  void *v4; // rsi
  void *v5; // rbx
  ULONG64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  __int64 ProcessWin32Process; // rax
  __int64 v11; // rcx
  ULONG64 v12; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rax
  ULONG64 v15; // rax
  PVOID v16; // rcx
  PVOID v18; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v4 = (void *)(int)a2;
  v5 = (void *)(int)a1;
  EnterSharedCrit(a1, a2, a3);
  v18 = 0LL;
  Object = 0LL;
  if ( (int)LockProcessByClientId(v5, (PEPROCESS *)&Object) < 0 )
    goto LABEL_2;
  ProcessWin32Process = PsGetProcessWin32Process(Object);
  v12 = ProcessWin32Process;
  if ( ProcessWin32Process )
  {
    v11 = -*(_QWORD *)ProcessWin32Process;
    v6 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
    v12 = v6 & ProcessWin32Process;
  }
  if ( !v12 )
    goto LABEL_2;
  if ( PsGetCurrentProcess(v11, v6, v7) != gpepCSRSS )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(gpepCSRSS);
    if ( CurrentProcessWin32Process )
    {
      v6 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      CurrentProcessWin32Process &= v6;
    }
    if ( v12 != CurrentProcessWin32Process )
    {
      v9 = -1073741790;
      goto LABEL_17;
    }
  }
  if ( (int)LockProcessByClientId(v4, (PEPROCESS *)&v18) < 0
    || (v14 = PsGetProcessWin32Process(v18)) == 0
    || (v6 = -(__int64)(*(_QWORD *)v14 != 0LL), (v15 = v6 & v14) == 0) )
  {
LABEL_2:
    v9 = -1073741811;
    goto LABEL_17;
  }
  v7 = (unsigned __int8)CheckAccess(v12 + 888, v15 + 888);
  v6 = (ULONG64)a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v6 = MmUserProbeAddress;
  *(_DWORD *)v6 = *(_DWORD *)v6;
  *a3 = v7;
  v9 = 0;
LABEL_17:
  if ( Object )
    ObfDereferenceObject(Object);
  v16 = v18;
  if ( v18 )
    ObfDereferenceObject(v18);
  UserSessionSwitchLeaveCrit(v16, v6, v7, v8);
  return v9;
}
