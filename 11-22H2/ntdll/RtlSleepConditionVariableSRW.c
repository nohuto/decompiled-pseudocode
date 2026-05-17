/*
 * XREFs of RtlSleepConditionVariableSRW @ 0x180069740
 * Callers:
 *     TpTrimPools @ 0x180069420 (TpTrimPools.c)
 *     _LdrpInitialize @ 0x180073F6C (_LdrpInitialize.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpOptimizeConditionVariableWaitList @ 0x180069918 (RtlpOptimizeConditionVariableWaitList.c)
 *     RtlpWakeSingle @ 0x18006995C (RtlpWakeSingle.c)
 *     NtWaitForAlertByThreadId @ 0x1800A29E0 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlSleepConditionVariableSRW(signed __int64 *a1, volatile signed __int64 *a2, __int64 a3, int a4)
{
  signed __int64 v7; // rbx
  int v8; // esi
  signed __int32 v9; // eax
  unsigned __int64 v10; // r14
  _QWORD *v11; // rax
  signed __int64 v12; // rax
  unsigned __int64 i; // rdx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r8
  unsigned int v16; // ebx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  _QWORD v21[4]; // [rsp+20h] [rbp-30h] BYREF
  signed __int32 v22; // [rsp+44h] [rbp-Ch] BYREF
  volatile signed __int64 *v23; // [rsp+48h] [rbp-8h]

  if ( (a4 & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  _m_prefetchw(a1);
  v7 = *a1;
  v22 = 2;
  v8 = a4 & 1;
  v21[2] = 0LL;
  v9 = 2;
  v21[3] = NtCurrentTeb()->ClientId.UniqueThread;
  if ( (a4 & 1) == 0 )
    v9 = 3;
  v23 = a2;
  v22 = v9;
  while ( 1 )
  {
    v10 = (unsigned __int64)v21 | v7 & 0xF;
    v11 = v21;
    v21[0] = v7 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (v7 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      v11 = 0LL;
    v21[1] = v11;
    if ( (v7 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      v10 |= 8uLL;
    v12 = _InterlockedCompareExchange64(a1, v10, v7);
    if ( v7 == v12 )
      break;
    v7 = v12;
  }
  if ( (a4 & 1) != 0 )
    RtlReleaseSRWLockShared(a2);
  else
    RtlReleaseSRWLockExclusive(a2);
  if ( (((unsigned __int8)v7 ^ (unsigned __int8)v10) & 8) != 0 )
    RtlpOptimizeConditionVariableWaitList(a1, v10);
  v15 = 1LL;
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    if ( MEMORY[0x7FFE0297] )
    {
      v15 = __rdtsc();
      v14 = v15 + (unsigned int)ConditionVariableSpinCycleCount;
      while ( 1 )
      {
        i = 0LL;
        __asm { monitorx rax, rcx, rdx }
        if ( (v22 & 2) == 0 )
          break;
        v19 = v15;
        v20 = __rdtsc();
        i = (unsigned __int64)HIDWORD(v20) << 32;
        v15 = v20;
        if ( v20 <= v19 || v20 >= v14 )
          break;
        __asm { mwaitx  rax, rcx, rbx }
      }
    }
    else
    {
      for ( i = 0LL;
            (v22 & 2) != 0 && (_DWORD)i != ConditionVariableSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6];
            i = (unsigned int)(i + 1) )
      {
        _mm_pause();
      }
    }
  }
  v16 = 0;
  if ( !_interlockedbittestandreset(&v22, 1u) )
  {
    _InterlockedOr(&v22, 4u);
LABEL_22:
    if ( (v22 & 4) != 0 )
      goto LABEL_23;
    goto LABEL_27;
  }
  v16 = NtWaitForAlertByThreadId(a2, a3);
  if ( v16 != 258 )
    goto LABEL_22;
LABEL_27:
  if ( (unsigned __int8)RtlpWakeSingle(a1, v21) )
  {
    if ( v16 != 258 )
      v16 = 0;
    goto LABEL_24;
  }
  do
    NtWaitForAlertByThreadId(a2, 0LL);
  while ( (v22 & 4) == 0 );
LABEL_23:
  v16 = 0;
LABEL_24:
  if ( v8 )
    RtlAcquireSRWLockShared(a2, i, v15, v14);
  else
    RtlAcquireSRWLockExclusive(a2);
  return v16;
}
