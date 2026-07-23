/*
 * XREFs of TppPoolAddWorker @ 0x180014DA0
 * Callers:
 *     TppWorkerThread @ 0x180016A00 (TppWorkerThread.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall TppPoolAddWorker(_RTL_SRWLOCK *a1, __int64 a2)
{
  _RTL_SRWLOCK *v4; // rax
  _RTL_SRWLOCK **Value; // rdx

  *(_DWORD *)(a2 + 40) = NtCurrentTeb()->ClientId.UniqueThread;
  *(_QWORD *)(a2 + 48) = a1;
  RtlAcquireSRWLockExclusive(a1 + 9);
  v4 = (_RTL_SRWLOCK *)(a2 + 16);
  Value = (_RTL_SRWLOCK **)a1[13].Value;
  if ( *Value != &a1[12] )
    __fastfail(3u);
  v4->Value = (unsigned __int64)&a1[12];
  *(_QWORD *)(a2 + 24) = Value;
  *Value = v4;
  a1[13].Value = (unsigned __int64)v4;
  RtlReleaseSRWLockExclusive(a1 + 9);
}
