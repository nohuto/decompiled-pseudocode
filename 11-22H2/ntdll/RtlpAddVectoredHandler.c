/*
 * XREFs of RtlpAddVectoredHandler @ 0x180084410
 * Callers:
 *     RtlAddVectoredExceptionHandler @ 0x180084400 (RtlAddVectoredExceptionHandler.c)
 *     RtlAddVectoredContinueHandler @ 0x1800ADD00 (RtlAddVectoredContinueHandler.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002C570 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180032FA0 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlProtectHeap @ 0x180049280 (RtlProtectHeap.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081A04 (LdrEnsureMrdataHeapExists.c)
 *     RtlQueryProtectedPolicy @ 0x180084650 (RtlQueryProtectedPolicy.c)
 *     NtQueryInformationProcess @ 0x18009F110 (NtQueryInformationProcess.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 */

_QWORD *__fastcall RtlpAddVectoredHandler(int a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  int v6; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  unsigned int v11; // ecx
  _UNKNOWN **v12; // rdi
  _UNKNOWN ***v13; // rax
  int v14; // edx
  _QWORD *v16; // rax
  void *v17; // rcx
  NTSTATUS v18; // eax
  __int64 v19; // [rsp+30h] [rbp-28h]
  int ProcessInformation; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  if ( (int)LdrEnsureMrdataHeapExists() >= 0 && ((int)RtlQueryProtectedPolicy(&unk_180138258) < 0 || !v19) )
  {
    if ( LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v6 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        if ( v6 == -1 )
          goto LABEL_39;
      }
      else
      {
        RtlProtectHeap((__m128i *)LdrpMrdataHeap, 0);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v6 + 1;
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    if ( LdrControlFlowGuardEnforced() )
      ProcessHeap = (void *)LdrpMrdataHeap;
    else
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 40LL);
    v9 = (_QWORD *)Heap;
    if ( !Heap )
    {
LABEL_19:
      if ( !LdrControlFlowGuardEnforced() )
        return v9;
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v14 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        *(_DWORD *)LdrpMrdataHeapUnprotected = v14 - 1;
        if ( v14 == 1 )
          RtlProtectHeap((__m128i *)LdrpMrdataHeap, 1);
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        return v9;
      }
LABEL_39:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)(Heap + 24) = 0;
    v10 = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 8LL);
    v9[2] = v10;
    if ( !v10 )
    {
      if ( LdrControlFlowGuardEnforced() )
        v17 = (void *)LdrpMrdataHeap;
      else
        v17 = NtCurrentPeb()->ProcessHeap;
      RtlFreeHeap((__int64)v17, 0, (__int64)v9);
      v9 = 0LL;
      goto LABEL_19;
    }
    *v10 = 1LL;
    v11 = `RtlpGetCookieValue'::`2'::CookieValue;
    if ( !`RtlpGetCookieValue'::`2'::CookieValue )
    {
      v18 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)36, &ProcessInformation, 4u, 0LL);
      if ( v18 < 0 )
        RtlRaiseStatus((unsigned int)v18);
      v11 = ProcessInformation;
      `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
    }
    v9[4] = __ROR8__(a2 ^ v11, v11 & 0x3F);
    v12 = &LdrpVectorHandlerList + 3 * v3 + 1;
    LdrProtectMrdata(0);
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + 3 * v3));
    if ( *v12 == (_UNKNOWN *)v12 )
      _interlockedbittestandset((volatile signed __int32 *)&NtCurrentPeb()->80, v3 + 2);
    if ( a1 )
    {
      v13 = (_UNKNOWN ***)*v12;
      if ( *((_UNKNOWN ***)*v12 + 1) == v12 )
      {
        *v9 = v13;
        v9[1] = v12;
        v13[1] = (_UNKNOWN **)v9;
        *v12 = v9;
LABEL_18:
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + 3 * v3));
        LdrProtectMrdata(1);
        goto LABEL_19;
      }
    }
    else
    {
      v16 = v12[1];
      if ( (_UNKNOWN **)*v16 == v12 )
      {
        *v9 = v12;
        v9[1] = v16;
        *v16 = v9;
        v12[1] = v9;
        goto LABEL_18;
      }
    }
    __fastfail(3u);
  }
  return 0LL;
}
