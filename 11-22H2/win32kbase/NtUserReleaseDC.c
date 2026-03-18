/*
 * XREFs of NtUserReleaseDC @ 0x1C004C8C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 *     _ReleaseDC @ 0x1C005BF10 (_ReleaseDC.c)
 */

__int64 __fastcall NtUserReleaseDC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx

  if ( (unsigned int)IsEtwUserCritEnabled(a1, a2, a3, a4) )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v10 = SGDGetUserSessionState(v6, v5, v7, v8);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v10 + 8));
  EtwTraceAcquiredSharedUserCrit();
  v11 = (int)ReleaseDC(a1);
  UserSessionSwitchLeaveCrit();
  return v11;
}
