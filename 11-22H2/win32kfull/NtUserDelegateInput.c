/*
 * XREFs of NtUserDelegateInput @ 0x1C00ABDA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1C01158D4 (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 */

__int64 __fastcall NtUserDelegateInput(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  int v21; // eax
  __int64 v23; // rcx

  EnterCrit(0LL, 0LL);
  v9 = ValidateHwnd(a4);
  v14 = 0LL;
  v15 = v9;
  if ( v9 )
  {
    if ( !a5 || (a5 & 0xFFFFEFF9) != 0 )
      goto LABEL_27;
    if ( a1 )
    {
      v16 = PtiFromThreadId(a1);
      if ( !v16 )
        goto LABEL_27;
    }
    else
    {
      v16 = gptiCurrent;
    }
    v17 = *(_QWORD *)(v15 + 40);
    if ( *(char *)(v17 + 19) >= 0 && *(char *)(v17 + 20) >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v19 = *(_QWORD *)(v15 + 16);
      v20 = *(_QWORD *)(v19 + 424);
      if ( v20 == CurrentProcessWin32Process )
      {
        v21 = *(_DWORD *)(v15 + 260);
        if ( v21 )
        {
          if ( !a3
            && *(_QWORD *)(v15 + 264) == v16
            && *(_QWORD *)(v16 + 1304) == a2
            && !*(_QWORD *)(v16 + 1312)
            && v21 == a5 )
          {
            v23 = 1242LL;
            goto LABEL_28;
          }
        }
        else if ( v20 == *(_QWORD *)(v16 + 424)
               && v19 != v16
               && !tagQ::AreMultipleThreadsAttached(*(tagQ **)(v16 + 432))
               && *(_QWORD *)(v12 + 456) == *(_QWORD *)(v16 + 456)
               && !*(_QWORD *)(v12 + 1304) )
        {
          *(_QWORD *)(v15 + 264) = v16;
          v14 = 1LL;
          *(_DWORD *)(v15 + 260) = a5;
          ++*(_DWORD *)(v16 + 1344);
          *(_DWORD *)(v16 + 1272) |= 0x2000u;
          *(_DWORD *)(v16 + 488) |= 0xC0u;
          *(_QWORD *)(v16 + 1304) = a2;
          *(_QWORD *)(v16 + 1312) = a3;
          ++*(_DWORD *)(v12 + 1344);
          goto LABEL_18;
        }
      }
      v23 = 5LL;
LABEL_28:
      UserSetLastError(v23);
      goto LABEL_18;
    }
LABEL_27:
    v23 = 87LL;
    goto LABEL_28;
  }
LABEL_18:
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v14;
}
