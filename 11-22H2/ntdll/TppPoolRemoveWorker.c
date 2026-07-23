/*
 * XREFs of TppPoolRemoveWorker @ 0x18007CFC0
 * Callers:
 *     TppWorkerThread @ 0x180035760 (TppWorkerThread.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall TppPoolRemoveWorker(_QWORD *a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1[6] + 72LL));
  v2 = a1[2];
  v3 = (_QWORD *)a1[3];
  if ( *(_QWORD **)(v2 + 8) != a1 + 2 || (_QWORD *)*v3 != a1 + 2 )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1[6] + 72LL));
}
