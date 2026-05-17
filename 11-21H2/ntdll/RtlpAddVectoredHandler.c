/*
 * XREFs of RtlpAddVectoredHandler @ 0x180087D70
 * Callers:
 *     RtlAddVectoredExceptionHandler @ 0x180087D60 (RtlAddVectoredExceptionHandler.c)
 *     RtlAddVectoredContinueHandler @ 0x1800E4D60 (RtlAddVectoredContinueHandler.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x18001C904 (LdrProtectMrdata.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlProtectHeap @ 0x180030B10 (RtlProtectHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x1800342E0 (LdrControlFlowGuardEnforced.c)
 *     LdrEnsureMrdataHeapExists @ 0x180087234 (LdrEnsureMrdataHeapExists.c)
 *     RtlQueryProtectedPolicy @ 0x180087FB0 (RtlQueryProtectedPolicy.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x1800A4390 (NtQueryInformationProcess.c)
 */

_QWORD *__fastcall RtlpAddVectoredHandler(int a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  int v9; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  unsigned int v16; // ecx
  unsigned __int64 v17; // rdx
  _UNKNOWN **v18; // rdi
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  _UNKNOWN ***v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r9
  int v29; // edx
  _QWORD *v31; // rax
  void *v32; // rcx
  NTSTATUS v33; // eax
  __int64 v34; // [rsp+30h] [rbp-28h]
  int ProcessInformation; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  if ( (int)LdrEnsureMrdataHeapExists() >= 0 && ((int)RtlQueryProtectedPolicy(&unk_180132FC8) < 0 || !v34) )
  {
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v6, v7, v8);
      v9 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        if ( v9 == -1 )
          goto LABEL_39;
      }
      else
      {
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v9 + 1;
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
      ProcessHeap = (void *)LdrpMrdataHeap;
    else
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 40LL);
    v12 = (_QWORD *)Heap;
    if ( !Heap )
    {
LABEL_19:
      if ( !(unsigned int)LdrControlFlowGuardEnforced() )
        return v12;
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v26, v27, v28);
      v29 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        *(_DWORD *)LdrpMrdataHeapUnprotected = v29 - 1;
        if ( v29 == 1 )
          RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        return v12;
      }
LABEL_39:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)(Heap + 24) = 0;
    v13 = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 8LL);
    v12[2] = v13;
    if ( !v13 )
    {
      if ( (unsigned int)LdrControlFlowGuardEnforced() )
        v32 = (void *)LdrpMrdataHeap;
      else
        v32 = NtCurrentPeb()->ProcessHeap;
      RtlFreeHeap((__int64)v32, 0, (__int64)v12);
      v12 = 0LL;
      goto LABEL_19;
    }
    *v13 = 1LL;
    v16 = `RtlpGetCookieValue'::`2'::CookieValue;
    if ( !`RtlpGetCookieValue'::`2'::CookieValue )
    {
      v33 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)36, &ProcessInformation, 4u, 0LL);
      if ( v33 < 0 )
      {
        RtlRaiseStatus((unsigned int)v33);
        __debugbreak();
      }
      v16 = ProcessInformation;
      `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
    }
    v17 = __ROR8__(a2 ^ v16, v16 & 0x3F);
    v12[4] = v17;
    v18 = &LdrpVectorHandlerList + 3 * v3 + 1;
    LdrProtectMrdata(0, v17, v14, v15);
    RtlAcquireSRWLockExclusive((unsigned __int64)*(&LdrpVectorHandlerList + 3 * v3), v19, v20, v21);
    if ( *v18 == (_UNKNOWN *)v18 )
      _interlockedbittestandset((volatile signed __int32 *)&NtCurrentPeb()->80, v3 + 2);
    if ( a1 )
    {
      v22 = (_UNKNOWN ***)*v18;
      if ( *((_UNKNOWN ***)*v18 + 1) == v18 )
      {
        *v12 = v22;
        v12[1] = v18;
        v22[1] = (_UNKNOWN **)v12;
        *v18 = v12;
LABEL_18:
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + 3 * v3));
        LdrProtectMrdata(1, v23, v24, v25);
        goto LABEL_19;
      }
    }
    else
    {
      v31 = v18[1];
      if ( (_UNKNOWN **)*v31 == v18 )
      {
        *v12 = v18;
        v12[1] = v31;
        *v31 = v12;
        v18[1] = v12;
        goto LABEL_18;
      }
    }
    __fastfail(3u);
  }
  return 0LL;
}
