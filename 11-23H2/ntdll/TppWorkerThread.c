/*
 * XREFs of TppWorkerThread @ 0x180035600
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18002FB10 (TppPoolpDereferenceGlobalPool.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     TppGetCurrentThreadNumaNode @ 0x180033C84 (TppGetCurrentThreadNumaNode.c)
 *     TppCheckForTransactions @ 0x180035538 (TppCheckForTransactions.c)
 *     RtlClearThreadWorkOnBehalfTicket @ 0x180035590 (RtlClearThreadWorkOnBehalfTicket.c)
 *     TppCallbackEpilog @ 0x18003620C (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18003652C (TppCallbackCheckThreadAfterCallback.c)
 *     TppPrepareDirectParams @ 0x1800366DC (TppPrepareDirectParams.c)
 *     TppWorkerFindTask @ 0x180037750 (TppWorkerFindTask.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlExitUserThread @ 0x18005AFF0 (RtlExitUserThread.c)
 *     TppPoolUpdateTrimmedWorker @ 0x180069A78 (TppPoolUpdateTrimmedWorker.c)
 *     TppAllocThreadData @ 0x180078A14 (TppAllocThreadData.c)
 *     TppPoolAddWorker @ 0x18007B9A8 (TppPoolAddWorker.c)
 *     TppPoolRemoveWorker @ 0x18007D630 (TppPoolRemoveWorker.c)
 *     TppCritSetThread @ 0x18007E584 (TppCritSetThread.c)
 *     TppFreeDirectParamsCache @ 0x18007EBEC (TppFreeDirectParamsCache.c)
 *     TppCallbackPerformDeferredWork @ 0x18007EC38 (TppCallbackPerformDeferredWork.c)
 *     TppFreeThreadData @ 0x18007F758 (TppFreeThreadData.c)
 *     RtlRegisterThreadWithCsrss @ 0x180080B10 (RtlRegisterThreadWithCsrss.c)
 *     TppCritResetThread @ 0x180081B74 (TppCritResetThread.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x180082D0C (TppCallbackSendAndDestroyAlpcMessage.c)
 *     TppPoolpFree @ 0x1800858AC (TppPoolpFree.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtWorkerFactoryWorkerReady @ 0x1800A0ED0 (NtWorkerFactoryWorkerReady.c)
 *     NtSetInformationThread @ 0x1800A1050 (NtSetInformationThread.c)
 *     NtSetInformationWorkerFactory @ 0x1800A4460 (NtSetInformationWorkerFactory.c)
 *     ZwWaitForWorkViaWorkerFactory @ 0x1800A4B00 (ZwWaitForWorkViaWorkerFactory.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlResetStackOverflow @ 0x1800E9DC8 (RtlResetStackOverflow.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x180126D40 (TppAdjustRunningThreadGoalWithLock.c)
 *     TppETWWorkerNodeSwitch @ 0x180127B64 (TppETWWorkerNodeSwitch.c)
 *     TppWorkerpInnerExceptionFilter @ 0x180127C78 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x180127D10 (TppWorkerpOuterExceptionFilter.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

void __fastcall __noreturn TppWorkerThread(__int64 a1)
{
  char v2; // di
  _RTL_SRWLOCK *v3; // rdi
  unsigned __int64 **Value; // rcx
  _FILE_IO_COMPLETION_INFORMATION *v5; // rdi
  _FILE_IO_COMPLETION_INFORMATION *KeyContext; // rax
  NTSTATUS v7; // ecx
  ULONG v8; // eax
  NTSTATUS v9; // ecx
  NTSTATUS v10; // ecx
  int v11; // ecx
  unsigned __int8 v12; // r15
  __int64 v13; // rsi
  __int16 v14; // di
  unsigned int v15; // r12d
  int v16; // r14d
  int v17; // eax
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  unsigned __int16 i; // dx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  int v24; // edx
  bool v25; // di
  signed __int64 v26; // rax
  signed __int64 v27; // rtt
  int v28; // ecx
  signed __int64 v29; // rax
  char v30; // r8
  signed __int64 v31; // rtt
  _RTL_SRWLOCK *v32; // rdi
  _RTL_SRWLOCK *v33; // rdx
  unsigned __int64 **v34; // rax
  char v35; // [rsp+32h] [rbp-2A6h] BYREF
  char v36; // [rsp+33h] [rbp-2A5h]
  char v37; // [rsp+34h] [rbp-2A4h]
  char v38; // [rsp+35h] [rbp-2A3h]
  char v39; // [rsp+36h] [rbp-2A2h]
  char v40; // [rsp+37h] [rbp-2A1h]
  bool v41; // [rsp+38h] [rbp-2A0h]
  int v42; // [rsp+3Ch] [rbp-29Ch]
  NTSTATUS v43; // [rsp+40h] [rbp-298h]
  ULONG Count; // [rsp+44h] [rbp-294h]
  ULONG PacketsReturned; // [rsp+48h] [rbp-290h] BYREF
  _WORD v46[2]; // [rsp+4Ch] [rbp-28Ch] BYREF
  __int64 v47; // [rsp+50h] [rbp-288h]
  _RTL_SRWLOCK *v48; // [rsp+58h] [rbp-280h]
  signed __int64 v49; // [rsp+60h] [rbp-278h]
  PFILE_IO_COMPLETION_INFORMATION MiniPackets; // [rsp+68h] [rbp-270h]
  signed __int64 v51; // [rsp+70h] [rbp-268h]
  PVOID BaseAddress; // [rsp+78h] [rbp-260h] BYREF
  int WorkerFactoryInformation; // [rsp+80h] [rbp-258h] BYREF
  __int64 v54; // [rsp+88h] [rbp-250h] BYREF
  _DWORD *v55; // [rsp+90h] [rbp-248h]
  __int64 **v56; // [rsp+98h] [rbp-240h] BYREF
  ULONG v57; // [rsp+A0h] [rbp-238h]
  __int64 v58; // [rsp+B8h] [rbp-220h]
  struct _TEB *v59; // [rsp+D0h] [rbp-208h]
  struct _TEB *v60; // [rsp+D8h] [rbp-200h]
  struct _TEB *v61; // [rsp+E0h] [rbp-1F8h]
  struct _TEB *v62; // [rsp+F0h] [rbp-1E8h]
  struct _TEB *v63; // [rsp+F8h] [rbp-1E0h]
  struct _TEB *v64; // [rsp+100h] [rbp-1D8h]
  _RTL_SRWLOCK *v65; // [rsp+120h] [rbp-1B8h] BYREF
  unsigned __int64 **v66; // [rsp+128h] [rbp-1B0h]
  __int64 **v67; // [rsp+140h] [rbp-198h]
  __int64 v68; // [rsp+150h] [rbp-188h]
  _BYTE v69[72]; // [rsp+158h] [rbp-180h] BYREF
  int v70; // [rsp+1A0h] [rbp-138h]
  char v71; // [rsp+1A4h] [rbp-134h]
  __int64 v72; // [rsp+1B0h] [rbp-128h]
  __int64 **v73; // [rsp+1B8h] [rbp-120h]
  int v74; // [rsp+1C0h] [rbp-118h]
  __int64 v75; // [rsp+1D8h] [rbp-100h]
  _WORKER_FACTORY_DEFERRED_WORK DeferredWork; // [rsp+228h] [rbp-B0h] BYREF
  _GUID ActivityId; // [rsp+240h] [rbp-98h]
  __int64 v78; // [rsp+250h] [rbp-88h]
  __int128 v79; // [rsp+258h] [rbp-80h] BYREF
  __int128 v80; // [rsp+268h] [rbp-70h] BYREF
  _FILE_IO_COMPLETION_INFORMATION *v81; // [rsp+278h] [rbp-60h]
  unsigned int v82; // [rsp+280h] [rbp-58h] BYREF
  char v83; // [rsp+288h] [rbp-50h]
  unsigned __int16 v84; // [rsp+28Ah] [rbp-4Eh] BYREF
  __int128 ThreadInformation; // [rsp+290h] [rbp-48h] BYREF

  v55 = (_DWORD *)a1;
  v54 = 0LL;
  v47 = a1;
  v49 = a1;
  v36 = 0;
  v37 = 0;
  v40 = 0;
  v38 = 0;
  v35 = 0;
  v39 = 0;
  BaseAddress = 0LL;
  v42 = 0;
  RtlRegisterThreadWithCsrss();
  v48 = (_RTL_SRWLOCK *)NtCurrentPeb();
  TppCritSetThread(&v54);
  TppAllocThreadData(&BaseAddress);
  if ( BaseAddress )
    *(_QWORD *)BaseAddress = &v65;
  memset_thunk_772440563353939046(&v65, 0, 0x170uLL);
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 368));
  if ( *(_BYTE *)(a1 + 377) )
  {
    v43 = -1073741558;
    v2 = 1;
    v40 = 1;
  }
  else
  {
    v43 = NtWorkerFactoryWorkerReady(*(HANDLE *)(a1 + 56));
    if ( v43 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1);
      v2 = v40;
    }
    else
    {
      v2 = 1;
      v40 = 1;
    }
  }
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 368));
  if ( v2 )
    goto LABEL_108;
  TppPoolAddWorker(a1, &v65);
  v38 = 1;
  v3 = v48;
  RtlAcquireSRWLockExclusive(v48 + 113);
  Value = (unsigned __int64 **)v48[115].Value;
  if ( *Value != (unsigned __int64 *)&v48[114] )
    __fastfail(3u);
  v65 = v48 + 114;
  v66 = Value;
  *Value = (unsigned __int64 *)&v65;
  v3[115].Value = (unsigned __int64)&v65;
  v37 = 1;
  RtlReleaseSRWLockExclusive(v3 + 113);
  memset_thunk_772440563353939046(v69, 0, 0x100uLL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 416));
  v36 = 1;
  TppGetCurrentThreadNumaNode(a1, (int *)&v82, 0LL, &v84);
  while ( 1 )
  {
LABEL_12:
    v42 = 0;
    v79 = 0LL;
    v80 = 0LL;
    v5 = v81;
    Count = 16;
    if ( v81 )
    {
      if ( LODWORD(v81->ApcContext) != 1 )
      {
LABEL_17:
        Count = 1;
        KeyContext = (_FILE_IO_COMPLETION_INFORMATION *)&v79;
        goto LABEL_18;
      }
      memset_thunk_772440563353939046(v81->KeyContext, 0, 56LL * HIDWORD(v81->ApcContext));
      Count = HIDWORD(v5->ApcContext);
      KeyContext = (_FILE_IO_COMPLETION_INFORMATION *)v5->KeyContext;
    }
    else
    {
      v57 = TppHeapTag + 3145728;
      KeyContext = (_FILE_IO_COMPLETION_INFORMATION *)RtlAllocateHeap(
                                                        NtCurrentPeb()->ProcessHeap,
                                                        (TppHeapTag + 3145728) | 8,
                                                        0x390uLL);
      if ( !KeyContext )
        goto LABEL_17;
      KeyContext[28].KeyContext = KeyContext;
      LODWORD(KeyContext[28].ApcContext) = 1;
      HIDWORD(KeyContext[28].ApcContext) = 16;
      v81 = KeyContext + 28;
      Count = 16;
    }
LABEL_18:
    MiniPackets = KeyContext;
    PacketsReturned = 0;
    v7 = ZwWaitForWorkViaWorkerFactory(*(HANDLE *)(a1 + 56), KeyContext, Count, &PacketsReturned, &DeferredWork);
    v43 = v7;
    v8 = PacketsReturned;
    if ( v7 )
      v8 = 0;
    PacketsReturned = v8;
    if ( (DeferredWork.Flags & 1) != 0 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, DeferredWork.AlpcSendMessage);
      DeferredWork.Flags &= ~1u;
      v7 = v43;
    }
    if ( v7 )
    {
      v9 = v7 - 128;
      if ( !v9 )
        goto LABEL_108;
      v10 = v9 - 64;
      if ( v10 )
      {
        if ( v10 == 66 )
        {
          v39 = 1;
          goto LABEL_108;
        }
      }
      else
      {
        TppCallbackCheckThreadAfterCallback(0LL);
      }
    }
    else
    {
      if ( !a1 || (v11 = *(_DWORD *)(a1 + 440)) == 0 )
        v11 = MEMORY[0x7FFE03C0];
      v55 = (_DWORD *)(a1 + 424);
      if ( *(_DWORD *)(a1 + 424) != v11 )
      {
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
        TppAdjustRunningThreadGoalWithLock(a1);
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
      }
      if ( (unsigned __int8)TppPrepareDirectParams(
                              (unsigned int)&v65,
                              (_DWORD)MiniPackets,
                              PacketsReturned,
                              Count,
                              a1,
                              (__int64)&v35) )
        goto LABEL_108;
      if ( !v35 )
      {
        if ( (_QWORD)v79 )
        {
          v58 = v79;
          v72 = *(_QWORD *)(v79 + 56);
          v73 = (__int64 **)v79;
          v12 = *(_BYTE *)(v79 + 68);
          v13 = *(unsigned int *)(v79 + 64);
          v14 = -1;
          v15 = v82;
          v16 = v84;
          v17 = *(_DWORD *)(a1 + 428);
          if ( (_DWORD)v13 == v82 )
          {
            if ( v17 == -1 && !v83 )
            {
              v83 = 1;
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v13));
            }
          }
          else
          {
            if ( v17 == -1 )
            {
              if ( v83 )
              {
                v18 = (_QWORD *)(a1 + 40);
                _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v82));
              }
              else
              {
                v83 = 1;
                v18 = (_QWORD *)(v49 + 40);
              }
              _InterlockedIncrement((volatile signed __int32 *)(*v18 + 4 * v13));
            }
            if ( ((1LL << v12) & *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL * (unsigned int)(v16 + TppMaximumGroups * v13))) != 0 )
            {
              v14 = v16;
            }
            else
            {
              for ( i = 0; ; ++i )
              {
                while ( 1 )
                {
                  if ( i >= (unsigned int)TppMaximumGroups )
                    goto LABEL_47;
                  if ( i != (_WORD)v16 )
                    break;
                  ++i;
                }
                if ( ((1LL << v12) & *(_QWORD *)(*(_QWORD *)(a1 + 48)
                                               + 16LL * (TppMaximumGroups * (_DWORD)v13 + (unsigned int)i))) != 0 )
                  break;
              }
              v14 = i;
            }
LABEL_47:
            v82 = v13;
            v84 = v14;
            if ( RtlGetCurrentServiceSessionId() )
              v19 = (__int64)NtCurrentPeb()->SharedData + 556;
            else
              v19 = 2147353478LL;
            if ( *(_BYTE *)v19 )
              TppETWWorkerNodeSwitch(a1, v15, v13, (unsigned __int16)v16, v14);
            ThreadInformation = 0LL;
            NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, &ThreadInformation, 0x10u);
            v46[0] = v14;
            v46[1] = v12;
            NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessorEx, v46, 4u);
          }
          ActivityId = NtCurrentTeb()->ActivityId;
          if ( v75 && (*(_BYTE *)(v75 + 436) & 1) == 0 )
          {
            v21 = v74 | 8;
            v74 |= 8u;
            v59 = NtCurrentTeb();
            if ( v59->IsImpersonating )
              v74 = v21 | 4;
            if ( TppCheckForTransactions() )
              v74 = v22 | 0x10;
            if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
              v74 |= 0x20u;
            v60 = NtCurrentTeb();
            if ( v60->PreferredLanguages )
              v74 |= 0x40u;
            v61 = NtCurrentTeb();
            if ( v61->SavedPriorityState )
              v74 |= 0x80u;
          }
          (*(void (__fastcall **)(_BYTE *, __int64, _QWORD, __int128 *))(v58 + 56))(
            v69,
            v58,
            *((_QWORD *)&v79 + 1),
            &v80);
          goto LABEL_89;
        }
        while ( 1 )
        {
          if ( !(unsigned int)TppWorkerFindTask(a1, &v65, &v56) )
            goto LABEL_108;
          if ( (DeferredWork.Flags & 1) != 0 )
          {
            TppCallbackSendAndDestroyAlpcMessage(v69);
            DeferredWork.Flags &= ~1u;
          }
          v78 = 0LL;
          RtlClearThreadWorkOnBehalfTicket();
          v67 = v56;
          v72 = **v56;
          v73 = v56;
          v75 = v68;
          ActivityId = NtCurrentTeb()->ActivityId;
          if ( v68 && (*(_BYTE *)(v68 + 436) & 1) == 0 )
          {
            v23 = v74 | 8;
            v74 |= 8u;
            v62 = NtCurrentTeb();
            if ( v62->IsImpersonating )
              v74 = v23 | 4;
            if ( TppCheckForTransactions() )
              v74 = v24 | 0x10;
            if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
              v74 |= 0x20u;
            v63 = NtCurrentTeb();
            if ( v63->PreferredLanguages )
              v74 |= 0x40u;
            v64 = NtCurrentTeb();
            if ( v64->SavedPriorityState )
              v74 |= 0x80u;
          }
          ((void (__fastcall *)(_BYTE *))**v56)(v69);
LABEL_89:
          v25 = (v71 & 4) != 0;
          v41 = v70 == 4;
          TppCallbackEpilog(v69);
          v67 = 0LL;
          if ( v25 )
            break;
          if ( !a1 || (v28 = *(_DWORD *)(a1 + 440)) == 0 )
            v28 = MEMORY[0x7FFE03C0];
          if ( *v55 != v28 )
          {
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
            TppAdjustRunningThreadGoalWithLock(a1);
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
          }
          _m_prefetchw((const void *)(a1 + 8));
          v29 = *(_QWORD *)(a1 + 8);
          v51 = v29;
          do
          {
            if ( *(_BYTE *)(a1 + 376) )
              goto LABEL_108;
            if ( HIDWORD(v29) && ((v29 & 0x8000u) == 0LL || v41) )
            {
              v30 = 0;
              HIDWORD(v51) = HIDWORD(v29) - 1;
            }
            else
            {
              v30 = 1;
              LODWORD(v51) = v29 ^ (unsigned __int16)(v29 ^ (v29 + 1));
            }
            v31 = v29;
            v29 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v51, v29);
            v51 = v29;
          }
          while ( v31 != v29 );
          v35 = v30;
          if ( v30 )
            goto LABEL_12;
        }
        _m_prefetchw((const void *)(a1 + 8));
        v26 = *(_QWORD *)(a1 + 8);
        v49 = v26;
        do
        {
          LODWORD(v49) = v26 ^ (unsigned __int16)(v26 ^ (v26 + 1));
          v27 = v26;
          v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v49, v26);
          v49 = v26;
        }
        while ( v27 != v26 );
        WorkerFactoryInformation = 3;
        NtSetInformationWorkerFactory(*(HANDLE *)(a1 + 56), WorkerFactoryCallbackType, &WorkerFactoryInformation, 4u);
LABEL_108:
        TppCallbackPerformDeferredWork(v69);
        if ( v36 )
          _InterlockedDecrement((volatile signed __int32 *)(a1 + 416));
        if ( v37 )
        {
          v32 = v48;
          RtlAcquireSRWLockExclusive(v48 + 113);
          v33 = v65;
          v34 = v66;
          if ( (_RTL_SRWLOCK **)v65[1].Value != &v65 || *v66 != (unsigned __int64 *)&v65 )
            __fastfail(3u);
          *v66 = (unsigned __int64 *)v65;
          v33[1].Value = (unsigned __int64)v34;
          RtlReleaseSRWLockExclusive(v32 + 113);
        }
        if ( v38 )
        {
          TppPoolRemoveWorker(&v65);
          if ( v39 )
            TppPoolUpdateTrimmedWorker(a1);
        }
        if ( (PVOID)a1 == TppPoolpGlobalPool )
        {
          TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
        }
        else if ( a1 == TppPoolpSerializedPool )
        {
          TppPoolpDereferenceGlobalPool((const void **)&TppPoolpSerializedPool, &TppPoolpSerializedPoolLock);
        }
        else if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
        {
          TppPoolpFree((PVOID)a1);
        }
        TppCritResetThread(v54);
        TppFreeThreadData(BaseAddress);
        TppFreeDirectParamsCache(&v65);
        v43 = 0;
        RtlExitUserThread(0);
      }
    }
  }
}
