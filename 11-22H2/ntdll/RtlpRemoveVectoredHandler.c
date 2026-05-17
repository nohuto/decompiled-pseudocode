/*
 * XREFs of RtlpRemoveVectoredHandler @ 0x1800854A0
 * Callers:
 *     RtlRemoveVectoredExceptionHandler @ 0x180085490 (RtlRemoveVectoredExceptionHandler.c)
 *     RtlRemoveVectoredContinueHandler @ 0x1800E3C10 (RtlRemoveVectoredContinueHandler.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002C570 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180032FA0 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlProtectHeap @ 0x180049280 (RtlProtectHeap.c)
 */

__int64 __fastcall RtlpRemoveVectoredHandler(__int64 a1, unsigned int a2)
{
  __int64 v4; // rsi
  __int64 *v5; // rdi
  __int64 i; // rbx
  int v7; // edi
  signed __int64 v8; // rcx
  bool v9; // cc
  signed __int64 v10; // rcx
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rdi
  void *v14; // rcx
  int v15; // edx
  int v17; // ecx

  v4 = 3LL * a2;
  v5 = (__int64 *)(&LdrpVectorHandlerList + 3 * a2 + 1);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + 3 * a2));
  for ( i = *v5; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == v5 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v4));
      return 0LL;
    }
    if ( i == a1 )
      break;
  }
  if ( !LdrControlFlowGuardEnforced() )
    goto LABEL_9;
  RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
  v7 = *(_DWORD *)LdrpMrdataHeapUnprotected;
  if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
  {
    RtlProtectHeap((__m128i *)LdrpMrdataHeap, 0);
    goto LABEL_8;
  }
  if ( v7 == -1 )
    goto LABEL_35;
LABEL_8:
  *(_DWORD *)LdrpMrdataHeapUnprotected = v7 + 1;
  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
LABEL_9:
  *(_DWORD *)(i + 24) = 1;
  v8 = _InterlockedExchangeAdd64(*(volatile signed __int64 **)(i + 16), 0xFFFFFFFFFFFFFFFFuLL);
  v9 = v8 <= 1;
  v10 = v8 - 1;
  if ( !v9 )
  {
    if ( LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v17 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_35;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v17 - 1;
      if ( v17 == 1 )
        RtlProtectHeap((__m128i *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    v13 = 0LL;
    goto LABEL_16;
  }
  if ( v10 )
    __fastfail(0xEu);
  LdrProtectMrdata(0);
  v11 = *(_QWORD **)i;
  v12 = *(_QWORD **)(i + 8);
  if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || *v12 != i )
    __fastfail(3u);
  *v12 = v11;
  v11[1] = v12;
  if ( v12 == v11 )
    _interlockedbittestandreset((volatile signed __int32 *)&NtCurrentPeb()->80, a2 + 2);
  v13 = i;
LABEL_16:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v4));
  if ( v13 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(_QWORD *)(v13 + 16));
    v14 = LdrControlFlowGuardEnforced() ? (void *)LdrpMrdataHeap : NtCurrentPeb()->ProcessHeap;
    RtlFreeHeap((__int64)v14, 0, i);
    LdrProtectMrdata(1);
    if ( LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v15 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        *(_DWORD *)LdrpMrdataHeapUnprotected = v15 - 1;
        if ( v15 == 1 )
          RtlProtectHeap((__m128i *)LdrpMrdataHeap, 1);
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        return 1LL;
      }
LABEL_35:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
  }
  return 1LL;
}
