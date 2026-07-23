/*
 * XREFs of RtlSleepConditionVariableSRW @ 0x18006AF50
 * Callers:
 *     TpTrimPools @ 0x18006AC30 (TpTrimPools.c)
 *     _LdrpInitialize @ 0x18007B2BC (_LdrpInitialize.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     RtlpWakeSingle @ 0x18006B124 (RtlpWakeSingle.c)
 *     RtlpOptimizeConditionVariableWaitList @ 0x18006B1EC (RtlpOptimizeConditionVariableWaitList.c)
 *     NtWaitForAlertByThreadId @ 0x1800A7BE0 (NtWaitForAlertByThreadId.c)
 */

NTSTATUS __cdecl RtlSleepConditionVariableSRW(
        PRTL_CONDITION_VARIABLE ConditionVariable,
        PRTL_SRWLOCK SRWLock,
        PLARGE_INTEGER Timeout,
        ULONG Flags)
{
  signed __int64 Ptr; // rbx
  ULONG v8; // esi
  signed __int32 v9; // eax
  unsigned __int64 v10; // r14
  _QWORD *v11; // rax
  signed __int64 v12; // rax
  int i; // edx
  NTSTATUS v14; // ebx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  _QWORD v21[4]; // [rsp+20h] [rbp-30h] BYREF
  signed __int32 v22; // [rsp+44h] [rbp-Ch] BYREF
  PRTL_SRWLOCK v23; // [rsp+48h] [rbp-8h]

  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741584;
  _m_prefetchw(ConditionVariable);
  Ptr = (signed __int64)ConditionVariable->Ptr;
  v22 = 2;
  v8 = Flags & 1;
  v21[2] = 0LL;
  v9 = 2;
  v21[3] = NtCurrentTeb()->ClientId.UniqueThread;
  if ( (Flags & 1) == 0 )
    v9 = 3;
  v23 = SRWLock;
  v22 = v9;
  while ( 1 )
  {
    v10 = (unsigned __int64)v21 | Ptr & 0xF;
    v11 = v21;
    v21[0] = Ptr & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (Ptr & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      v11 = 0LL;
    v21[1] = v11;
    if ( (Ptr & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      v10 |= 8uLL;
    v12 = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, v10, Ptr);
    if ( Ptr == v12 )
      break;
    Ptr = v12;
  }
  if ( (Flags & 1) != 0 )
    RtlReleaseSRWLockShared(SRWLock);
  else
    RtlReleaseSRWLockExclusive(SRWLock);
  if ( (((unsigned __int8)Ptr ^ (unsigned __int8)v10) & 8) != 0 )
    RtlpOptimizeConditionVariableWaitList(ConditionVariable, v10);
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    if ( MEMORY[0x7FFE0297] )
    {
      v17 = __rdtsc();
      v18 = v17 + (unsigned int)ConditionVariableSpinCycleCount;
      while ( 1 )
      {
        __asm { monitorx rax, rcx, rdx }
        if ( (v22 & 2) == 0 )
          break;
        v19 = v17;
        v20 = __rdtsc();
        v17 = v20;
        if ( v20 <= v19 || v20 >= v18 )
          break;
        __asm { mwaitx  rax, rcx, rbx }
      }
    }
    else
    {
      for ( i = 0; (v22 & 2) != 0 && i != ConditionVariableSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6]; ++i )
        _mm_pause();
    }
  }
  v14 = 0;
  if ( !_interlockedbittestandreset(&v22, 1u) )
  {
    _InterlockedOr(&v22, 4u);
LABEL_22:
    if ( (v22 & 4) != 0 )
      goto LABEL_23;
    goto LABEL_27;
  }
  v14 = NtWaitForAlertByThreadId(SRWLock, Timeout);
  if ( v14 != 258 )
    goto LABEL_22;
LABEL_27:
  if ( (unsigned __int8)RtlpWakeSingle(ConditionVariable, v21) )
  {
    if ( v14 != 258 )
      v14 = 0;
    goto LABEL_24;
  }
  do
    NtWaitForAlertByThreadId(SRWLock, 0LL);
  while ( (v22 & 4) == 0 );
LABEL_23:
  v14 = 0;
LABEL_24:
  if ( v8 )
    RtlAcquireSRWLockShared(SRWLock);
  else
    RtlAcquireSRWLockExclusive(SRWLock);
  return v14;
}
