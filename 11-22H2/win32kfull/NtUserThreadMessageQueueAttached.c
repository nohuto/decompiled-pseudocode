/*
 * XREFs of NtUserThreadMessageQueueAttached @ 0x1C0094540
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserThreadMessageQueueAttached(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  int v7; // eax
  __int64 v9; // rax

  EnterCrit(0LL, 0LL);
  v6 = 0LL;
  if ( gptiCurrent )
  {
    *(_DWORD *)(gptiCurrent + 1272LL) &= ~0x200u;
    if ( a1 )
    {
      v9 = PtiFromThreadId(a1);
      if ( v9 )
      {
        v3 = *(_QWORD *)(v9 + 432);
        LOBYTE(v6) = *(_QWORD *)(gptiCurrent + 432LL) == v3;
      }
      else
      {
        UserSetLastError(87LL);
      }
    }
    else
    {
      v2 = *(_QWORD *)(gptiCurrent + 432LL);
      v4 = 1LL;
      v7 = 0;
      v3 = *(_QWORD *)(v2 + 480);
      if ( v3 && (v7 = 1, *(_QWORD *)(v3 + 1528))
        || (v3 = *(_QWORD *)(v2 + 488)) != 0 && ((unsigned int)(v7 + 1) > 1 || *(_QWORD *)(v3 + 1536)) )
      {
        v6 = 1LL;
      }
    }
  }
  UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
  return v6;
}
