/*
 * XREFs of NtUserKillTimer @ 0x1C00712E0
 * Callers:
 *     <none>
 * Callees:
 *     FreeTimer @ 0x1C0070D80 (FreeTimer.c)
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C0071408 (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 */

__int64 __fastcall NtUserKillTimer(__int64 a1, __int64 a2)
{
  char v4; // bl
  AtomicExecutionCheck *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _DWORD *Data; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbp
  _QWORD **v14; // rsi
  __int64 v15; // rdi
  _QWORD *i; // r14
  int v17; // eax
  __int64 CurrentProcessWin32Process; // rax
  _DWORD *v19; // rax

  EnterCrit(0LL, 0LL);
  v4 = 0;
  AtomicExecutionCheck::EnforceConsistency(v5);
  Data = (_DWORD *)GetData(v7, v6, v8);
  if ( Data )
  {
    ++*Data;
    v4 = 1;
  }
  if ( a1 )
  {
    v13 = ValidateHwnd(a1);
    if ( !v13 )
    {
      v15 = 0LL;
      goto LABEL_13;
    }
  }
  else
  {
    v13 = 0LL;
  }
  v14 = (_QWORD **)((char *)&gTimerHashTable + 16 * (((unsigned __int8)a2 + BYTE1(v13)) & 0x3F));
  v15 = 0LL;
  for ( i = *v14; i != v14; i = (_QWORD *)*i )
  {
    if ( *(i - 3) == v13 && *(i - 2) == a2 )
    {
      v17 = *((_DWORD *)i - 16);
      if ( (v17 & 6) == 0 )
      {
        if ( (v17 & 0x40) != 0
          || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11),
              v11 = *(i - 11),
              CurrentProcessWin32Process == *(_QWORD *)(v11 + 424))
          || !v13 && (*(_DWORD *)(i - 8) & 4) == 0 )
        {
          FreeTimer((struct tagTIMER *)(i - 14));
          v15 = 1LL;
          break;
        }
      }
    }
  }
LABEL_13:
  if ( v4 )
  {
    v19 = (_DWORD *)GetData(v11, v10, v12);
    --*v19;
  }
  UserSessionSwitchLeaveCrit(v11);
  return v15;
}
