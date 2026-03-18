/*
 * XREFs of NtUserMapVirtualKeyEx @ 0x1C006BAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 *     InternalMapVirtualKeyEx @ 0x1C006BBB0 (InternalMapVirtualKeyEx.c)
 *     HKLtoPKL @ 0x1C006C150 (HKLtoPKL.c)
 */

__int64 __fastcall NtUserMapVirtualKeyEx(unsigned int a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct tagTHREADINFO *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax

  v12 = 0;
  if ( IsEtwUserCritEnabled() )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v14 = SGDGetUserSessionState(v9, v8, v10, v11);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v14 + 8));
  EtwTraceAcquiredSharedUserCrit(v16, v15, v17, v18);
  v19 = PtiCurrentShared();
  if ( a4 )
    v24 = HKLtoPKL(v19, a3);
  else
    v24 = *((_QWORD *)v19 + 55);
  if ( v24 )
    v12 = InternalMapVirtualKeyEx(a1, a2, *(_QWORD *)(*(_QWORD *)(v24 + 48) + 32LL));
  UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
  return v12;
}
