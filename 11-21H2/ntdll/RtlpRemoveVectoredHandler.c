/*
 * XREFs of RtlpRemoveVectoredHandler @ 0x180088BC0
 * Callers:
 *     RtlRemoveVectoredExceptionHandler @ 0x180088BB0 (RtlRemoveVectoredExceptionHandler.c)
 *     RtlRemoveVectoredContinueHandler @ 0x1800E4D80 (RtlRemoveVectoredContinueHandler.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x18001C904 (LdrProtectMrdata.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlProtectHeap @ 0x180030B10 (RtlProtectHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x1800342E0 (LdrControlFlowGuardEnforced.c)
 */

__int64 __fastcall RtlpRemoveVectoredHandler(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  int v4; // r14d
  __int64 v6; // rsi
  __int64 *v7; // rdi
  __int64 i; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  int v12; // edi
  signed __int64 v13; // rcx
  bool v14; // cc
  signed __int64 v15; // rcx
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rdi
  void *v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r9
  int v26; // edx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r9
  int v31; // ecx

  v4 = a2;
  v6 = 3LL * (unsigned int)a2;
  v7 = (__int64 *)(&LdrpVectorHandlerList + 3 * (unsigned int)a2 + 1);
  RtlAcquireSRWLockExclusive((unsigned __int64)*(&LdrpVectorHandlerList + 3 * (unsigned int)a2), a2, a3, a4);
  for ( i = *v7; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == v7 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v6));
      return 0LL;
    }
    if ( i == a1 )
      break;
  }
  if ( !(unsigned int)LdrControlFlowGuardEnforced() )
    goto LABEL_9;
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v9, v10, v11);
  v12 = *(_DWORD *)LdrpMrdataHeapUnprotected;
  if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
  {
    RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    goto LABEL_8;
  }
  if ( v12 == -1 )
    goto LABEL_35;
LABEL_8:
  *(_DWORD *)LdrpMrdataHeapUnprotected = v12 + 1;
  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
LABEL_9:
  *(_DWORD *)(i + 24) = 1;
  v13 = _InterlockedExchangeAdd64(*(volatile signed __int64 **)(i + 16), 0xFFFFFFFFFFFFFFFFuLL);
  v14 = v13 <= 1;
  v15 = v13 - 1;
  if ( !v14 )
  {
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v28, v29, v30);
      v31 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_35;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v31 - 1;
      if ( v31 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    v18 = 0LL;
    goto LABEL_16;
  }
  if ( v15 )
    __fastfail(0xEu);
  LdrProtectMrdata(0, v9, v10, v11);
  v16 = *(_QWORD **)i;
  v17 = *(_QWORD **)(i + 8);
  if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || *v17 != i )
    __fastfail(3u);
  *v17 = v16;
  v16[1] = v17;
  if ( v17 == v16 )
    _interlockedbittestandreset((volatile signed __int32 *)&NtCurrentPeb()->80, v4 + 2);
  v18 = i;
LABEL_16:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v6));
  if ( v18 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(_QWORD *)(v18 + 16));
    v19 = (unsigned int)LdrControlFlowGuardEnforced() ? (void *)LdrpMrdataHeap : NtCurrentPeb()->ProcessHeap;
    RtlFreeHeap((__int64)v19, 0, i);
    LdrProtectMrdata(1, v20, v21, v22);
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v23, v24, v25);
      v26 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        *(_DWORD *)LdrpMrdataHeapUnprotected = v26 - 1;
        if ( v26 == 1 )
          RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
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
