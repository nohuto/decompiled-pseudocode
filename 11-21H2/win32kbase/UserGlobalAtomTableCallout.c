/*
 * XREFs of UserGlobalAtomTableCallout @ 0x1C0089494
 * Callers:
 *     RealInternalRemoveProp @ 0x1C002C720 (RealInternalRemoveProp.c)
 *     W32CalloutDispatch @ 0x1C00E4D10 (W32CalloutDispatch.c)
 *     DeleteProperties @ 0x1C0149E10 (DeleteProperties.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ApiSetIsCurrentProcessWinstaLocked @ 0x1C0089700 (ApiSetIsCurrentProcessWinstaLocked.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     IsProcessWin32kLockedOut @ 0x1C01462F0 (IsProcessWin32kLockedOut.c)
 *     ApiSetEditionIsPerJobObjectAtomTableSupported @ 0x1C0208AF8 (ApiSetEditionIsPerJobObjectAtomTableSupported.c)
 */

__int64 UserGlobalAtomTableCallout()
{
  __int64 v0; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 CurrentProcess; // rax
  __int64 ProcessJob; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 ProcessWin32WindowStation; // rdx
  _QWORD *i; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0LL;
  v27 = 0LL;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)CurrentThread);
  v7 = ThreadWin32Thread;
  if ( ThreadWin32Thread )
  {
    if ( (*(_DWORD *)(ThreadWin32Thread + 488) & 0x20000000) != 0 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 768LL);
      if ( (*(_DWORD *)(v4 + 24) & 0x20) != 0 )
        return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 768LL) + 16LL);
    }
  }
  CurrentProcess = PsGetCurrentProcess(v4, v3, v5, v6);
  ProcessJob = PsGetProcessJob(CurrentProcess);
  v10 = ProcessJob;
  if ( !v7 && ProcessJob && (PsGetJobUIRestrictionsClass(ProcessJob) & 0x20) != 0 )
  {
    if ( (unsigned int)ApiSetEditionIsPerJobObjectAtomTableSupported() )
    {
      for ( i = gpJobsList; i && i[1] != v10; i = (_QWORD *)*i )
        ;
      return i[2];
    }
    if ( (unsigned __int8)IsProcessWin32kLockedOut(-1LL) )
    {
      UserSetLastError(5LL, v20, v21, v22);
      return v0;
    }
  }
  if ( qword_1C029C7B8 )
  {
    if ( (int)qword_1C029C7B8() >= 0 )
    {
      v15 = PsGetCurrentProcess(v12, v11, v13, v14);
      ProcessWin32WindowStation = PsGetProcessWin32WindowStation(v15);
      if ( qword_1C029C7C0 )
      {
        if ( (int)qword_1C029C7C0(CurrentThread, ProcessWin32WindowStation, 32LL, &v27, 1) >= 0 )
          return *(_QWORD *)(v27 + 168);
      }
    }
  }
  if ( ((unsigned __int8)IsProcessWin32kLockedOut(-1LL)
     || !PsGetCurrentProcessWin32Process(v24, v23, v25, v26)
     || !(unsigned int)ApiSetIsCurrentProcessWinstaLocked())
    && qword_1C029C7C8
    && (int)qword_1C029C7C8() >= 0
    && qword_1C029C7D0 )
  {
    return qword_1C029C7D0();
  }
  return v0;
}
