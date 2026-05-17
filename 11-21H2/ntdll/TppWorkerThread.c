/*
 * XREFs of TppWorkerThread @ 0x180016A00
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x1800048A0 (RtlExitUserThread.c)
 *     TppPoolAddWorker @ 0x180014DA0 (TppPoolAddWorker.c)
 *     RtlRegisterThreadWithCsrss @ 0x180014E30 (RtlRegisterThreadWithCsrss.c)
 *     TppCritSetThread @ 0x180014EE8 (TppCritSetThread.c)
 *     TppAllocThreadData @ 0x180014F84 (TppAllocThreadData.c)
 *     TppCheckForTransactions @ 0x1800169AC (TppCheckForTransactions.c)
 *     TppCallbackEpilog @ 0x180017620 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180017958 (TppCallbackCheckThreadAfterCallback.c)
 *     TppPrepareDirectParams @ 0x180017B5C (TppPrepareDirectParams.c)
 *     TppWorkerFindTask @ 0x180018A28 (TppWorkerFindTask.c)
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     TppGetCurrentThreadNumaNode @ 0x18001C39C (TppGetCurrentThreadNumaNode.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18001ED68 (TppPoolpDereferenceGlobalPool.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     RtlIsCriticalSectionLockedByThread @ 0x18004D120 (RtlIsCriticalSectionLockedByThread.c)
 *     TppPoolUpdateTrimmedWorker @ 0x18007BAA4 (TppPoolUpdateTrimmedWorker.c)
 *     TppPoolRemoveWorker @ 0x1800823CC (TppPoolRemoveWorker.c)
 *     TppFreeDirectParamsCache @ 0x180083B00 (TppFreeDirectParamsCache.c)
 *     TppFreeThreadData @ 0x180083C18 (TppFreeThreadData.c)
 *     TppCritResetThread @ 0x180086CA8 (TppCritResetThread.c)
 *     TppPoolpFree @ 0x18008701C (TppPoolpFree.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x180088444 (TppCallbackSendAndDestroyAlpcMessage.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtWorkerFactoryWorkerReady @ 0x1800A4090 (NtWorkerFactoryWorkerReady.c)
 *     NtSetInformationThread @ 0x1800A4210 (NtSetInformationThread.c)
 *     NtSetInformationWorkerFactory @ 0x1800A75A0 (NtSetInformationWorkerFactory.c)
 *     ZwWaitForWorkViaWorkerFactory @ 0x1800A7C40 (ZwWaitForWorkViaWorkerFactory.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlResetStackOverflow @ 0x1800E9C24 (RtlResetStackOverflow.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x180123E80 (TppAdjustRunningThreadGoalWithLock.c)
 *     TppETWWorkerNodeSwitch @ 0x180124CA4 (TppETWWorkerNodeSwitch.c)
 *     TppWorkerpInnerExceptionFilter @ 0x180124DB8 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x180124E40 (TppWorkerpOuterExceptionFilter.c)
 */

void __fastcall __noreturn TppWorkerThread(__int64 a1)
{
  char v2; // di
  signed __int64 v3; // rax
  __int64 v4; // rdx
  char v5; // r8
  signed __int64 v6; // rtt
  struct _PEB *v7; // rbx
  _LIST_ENTRY *Blink; // rcx
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  _OWORD *Heap; // rax
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // r14
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int v20; // edx
  int v21; // ecx
  int v22; // ecx
  __int64 v23; // rcx
  unsigned __int16 v24; // r15
  unsigned __int16 v25; // r12
  __int64 v26; // rcx
  int v27; // edi
  signed __int64 v28; // rax
  signed __int64 v29; // rtt
  struct _PEB *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  char v33; // [rsp+31h] [rbp-2B7h] BYREF
  char v34; // [rsp+32h] [rbp-2B6h]
  char v35; // [rsp+33h] [rbp-2B5h]
  char v36; // [rsp+34h] [rbp-2B4h]
  char v37; // [rsp+35h] [rbp-2B3h]
  char v38; // [rsp+36h] [rbp-2B2h]
  char v39; // [rsp+37h] [rbp-2B1h]
  bool v40; // [rsp+38h] [rbp-2B0h]
  int v41; // [rsp+3Ch] [rbp-2ACh]
  int v42; // [rsp+40h] [rbp-2A8h]
  unsigned int v43; // [rsp+44h] [rbp-2A4h]
  int v44; // [rsp+48h] [rbp-2A0h] BYREF
  __int64 v45; // [rsp+50h] [rbp-298h]
  struct _PEB *v46; // [rsp+58h] [rbp-290h]
  signed __int64 v47; // [rsp+60h] [rbp-288h]
  _QWORD *v48; // [rsp+68h] [rbp-280h] BYREF
  signed __int64 v49; // [rsp+70h] [rbp-278h]
  _OWORD *v50; // [rsp+78h] [rbp-270h]
  int v51; // [rsp+80h] [rbp-268h] BYREF
  int v52; // [rsp+88h] [rbp-260h] BYREF
  HANDLE v53; // [rsp+90h] [rbp-258h] BYREF
  void (__fastcall ***v54)(char *); // [rsp+98h] [rbp-250h] BYREF
  int v55; // [rsp+A0h] [rbp-248h]
  __int64 v56; // [rsp+B8h] [rbp-230h]
  struct _TEB *v57; // [rsp+D0h] [rbp-218h]
  struct _TEB *v58; // [rsp+D8h] [rbp-210h]
  struct _TEB *v59; // [rsp+E0h] [rbp-208h]
  struct _TEB *v60; // [rsp+E8h] [rbp-200h]
  struct _TEB *v61; // [rsp+F8h] [rbp-1F0h]
  struct _TEB *v62; // [rsp+100h] [rbp-1E8h]
  struct _TEB *v63; // [rsp+108h] [rbp-1E0h]
  struct _TEB *v64; // [rsp+110h] [rbp-1D8h]
  _OWORD v65[23]; // [rsp+130h] [rbp-1B8h] BYREF
  _QWORD v66[2]; // [rsp+2A0h] [rbp-48h] BYREF

  v47 = a1;
  v53 = 0LL;
  v45 = a1;
  v34 = 0;
  v35 = 0;
  v38 = 0;
  v36 = 0;
  v33 = 0;
  v39 = 0;
  v37 = 0;
  v48 = 0LL;
  v41 = 0;
  RtlRegisterThreadWithCsrss();
  v46 = NtCurrentPeb();
  TppCritSetThread(&v53);
  TppAllocThreadData(&v48);
  if ( v48 )
    *v48 = v65;
  memset(v65, 0, 0x168uLL);
  RtlAcquireSRWLockShared(a1 + 368);
  if ( *(_BYTE *)(a1 + 377) )
  {
    v42 = -1073741558;
  }
  else
  {
    v42 = NtWorkerFactoryWorkerReady(*(_QWORD *)(a1 + 56));
    if ( v42 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1);
      v2 = v38;
LABEL_17:
      RtlReleaseSRWLockShared(a1 + 368);
      if ( v2 )
        goto LABEL_105;
      TppPoolAddWorker(a1, (__int64)v65);
      v36 = 1;
      v7 = v46;
      RtlAcquireSRWLockExclusive(&v46->TppWorkerpListLock);
      Blink = v46->TppWorkerpList.Blink;
      if ( Blink->Flink != &v46->TppWorkerpList )
        __fastfail(3u);
      *(_QWORD *)&v65[0] = &v46->TppWorkerpList;
      *((_QWORD *)&v65[0] + 1) = Blink;
      Blink->Flink = (_LIST_ENTRY *)v65;
      v7->TppWorkerpList.Blink = (_LIST_ENTRY *)v65;
      v35 = 1;
      RtlReleaseSRWLockExclusive(&v7->TppWorkerpListLock);
      memset((char *)&v65[3] + 8, 0, 0xF8uLL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 416));
      v34 = 1;
      TppGetCurrentThreadNumaNode(a1, (char *)&v65[21] + 8, 0LL);
      while ( 1 )
      {
LABEL_21:
        v41 = 0;
        memset(&v65[19], 0, 32);
        v9 = *(_QWORD **)&v65[21];
        v43 = 16;
        if ( *(_QWORD *)&v65[21] )
        {
          if ( *(_DWORD *)(*(_QWORD *)&v65[21] + 8LL) != 1 )
            goto LABEL_86;
          v10 = *(_QWORD *)&v65[21];
          memset(**(void ***)&v65[21], 0, 56LL * *(unsigned int *)(*(_QWORD *)&v65[21] + 12LL));
          v43 = *(_DWORD *)(v10 + 12);
          Heap = (_OWORD *)*v9;
        }
        else
        {
          v55 = TppHeapTag + 3145728;
          Heap = (_OWORD *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 3145728) | 8u, 912LL);
          if ( !Heap )
          {
LABEL_86:
            v43 = 1;
            Heap = &v65[19];
            goto LABEL_24;
          }
          *((_QWORD *)Heap + 112) = Heap;
          *((_DWORD *)Heap + 226) = 1;
          *((_DWORD *)Heap + 227) = 16;
          *(_QWORD *)&v65[21] = Heap + 56;
          v43 = 16;
        }
LABEL_24:
        v50 = Heap;
        v44 = 0;
        v12 = ZwWaitForWorkViaWorkerFactory(*(_QWORD *)(a1 + 56), Heap, v43, &v44, (char *)&v65[16] + 8);
        v42 = v12;
        if ( v12 )
          v44 = 0;
        if ( (BYTE12(v65[17]) & 1) != 0 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, *((_QWORD *)&v65[16] + 1));
          HIDWORD(v65[17]) &= ~1u;
          v12 = v42;
        }
        if ( v12 )
        {
          v21 = v12 - 128;
          if ( !v21 )
            goto LABEL_105;
          v22 = v21 - 64;
          if ( v22 )
          {
            if ( v22 == 66 )
            {
              v37 = 1;
              goto LABEL_105;
            }
          }
          else
          {
            TppCallbackCheckThreadAfterCallback(0LL);
          }
        }
        else
        {
          if ( !a1 || (v13 = *(_DWORD *)(a1 + 440)) == 0 )
            v13 = MEMORY[0x7FFE03C0];
          if ( *(_DWORD *)(a1 + 424) != v13 )
          {
            RtlAcquireSRWLockExclusive(a1 + 72);
            TppAdjustRunningThreadGoalWithLock(a1);
            RtlReleaseSRWLockExclusive(a1 + 72);
          }
          if ( (unsigned __int8)TppPrepareDirectParams((unsigned int)v65, (_DWORD)v50, v44, v43, a1, (__int64)&v33) )
            goto LABEL_105;
          if ( !v33 )
          {
            v14 = *(_QWORD *)&v65[19];
            if ( *(_QWORD *)&v65[19] )
            {
              v56 = *(_QWORD *)&v65[19];
              *(_QWORD *)&v65[9] = *(_QWORD *)(*(_QWORD *)&v65[19] + 56LL);
              *((_QWORD *)&v65[9] + 1) = *(_QWORD *)&v65[19];
              v51 = *(unsigned __int8 *)(*(_QWORD *)&v65[19] + 68LL);
              v15 = *(unsigned int *)(*(_QWORD *)&v65[19] + 64LL);
              v16 = DWORD2(v65[21]);
              v17 = *(_DWORD *)(a1 + 428);
              if ( (_DWORD)v15 == DWORD2(v65[21]) )
              {
                if ( v17 == -1 && !LOBYTE(v65[22]) )
                {
                  LOBYTE(v65[22]) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v15));
                }
              }
              else
              {
                if ( v17 == -1 )
                {
                  if ( LOBYTE(v65[22]) )
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * DWORD2(v65[21])));
                  else
                    LOBYTE(v65[22]) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v15));
                }
                DWORD2(v65[21]) = v15;
                v23 = *(_QWORD *)(a1 + 48);
                v24 = *(_WORD *)(16 * v15 + v23 + 8);
                v25 = *(_WORD *)(v23 + 16 * v16 + 8);
                if ( (unsigned int)RtlGetCurrentServiceSessionId() )
                  v26 = (__int64)NtCurrentPeb()->SharedData + 556;
                else
                  v26 = 2147353478LL;
                if ( *(_BYTE *)v26 )
                  TppETWWorkerNodeSwitch(a1, v16, v15, v25, v24);
                if ( v25 != v24 )
                {
                  v66[1] = v24;
                  v66[0] = 0LL;
                  NtSetInformationThread(-2LL, 30LL, v66, 16LL);
                  NtSetInformationThread(-2LL, 13LL, &v51, 4LL);
                }
              }
              v57 = NtCurrentTeb();
              v65[18] = v57->ActivityId;
              if ( *((_QWORD *)&v65[11] + 1) && (*(_BYTE *)(*((_QWORD *)&v65[11] + 1) + 436LL) & 1) == 0 )
              {
                v27 = LODWORD(v65[10]) | 8;
                LODWORD(v65[10]) |= 8u;
                v58 = NtCurrentTeb();
                if ( v58->IsImpersonating )
                {
                  v27 |= 4u;
                  LODWORD(v65[10]) = v27;
                }
                if ( TppCheckForTransactions() )
                {
                  v27 |= 0x10u;
                  LODWORD(v65[10]) = v27;
                }
                if ( (unsigned int)RtlIsCriticalSectionLockedByThread(NtCurrentPeb()->LoaderLock) )
                  LODWORD(v65[10]) = v27 | 0x20;
                v59 = NtCurrentTeb();
                if ( v59->PreferredLanguages )
                  LODWORD(v65[10]) |= 0x40u;
                v60 = NtCurrentTeb();
                if ( v60->SavedPriorityState )
                  LODWORD(v65[10]) |= 0x80u;
              }
              (*(void (__fastcall **)(char *, __int64, _QWORD, _OWORD *))(v14 + 56))(
                (char *)&v65[3] + 8,
                v56,
                *((_QWORD *)&v65[19] + 1),
                &v65[20]);
              goto LABEL_40;
            }
            while ( 1 )
            {
              if ( !(unsigned int)TppWorkerFindTask(a1, v65, &v54) )
                goto LABEL_105;
              if ( (BYTE12(v65[17]) & 1) != 0 )
              {
                TppCallbackSendAndDestroyAlpcMessage((char *)&v65[3] + 8, v4);
                HIDWORD(v65[17]) &= ~1u;
              }
              *(_QWORD *)&v65[2] = v54;
              *(_QWORD *)&v65[9] = **v54;
              *((_QWORD *)&v65[9] + 1) = v54;
              *((_QWORD *)&v65[11] + 1) = *(_QWORD *)&v65[3];
              v61 = NtCurrentTeb();
              v65[18] = v61->ActivityId;
              if ( *(_QWORD *)&v65[3] && (*(_BYTE *)(*(_QWORD *)&v65[3] + 436LL) & 1) == 0 )
              {
                v19 = LODWORD(v65[10]) | 8;
                LODWORD(v65[10]) |= 8u;
                v62 = NtCurrentTeb();
                if ( v62->IsImpersonating )
                  LODWORD(v65[10]) = v19 | 4;
                if ( TppCheckForTransactions() )
                  LODWORD(v65[10]) = v20 | 0x10;
                if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                  LODWORD(v65[10]) |= 0x20u;
                v63 = NtCurrentTeb();
                if ( v63->PreferredLanguages )
                  LODWORD(v65[10]) |= 0x40u;
                v64 = NtCurrentTeb();
                if ( v64->SavedPriorityState )
                  LODWORD(v65[10]) |= 0x80u;
              }
              (**v54)((char *)&v65[3] + 8);
LABEL_40:
              if ( (BYTE4(v65[8]) & 4) != 0 )
                v39 = 1;
              v40 = LODWORD(v65[8]) == 4;
              TppCallbackEpilog((char *)&v65[3] + 8);
              *(_QWORD *)&v65[2] = 0LL;
              if ( v39 )
                break;
              v18 = *(_DWORD *)(a1 + 440);
              if ( !v18 )
                v18 = MEMORY[0x7FFE03C0];
              if ( *(_DWORD *)(a1 + 424) != v18 )
              {
                RtlAcquireSRWLockExclusive(a1 + 72);
                TppAdjustRunningThreadGoalWithLock(a1);
                RtlReleaseSRWLockExclusive(a1 + 72);
              }
              _m_prefetchw((const void *)(a1 + 8));
              v3 = *(_QWORD *)(a1 + 8);
              v49 = v3;
              do
              {
                v4 = (unsigned __int16)v3;
                if ( *(_BYTE *)(a1 + 376) )
                  goto LABEL_105;
                if ( HIDWORD(v3) && ((v3 & 0x8000u) == 0LL || v40) )
                {
                  v5 = 0;
                  HIDWORD(v49) = HIDWORD(v3) - 1;
                }
                else
                {
                  v5 = 1;
                  LODWORD(v49) = v3 ^ (unsigned __int16)(v3 ^ (v3 + 1));
                }
                v6 = v3;
                v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v49, v3);
                v49 = v3;
              }
              while ( v6 != v3 );
              v33 = v5;
              if ( v5 )
                goto LABEL_21;
            }
            _m_prefetchw((const void *)(a1 + 8));
            v28 = *(_QWORD *)(a1 + 8);
            v47 = v28;
            do
            {
              LODWORD(v47) = v28 ^ (unsigned __int16)(v28 ^ (v28 + 1));
              v29 = v28;
              v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v47, v28);
              v47 = v28;
            }
            while ( v29 != v28 );
            v52 = 3;
            NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 9LL, &v52);
LABEL_105:
            if ( (BYTE12(v65[17]) & 1) != 0 )
            {
              TppCallbackSendAndDestroyAlpcMessage((char *)&v65[3] + 8, v4);
              HIDWORD(v65[17]) &= ~1u;
            }
            if ( v34 )
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 416));
            if ( v35 )
            {
              v30 = v46;
              RtlAcquireSRWLockExclusive(&v46->TppWorkerpListLock);
              v31 = *((_QWORD *)&v65[0] + 1);
              v32 = *(_QWORD *)&v65[0];
              if ( *(_OWORD **)(*(_QWORD *)&v65[0] + 8LL) != v65 || **((_OWORD ***)&v65[0] + 1) != v65 )
                __fastfail(3u);
              **((_QWORD **)&v65[0] + 1) = *(_QWORD *)&v65[0];
              *(_QWORD *)(v32 + 8) = v31;
              RtlReleaseSRWLockExclusive(&v30->TppWorkerpListLock);
            }
            if ( v36 )
            {
              TppPoolRemoveWorker(v65, v4);
              if ( v37 )
                TppPoolUpdateTrimmedWorker(a1);
            }
            if ( a1 == TppPoolpGlobalPool )
            {
              TppPoolpDereferenceGlobalPool(&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
            }
            else if ( a1 == TppPoolpSerializedPool )
            {
              TppPoolpDereferenceGlobalPool(&TppPoolpSerializedPool, &TppPoolpSerializedPoolLock);
            }
            else if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
            {
              TppPoolpFree(a1, v4);
            }
            TppCritResetThread(v53, v4);
            TppFreeThreadData(v48);
            TppFreeDirectParamsCache(v65);
            v42 = 0;
            RtlExitUserThread(0);
          }
        }
      }
    }
  }
  v2 = 1;
  v38 = 1;
  goto LABEL_17;
}
