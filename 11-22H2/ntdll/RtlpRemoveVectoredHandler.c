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

__int64 __fastcall RtlpRemoveVectoredHandler(void **a1, unsigned int a2)
{
  __int64 v4; // rsi
  void **v5; // rdi
  void **i; // rbx
  int v7; // eax
  int v8; // edi
  signed __int64 v9; // rcx
  bool v10; // cc
  signed __int64 v11; // rcx
  void **v12; // rcx
  void **v13; // rax
  void **v14; // rdi
  int v15; // eax
  PVOID v16; // rcx
  int v17; // eax
  int v18; // edx
  int v20; // eax
  int v21; // ecx

  v4 = 3LL * a2;
  v5 = (void **)(&LdrSystemDllInitBlock.ScpCfgDispatchESFunction + 3 * a2);
  RtlAcquireSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgDispatchFunction + 3 * a2));
  for ( i = (void **)*v5; ; i = (void **)*i )
  {
    if ( i == v5 )
    {
      RtlReleaseSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgDispatchFunction + v4));
      return 0LL;
    }
    if ( i == a1 )
      break;
  }
  LOBYTE(v7) = LdrControlFlowGuardEnforced();
  if ( !v7 )
    goto LABEL_9;
  RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
  v8 = *(_DWORD *)LdrpMrdataHeapUnprotected;
  if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
  {
    RtlProtectHeap(LdrpMrdataHeap, 0);
    goto LABEL_8;
  }
  if ( v8 == -1 )
    goto LABEL_35;
LABEL_8:
  *(_DWORD *)LdrpMrdataHeapUnprotected = v8 + 1;
  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
LABEL_9:
  *((_DWORD *)i + 6) = 1;
  v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)i[2], 0xFFFFFFFFFFFFFFFFuLL);
  v10 = v9 <= 1;
  v11 = v9 - 1;
  if ( !v10 )
  {
    LOBYTE(v20) = LdrControlFlowGuardEnforced();
    if ( v20 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v21 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_35;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v21 - 1;
      if ( v21 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    v14 = 0LL;
    goto LABEL_16;
  }
  if ( v11 )
    __fastfail(0xEu);
  LdrProtectMrdata(0);
  v12 = (void **)*i;
  v13 = (void **)i[1];
  if ( *((void ***)*i + 1) != i || *v13 != i )
    __fastfail(3u);
  *v13 = v12;
  v12[1] = v13;
  if ( v13 == v12 )
    _interlockedbittestandreset((volatile signed __int32 *)&NtCurrentPeb()->80, a2 + 2);
  v14 = i;
LABEL_16:
  RtlReleaseSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgDispatchFunction + v4));
  if ( v14 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14[2]);
    LOBYTE(v15) = LdrControlFlowGuardEnforced();
    v16 = v15 ? LdrpMrdataHeap : NtCurrentPeb()->ProcessHeap;
    RtlFreeHeap(v16, 0, i);
    LdrProtectMrdata(1);
    LOBYTE(v17) = LdrControlFlowGuardEnforced();
    if ( v17 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v18 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        *(_DWORD *)LdrpMrdataHeapUnprotected = v18 - 1;
        if ( v18 == 1 )
          RtlProtectHeap(LdrpMrdataHeap, 1u);
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
