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
  ULONG_PTR *v7; // rbx
  PVOID *v9; // rdi
  _RTL_SRWLOCK *v10; // rcx
  ULONG_PTR v11; // r14
  volatile signed __int64 **v12; // r12
  _QWORD *v13; // rsi
  unsigned int v14; // edx
  __int64 v15; // rbx
  __int64 v16; // rbp
  __int64 (__fastcall *v17)(_QWORD *); // rbx
  int v18; // r13d
  signed __int64 v19; // rcx
  bool v20; // cc
  signed __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // ebx
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // ebx
  PVOID *v31; // rbx
  int v32; // eax
  PVOID ProcessHeap; // rcx
  int v34; // eax
  int v35; // edx
  unsigned int v36; // [rsp+30h] [rbp-68h]
  struct _PEB *v37; // [rsp+38h] [rbp-60h]
  _QWORD v38[11]; // [rsp+40h] [rbp-58h] BYREF
  int ProcessInformation; // [rsp+B8h] [rbp+20h] BYREF

  v3 = NtCurrentPeb();
  v4 = 0;
  v37 = v3;
  v36 = a3 + 2;
  v5 = 3LL * a3;
  CrossProcessFlags = v3->CrossProcessFlags;
  v7 = &LdrSystemDllInitBlock.ScpCfgDispatchESFunction + 3 * a3;
  if ( _bittest((const int *)&CrossProcessFlags, a3 + 2) )
  {
    v38[0] = a1;
    v9 = 0LL;
    v10 = (_RTL_SRWLOCK *)*(&LdrSystemDllInitBlock.ScpCfgDispatchFunction + 3 * a3);
    v38[1] = a2;
    RtlAcquireSRWLockExclusive(v10);
    v11 = *v7;
    if ( (ULONG_PTR *)*v7 != v7 )
    {
      while ( 1 )
      {
        v12 = (volatile signed __int64 **)(v11 + 16);
        v13 = (_QWORD *)v11;
        if ( _InterlockedIncrement64(*(volatile signed __int64 **)(v11 + 16)) <= 1 )
          __fastfail(0xEu);
        RtlReleaseSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgDispatchFunction + v5));
        v14 = `RtlpGetCookieValue'::`2'::CookieValue;
        v15 = *(_QWORD *)(v11 + 32);
        if ( !`RtlpGetCookieValue'::`2'::CookieValue )
        {
          v22 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
          if ( v22 < 0 )
            RtlRaiseStatus(v22);
          v14 = ProcessInformation;
          `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
        }
        v16 = 0LL;
        v17 = (__int64 (__fastcall *)(_QWORD *))(v14 ^ __ROR8__(v15, 64 - (v14 & 0x3F)));
        if ( (v3->NtGlobalFlag & 0x800000) != 0 )
          v16 = RtlpLogExceptionHandler(a1, a2, 0LL, v17);
        v18 = v17(v38);
        if ( v16 )
          *(_DWORD *)(v16 + 1396) = v18 != -1;
        RtlAcquireSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgDispatchFunction + v5));
        v11 = *(_QWORD *)v11;
        v19 = _InterlockedExchangeAdd64(*v12, 0xFFFFFFFFFFFFFFFFuLL);
        v20 = v19 <= 1;
        v21 = v19 - 1;
        if ( v20 )
        {
          if ( v21 )
            __fastfail(0xEu);
          if ( !*((_DWORD *)v13 + 6) )
            __fastfail(0x3Cu);
          LOBYTE(v23) = LdrControlFlowGuardEnforced();
          if ( v23 )
          {
            RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
            v24 = *(_DWORD *)LdrpMrdataHeapUnprotected;
            if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
            {
              if ( v24 == -1 )
                goto LABEL_55;
            }
            else
            {
              RtlProtectHeap(LdrpMrdataHeap, 0);
            }
            *(_DWORD *)LdrpMrdataHeapUnprotected = v24 + 1;
            RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          }
          LdrProtectMrdata(0);
          v25 = (_QWORD *)*v13;
          if ( *(_QWORD **)(*v13 + 8LL) != v13 || (v26 = (_QWORD *)v13[1], (_QWORD *)*v26 != v13) )
            __fastfail(3u);
          *v26 = v25;
          v25[1] = v26;
          if ( v26 == v25 )
            _interlockedbittestandreset((volatile signed __int32 *)&v37->80, v36);
          LdrProtectMrdata(1);
          *v13 = v9;
          v9 = (PVOID *)v13;
          LOBYTE(v27) = LdrControlFlowGuardEnforced();
          if ( v27 )
          {
            RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
            v28 = *(_DWORD *)LdrpMrdataHeapUnprotected;
            if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
              goto LABEL_55;
            *(_DWORD *)LdrpMrdataHeapUnprotected = v28 - 1;
            if ( v28 == 1 )
              RtlProtectHeap(LdrpMrdataHeap, 1u);
            RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          }
        }
        if ( v18 == -1 )
          break;
        if ( (ULONG_PTR *)v11 == &LdrSystemDllInitBlock.ScpCfgDispatchESFunction + v5 )
        {
          v4 = 0;
          goto LABEL_14;
        }
        v3 = v37;
      }
      v4 = 1;
    }
LABEL_14:
    RtlReleaseSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgDispatchFunction + v5));
    if ( v9 )
    {
      LOBYTE(v29) = LdrControlFlowGuardEnforced();
      if ( v29 )
      {
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        v30 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          if ( v30 == -1 )
            goto LABEL_55;
        }
        else
        {
          RtlProtectHeap(LdrpMrdataHeap, 0);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v30 + 1;
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
      do
      {
        v31 = v9;
        v9 = (PVOID *)*v9;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v31[2]);
        LOBYTE(v32) = LdrControlFlowGuardEnforced();
        if ( v32 )
          ProcessHeap = LdrpMrdataHeap;
        else
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap(ProcessHeap, 0, v31);
      }
      while ( v9 );
      LOBYTE(v34) = LdrControlFlowGuardEnforced();
      if ( v34 )
      {
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        v35 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          *(_DWORD *)LdrpMrdataHeapUnprotected = v35 - 1;
          if ( v35 == 1 )
            RtlProtectHeap(LdrpMrdataHeap, 1u);
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
