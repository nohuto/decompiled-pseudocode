/*
 * XREFs of RtlpCallVectoredHandlers @ 0x1800779F8
 * Callers:
 *     RtlDispatchException @ 0x18001E860 (RtlDispatchException.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002C570 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180032FA0 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlProtectHeap @ 0x180049280 (RtlProtectHeap.c)
 *     NtQueryInformationProcess @ 0x18009F110 (NtQueryInformationProcess.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpLogExceptionHandler @ 0x18010DC2C (RtlpLogExceptionHandler.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 */

char __fastcall RtlpCallVectoredHandlers(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _PEB *v3; // r13
  char v4; // si
  __int64 v5; // r15
  unsigned int CrossProcessFlags; // eax
  void **v7; // rbx
  volatile signed __int64 *v9; // rdi
  volatile signed __int64 *v10; // rcx
  volatile signed __int64 *v11; // r14
  volatile signed __int64 **v12; // r12
  volatile signed __int64 *v13; // rsi
  unsigned int v14; // edx
  __int64 v15; // rbx
  __int64 v16; // rbp
  __int64 (__fastcall *v17)(_QWORD *); // rbx
  int v18; // r13d
  signed __int64 v19; // rcx
  bool v20; // cc
  signed __int64 v21; // rcx
  NTSTATUS v22; // eax
  int v23; // ebx
  volatile signed __int64 **v24; // rcx
  volatile signed __int64 **v25; // rax
  int v26; // ecx
  int v28; // ebx
  __int64 v29; // rbx
  void *ProcessHeap; // rcx
  int v31; // edx
  unsigned int v32; // [rsp+30h] [rbp-68h]
  struct _PEB *v33; // [rsp+38h] [rbp-60h]
  _QWORD v34[11]; // [rsp+40h] [rbp-58h] BYREF
  int ProcessInformation; // [rsp+B8h] [rbp+20h] BYREF

  v3 = NtCurrentPeb();
  v4 = 0;
  v33 = v3;
  v32 = a3 + 2;
  v5 = 3LL * a3;
  CrossProcessFlags = v3->CrossProcessFlags;
  v7 = (void **)(&LdrpVectorHandlerList + 3 * a3 + 1);
  if ( _bittest((const int *)&CrossProcessFlags, a3 + 2) )
  {
    v34[0] = a1;
    v9 = 0LL;
    v10 = (volatile signed __int64 *)*(&LdrpVectorHandlerList + 3 * a3);
    v34[1] = a2;
    RtlAcquireSRWLockExclusive(v10);
    v11 = (volatile signed __int64 *)*v7;
    if ( *v7 != v7 )
    {
      while ( 1 )
      {
        v12 = (volatile signed __int64 **)(v11 + 2);
        v13 = v11;
        if ( _InterlockedIncrement64(*((volatile signed __int64 **)v11 + 2)) <= 1 )
          __fastfail(0xEu);
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v5));
        v14 = `RtlpGetCookieValue'::`2'::CookieValue;
        v15 = *((_QWORD *)v11 + 4);
        if ( !`RtlpGetCookieValue'::`2'::CookieValue )
        {
          v22 = NtQueryInformationProcess(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  (PROCESSINFOCLASS)36,
                  &ProcessInformation,
                  4u,
                  0LL);
          if ( v22 < 0 )
            RtlRaiseStatus((unsigned int)v22);
          v14 = ProcessInformation;
          `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
        }
        v16 = 0LL;
        v17 = (__int64 (__fastcall *)(_QWORD *))(v14 ^ __ROR8__(v15, 64 - (v14 & 0x3F)));
        if ( (v3->NtGlobalFlag & 0x800000) != 0 )
          v16 = RtlpLogExceptionHandler(a1, a2, 0LL, v17);
        v18 = v17(v34);
        if ( v16 )
          *(_DWORD *)(v16 + 1396) = v18 != -1;
        RtlAcquireSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v5));
        v11 = (volatile signed __int64 *)*v11;
        v19 = _InterlockedExchangeAdd64(*v12, 0xFFFFFFFFFFFFFFFFuLL);
        v20 = v19 <= 1;
        v21 = v19 - 1;
        if ( v20 )
        {
          if ( v21 )
            __fastfail(0xEu);
          if ( !*((_DWORD *)v13 + 6) )
            __fastfail(0x3Cu);
          if ( LdrControlFlowGuardEnforced() )
          {
            RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
            v23 = *(_DWORD *)LdrpMrdataHeapUnprotected;
            if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
            {
              if ( v23 == -1 )
                goto LABEL_55;
            }
            else
            {
              RtlProtectHeap((__m128i *)LdrpMrdataHeap, 0);
            }
            *(_DWORD *)LdrpMrdataHeapUnprotected = v23 + 1;
            RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          }
          LdrProtectMrdata(0);
          v24 = (volatile signed __int64 **)*v13;
          if ( *(volatile signed __int64 **)(*v13 + 8) != v13
            || (v25 = (volatile signed __int64 **)*((_QWORD *)v13 + 1), *v25 != v13) )
          {
            __fastfail(3u);
          }
          *v25 = (volatile signed __int64 *)v24;
          v24[1] = (volatile signed __int64 *)v25;
          if ( v25 == v24 )
            _interlockedbittestandreset((volatile signed __int32 *)&v33->80, v32);
          LdrProtectMrdata(1);
          *v13 = (volatile signed __int64)v9;
          v9 = v13;
          if ( LdrControlFlowGuardEnforced() )
          {
            RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
            v26 = *(_DWORD *)LdrpMrdataHeapUnprotected;
            if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
              goto LABEL_55;
            *(_DWORD *)LdrpMrdataHeapUnprotected = v26 - 1;
            if ( v26 == 1 )
              RtlProtectHeap((__m128i *)LdrpMrdataHeap, 1);
            RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          }
        }
        if ( v18 == -1 )
          break;
        if ( v11 == (volatile signed __int64 *)(&LdrpVectorHandlerList + v5 + 1) )
        {
          v4 = 0;
          goto LABEL_14;
        }
        v3 = v33;
      }
      v4 = 1;
    }
LABEL_14:
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v5));
    if ( v9 )
    {
      if ( LdrControlFlowGuardEnforced() )
      {
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        v28 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          if ( v28 == -1 )
            goto LABEL_55;
        }
        else
        {
          RtlProtectHeap((__m128i *)LdrpMrdataHeap, 0);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v28 + 1;
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
      do
      {
        v29 = (__int64)v9;
        v9 = (volatile signed __int64 *)*v9;
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(_QWORD *)(v29 + 16));
        if ( LdrControlFlowGuardEnforced() )
          ProcessHeap = (void *)LdrpMrdataHeap;
        else
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap((__int64)ProcessHeap, 0, v29);
      }
      while ( v9 );
      if ( LdrControlFlowGuardEnforced() )
      {
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        v31 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          *(_DWORD *)LdrpMrdataHeapUnprotected = v31 - 1;
          if ( v31 == 1 )
            RtlProtectHeap((__m128i *)LdrpMrdataHeap, 1);
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          return v4;
        }
LABEL_55:
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
    }
  }
  return v4;
}
