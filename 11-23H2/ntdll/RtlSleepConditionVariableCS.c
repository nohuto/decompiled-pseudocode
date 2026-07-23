/*
 * XREFs of RtlSleepConditionVariableCS @ 0x1800692A0
 * Callers:
 *     EtwpSwitchBuffer @ 0x18005A86C (EtwpSwitchBuffer.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180027020 (RtlLeaveCriticalSection.c)
 *     RtlpOptimizeConditionVariableWaitList @ 0x1800698F8 (RtlpOptimizeConditionVariableWaitList.c)
 *     RtlpWakeSingle @ 0x18006993C (RtlpWakeSingle.c)
 *     NtWaitForAlertByThreadId @ 0x1800A4AA0 (NtWaitForAlertByThreadId.c)
 */

NTSTATUS __cdecl RtlSleepConditionVariableCS(
        PRTL_CONDITION_VARIABLE ConditionVariable,
        PRTL_CRITICAL_SECTION CriticalSection,
        PLARGE_INTEGER Timeout)
{
  signed __int64 Ptr; // rbx
  NTSTATUS v7; // edi
  unsigned __int64 v8; // rsi
  _QWORD *v9; // rax
  signed __int64 v10; // rax
  int i; // edx
  NTSTATUS v12; // ebx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  _QWORD v19[4]; // [rsp+20h] [rbp-30h] BYREF
  signed __int32 v20; // [rsp+44h] [rbp-Ch] BYREF
  __int64 v21; // [rsp+48h] [rbp-8h]

  _m_prefetchw(ConditionVariable);
  Ptr = (signed __int64)ConditionVariable->Ptr;
  v7 = 0;
  v19[2] = 0LL;
  v21 = 0LL;
  v20 = 2;
  v19[3] = NtCurrentTeb()->ClientId.UniqueThread;
  while ( 1 )
  {
    v8 = (unsigned __int64)v19 | Ptr & 0xF;
    v9 = v19;
    v19[0] = Ptr & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (Ptr & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      v9 = 0LL;
    v19[1] = v9;
    if ( (Ptr & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      v8 |= 8uLL;
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, v8, Ptr);
    if ( Ptr == v10 )
      break;
    Ptr = v10;
  }
  RtlLeaveCriticalSection(CriticalSection);
  if ( (((unsigned __int8)Ptr ^ (unsigned __int8)v8) & 8) != 0 )
    RtlpOptimizeConditionVariableWaitList(ConditionVariable, v8);
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    if ( MEMORY[0x7FFE0297] )
    {
      v15 = __rdtsc();
      v16 = v15 + (unsigned int)ConditionVariableSpinCycleCount;
      while ( 1 )
      {
        __asm { monitorx rax, rcx, rdx }
        if ( (v20 & 2) == 0 )
          break;
        v17 = v15;
        v18 = __rdtsc();
        v15 = v18;
        if ( v18 <= v17 || v18 >= v16 )
          break;
        __asm { mwaitx  rax, rcx, rbx }
      }
    }
    else
    {
      for ( i = 0; (v20 & 2) != 0 && i != ConditionVariableSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6]; ++i )
        _mm_pause();
    }
  }
  v12 = 0;
  if ( !_interlockedbittestandreset(&v20, 1u) )
  {
    _InterlockedOr(&v20, 4u);
LABEL_17:
    if ( (v20 & 4) != 0 )
      goto LABEL_18;
    goto LABEL_26;
  }
  v12 = NtWaitForAlertByThreadId(CriticalSection, Timeout);
  if ( v12 != 258 )
    goto LABEL_17;
LABEL_26:
  if ( (unsigned __int8)RtlpWakeSingle(ConditionVariable, v19) )
  {
    if ( v12 != 258 )
      v12 = 0;
    v7 = v12;
  }
  else
  {
    do
      NtWaitForAlertByThreadId(CriticalSection, 0LL);
    while ( (v20 & 4) == 0 );
  }
LABEL_18:
  RtlEnterCriticalSection(CriticalSection);
  return v7;
}
