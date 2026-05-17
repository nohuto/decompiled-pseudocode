/*
 * XREFs of TppPoolAddWorker @ 0x18007B338
 * Callers:
 *     TppWorkerThread @ 0x180035760 (TppWorkerThread.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall TppPoolAddWorker(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdx

  *(_DWORD *)(a2 + 40) = NtCurrentTeb()->ClientId.UniqueThread;
  *(_QWORD *)(a2 + 48) = a1;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
  v4 = (_QWORD *)(a2 + 16);
  v5 = *(_QWORD **)(a1 + 104);
  if ( *v5 != a1 + 96 )
    __fastfail(3u);
  *v4 = a1 + 96;
  *(_QWORD *)(a2 + 24) = v5;
  *v5 = v4;
  *(_QWORD *)(a1 + 104) = v4;
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
}
