/*
 * XREFs of UserGlobalAtomTableCallout @ 0x1C0059240
 * Callers:
 *     DeleteProperties @ 0x1C0056AA0 (DeleteProperties.c)
 *     RealInternalRemoveProp @ 0x1C0090B90 (RealInternalRemoveProp.c)
 *     W32CalloutDispatch @ 0x1C00DE840 (W32CalloutDispatch.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0046340 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ApiSetIsCurrentProcessWinstaLocked @ 0x1C0096D0C (ApiSetIsCurrentProcessWinstaLocked.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     IsProcessWin32kLockedOut @ 0x1C0131FD0 (IsProcessWin32kLockedOut.c)
 */

__int64 UserGlobalAtomTableCallout()
{
  __int64 v0; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdi
  __int64 CurrentProcess; // rax
  __int64 ProcessJob; // rax
  __int64 v9; // rsi
  _QWORD *i; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 ProcessWin32WindowStation; // rdx
  __int64 v16; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0LL;
  v19 = 0LL;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)CurrentThread);
  v6 = ThreadWin32Thread;
  if ( ThreadWin32Thread )
  {
    if ( (*(_DWORD *)(ThreadWin32Thread + 488) & 0x20000000) != 0 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 760LL);
      if ( (*(_DWORD *)(v4 + 24) & 0x20) != 0 )
        return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 760LL) + 16LL);
    }
  }
  CurrentProcess = PsGetCurrentProcess(v4, v3, v5);
  ProcessJob = PsGetProcessJob(CurrentProcess);
  v9 = ProcessJob;
  if ( !v6 && ProcessJob && (PsGetJobUIRestrictionsClass(ProcessJob) & 0x20) != 0 )
  {
    if ( qword_1C0295278 && (int)qword_1C0295278() >= 0 )
    {
      for ( i = gpJobsList; i && i[1] != v9; i = (_QWORD *)*i )
        ;
      return i[2];
    }
    if ( (unsigned __int8)IsProcessWin32kLockedOut(-1LL) )
    {
      UserSetLastError(5LL);
      return v0;
    }
  }
  if ( qword_1C0295E88 )
  {
    if ( (int)qword_1C0295E88() >= 0 )
    {
      v14 = PsGetCurrentProcess(v12, v11, v13);
      ProcessWin32WindowStation = PsGetProcessWin32WindowStation(v14);
      if ( qword_1C0295E90 )
      {
        if ( (int)qword_1C0295E90(CurrentThread, ProcessWin32WindowStation, 32LL, &v19, 1) >= 0 )
          return *(_QWORD *)(v19 + 168);
      }
    }
  }
  if ( ((unsigned __int8)IsProcessWin32kLockedOut(-1LL)
     || (CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v16)) == 0LL
     || !*CurrentProcessWin32Process
     || !(unsigned int)ApiSetIsCurrentProcessWinstaLocked())
    && qword_1C0295E98
    && (int)qword_1C0295E98() >= 0
    && qword_1C0295EA0 )
  {
    return qword_1C0295EA0();
  }
  return v0;
}
