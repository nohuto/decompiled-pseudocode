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
  _RTL_SRWLOCK *v7; // rbx
  struct _PEB **Blink; // rcx
  PPORT_MESSAGE AlpcSendMessage; // rbx
  PPORT_MESSAGE v10; // rdi
  char *Heap; // rax
  NTSTATUS v12; // ecx
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 AlpcSendMessagePort_low; // r14
  int v17; // eax
  int v18; // eax
  ULONG v19; // edx
  int v20; // edx
  NTSTATUS v21; // ecx
  NTSTATUS v22; // ecx
  __int64 v23; // rcx
  unsigned __int16 v24; // r15
  unsigned __int16 v25; // r12
  __int64 v26; // rcx
  ULONG v27; // edi
  signed __int64 v28; // rax
  signed __int64 v29; // rtt
  _RTL_SRWLOCK *v30; // rbx
  PVOID AlpcSendMessagePort; // rax
  PPORT_MESSAGE v32; // rdx
  char v33; // [rsp+31h] [rbp-2B7h] BYREF
  char v34; // [rsp+32h] [rbp-2B6h]
  char v35; // [rsp+33h] [rbp-2B5h]
  char v36; // [rsp+34h] [rbp-2B4h]
  char v37; // [rsp+35h] [rbp-2B3h]
  char v38; // [rsp+36h] [rbp-2B2h]
  char v39; // [rsp+37h] [rbp-2B1h]
  bool v40; // [rsp+38h] [rbp-2B0h]
  int v41; // [rsp+3Ch] [rbp-2ACh]
  NTSTATUS v42; // [rsp+40h] [rbp-2A8h]
  ULONG Count; // [rsp+44h] [rbp-2A4h]
  ULONG PacketsReturned; // [rsp+48h] [rbp-2A0h] BYREF
  __int64 v45; // [rsp+50h] [rbp-298h]
  struct _PEB *v46; // [rsp+58h] [rbp-290h]
  signed __int64 v47; // [rsp+60h] [rbp-288h]
  PVOID BaseAddress; // [rsp+68h] [rbp-280h] BYREF
  signed __int64 v49; // [rsp+70h] [rbp-278h]
  PFILE_IO_COMPLETION_INFORMATION MiniPackets; // [rsp+78h] [rbp-270h]
  int v51; // [rsp+80h] [rbp-268h] BYREF
  int WorkerFactoryInformation; // [rsp+88h] [rbp-260h] BYREF
  HANDLE v53; // [rsp+90h] [rbp-258h] BYREF
  void (__fastcall ***v54)(PVOID *); // [rsp+98h] [rbp-250h] BYREF
  ULONG v55; // [rsp+A0h] [rbp-248h]
  __int64 v56; // [rsp+B8h] [rbp-230h]
  struct _TEB *v57; // [rsp+D0h] [rbp-218h]
  struct _TEB *v58; // [rsp+D8h] [rbp-210h]
  struct _TEB *v59; // [rsp+E0h] [rbp-208h]
  struct _TEB *v60; // [rsp+E8h] [rbp-200h]
  struct _TEB *v61; // [rsp+F8h] [rbp-1F0h]
  struct _TEB *v62; // [rsp+100h] [rbp-1E8h]
  struct _TEB *v63; // [rsp+108h] [rbp-1E0h]
  struct _TEB *v64; // [rsp+110h] [rbp-1D8h]
  _WORKER_FACTORY_DEFERRED_WORK DeferredWork[15]; // [rsp+130h] [rbp-1B8h] BYREF
  _QWORD ThreadInformation[2]; // [rsp+2A0h] [rbp-48h] BYREF

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
  BaseAddress = 0LL;
  v41 = 0;
  RtlRegisterThreadWithCsrss();
  v46 = NtCurrentPeb();
  TppCritSetThread(&v53);
  TppAllocThreadData(&BaseAddress);
  if ( BaseAddress )
    *(_QWORD *)BaseAddress = DeferredWork;
  memset(DeferredWork, 0, sizeof(DeferredWork));
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 368));
  if ( *(_BYTE *)(a1 + 377) )
  {
    v42 = -1073741558;
  }
  else
  {
    v42 = NtWorkerFactoryWorkerReady(*(HANDLE *)(a1 + 56));
    if ( v42 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1);
      v2 = v38;
LABEL_17:
      RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 368));
      if ( v2 )
        goto LABEL_105;
      TppPoolAddWorker((_RTL_SRWLOCK *)a1, (__int64)DeferredWork);
      v36 = 1;
      v7 = (_RTL_SRWLOCK *)v46;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)&v46->TppWorkerpListLock);
      Blink = (struct _PEB **)v46->TppWorkerpList.Blink;
      if ( *Blink != (struct _PEB *)&v46->TppWorkerpList )
        __fastfail(3u);
      DeferredWork[0].AlpcSendMessage = (PPORT_MESSAGE)&v46->TppWorkerpList;
      DeferredWork[0].AlpcSendMessagePort = Blink;
      *Blink = (struct _PEB *)DeferredWork;
      v7[115].Value = (unsigned __int64)DeferredWork;
      v35 = 1;
      RtlReleaseSRWLockExclusive(v7 + 113);
      memset(&DeferredWork[2].AlpcSendMessagePort, 0, 0xF8uLL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 416));
      v34 = 1;
      TppGetCurrentThreadNumaNode(a1, &DeferredWork[14].AlpcSendMessagePort, 0LL);
      while ( 1 )
      {
LABEL_21:
        v41 = 0;
        *(_OWORD *)&DeferredWork[12].AlpcSendMessageFlags = 0LL;
        *(_OWORD *)&DeferredWork[13].AlpcSendMessagePort = 0LL;
        AlpcSendMessage = DeferredWork[14].AlpcSendMessage;
        Count = 16;
        if ( DeferredWork[14].AlpcSendMessage )
        {
          if ( LODWORD(DeferredWork[14].AlpcSendMessage->DoNotUseThisField) != 1 )
            goto LABEL_86;
          v10 = DeferredWork[14].AlpcSendMessage;
          memset(
            *(void **)DeferredWork[14].AlpcSendMessage,
            0,
            56LL * HIDWORD(DeferredWork[14].AlpcSendMessage->DoNotUseThisField));
          Count = HIDWORD(v10->DoNotUseThisField);
          Heap = *(char **)&AlpcSendMessage->u1.s1.DataLength;
        }
        else
        {
          v55 = TppHeapTag + 3145728;
          Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 3145728) | 8, 0x390uLL);
          if ( !Heap )
          {
LABEL_86:
            Count = 1;
            Heap = (char *)&DeferredWork[12].AlpcSendMessageFlags;
            goto LABEL_24;
          }
          *((_QWORD *)Heap + 112) = Heap;
          *((_DWORD *)Heap + 226) = 1;
          *((_DWORD *)Heap + 227) = 16;
          DeferredWork[14].AlpcSendMessage = (PPORT_MESSAGE)(Heap + 896);
          Count = 16;
        }
LABEL_24:
        MiniPackets = (PFILE_IO_COMPLETION_INFORMATION)Heap;
        PacketsReturned = 0;
        v12 = ZwWaitForWorkViaWorkerFactory(
                *(HANDLE *)(a1 + 56),
                (PFILE_IO_COMPLETION_INFORMATION)Heap,
                Count,
                &PacketsReturned,
                &DeferredWork[11]);
        v42 = v12;
        if ( v12 )
          PacketsReturned = 0;
        if ( (DeferredWork[11].Flags & 1) != 0 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, DeferredWork[11].AlpcSendMessage);
          DeferredWork[11].Flags &= ~1u;
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
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
            TppAdjustRunningThreadGoalWithLock(a1);
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
          }
          if ( (unsigned __int8)TppPrepareDirectParams(
                                  (unsigned int)DeferredWork,
                                  (_DWORD)MiniPackets,
                                  PacketsReturned,
                                  Count,
                                  a1,
                                  (__int64)&v33) )
            goto LABEL_105;
          if ( !v33 )
          {
            v14 = *(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags;
            if ( *(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags )
            {
              v56 = *(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags;
              DeferredWork[6].AlpcSendMessage = *(PPORT_MESSAGE *)(*(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags
                                                                 + 56LL);
              DeferredWork[6].AlpcSendMessagePort = *(PVOID *)&DeferredWork[12].AlpcSendMessageFlags;
              v51 = *(unsigned __int8 *)(*(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags + 68LL);
              v15 = *(unsigned int *)(*(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags + 64LL);
              AlpcSendMessagePort_low = LODWORD(DeferredWork[14].AlpcSendMessagePort);
              v17 = *(_DWORD *)(a1 + 428);
              if ( (_DWORD)v15 == LODWORD(DeferredWork[14].AlpcSendMessagePort) )
              {
                if ( v17 == -1 && !LOBYTE(DeferredWork[14].AlpcSendMessageFlags) )
                {
                  LOBYTE(DeferredWork[14].AlpcSendMessageFlags) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v15));
                }
              }
              else
              {
                if ( v17 == -1 )
                {
                  if ( LOBYTE(DeferredWork[14].AlpcSendMessageFlags) )
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40)
                                                                    + 4LL
                                                                    * LODWORD(DeferredWork[14].AlpcSendMessagePort)));
                  else
                    LOBYTE(DeferredWork[14].AlpcSendMessageFlags) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v15));
                }
                LODWORD(DeferredWork[14].AlpcSendMessagePort) = v15;
                v23 = *(_QWORD *)(a1 + 48);
                v24 = *(_WORD *)(16 * v15 + v23 + 8);
                v25 = *(_WORD *)(v23 + 16 * AlpcSendMessagePort_low + 8);
                if ( RtlGetCurrentServiceSessionId() )
                  v26 = (__int64)NtCurrentPeb()->SharedData + 556;
                else
                  v26 = 2147353478LL;
                if ( *(_BYTE *)v26 )
                  TppETWWorkerNodeSwitch(a1, AlpcSendMessagePort_low, v15, v25, v24);
                if ( v25 != v24 )
                {
                  ThreadInformation[1] = v24;
                  ThreadInformation[0] = 0LL;
                  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, ThreadInformation, 0x10u);
                  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessor, &v51, 4u);
                }
              }
              v57 = NtCurrentTeb();
              *(_GUID *)&DeferredWork[12].AlpcSendMessage = v57->ActivityId;
              if ( *(_QWORD *)&DeferredWork[7].AlpcSendMessageFlags
                && (*(_BYTE *)(*(_QWORD *)&DeferredWork[7].AlpcSendMessageFlags + 436LL) & 1) == 0 )
              {
                v27 = DeferredWork[6].AlpcSendMessageFlags | 8;
                DeferredWork[6].AlpcSendMessageFlags |= 8u;
                v58 = NtCurrentTeb();
                if ( v58->IsImpersonating )
                {
                  v27 |= 4u;
                  DeferredWork[6].AlpcSendMessageFlags = v27;
                }
                if ( TppCheckForTransactions() )
                {
                  v27 |= 0x10u;
                  DeferredWork[6].AlpcSendMessageFlags = v27;
                }
                if ( RtlIsCriticalSectionLockedByThread(NtCurrentPeb()->LoaderLock) )
                  DeferredWork[6].AlpcSendMessageFlags = v27 | 0x20;
                v59 = NtCurrentTeb();
                if ( v59->PreferredLanguages )
                  DeferredWork[6].AlpcSendMessageFlags |= 0x40u;
                v60 = NtCurrentTeb();
                if ( v60->SavedPriorityState )
                  DeferredWork[6].AlpcSendMessageFlags |= 0x80u;
              }
              (*(void (__fastcall **)(PVOID *, __int64, PPORT_MESSAGE, PVOID *))(v14 + 56))(
                &DeferredWork[2].AlpcSendMessagePort,
                v56,
                DeferredWork[13].AlpcSendMessage,
                &DeferredWork[13].AlpcSendMessagePort);
              goto LABEL_40;
            }
            while ( 1 )
            {
              if ( !(unsigned int)TppWorkerFindTask(a1, DeferredWork, &v54) )
                goto LABEL_105;
              if ( (DeferredWork[11].Flags & 1) != 0 )
              {
                TppCallbackSendAndDestroyAlpcMessage(&DeferredWork[2].AlpcSendMessagePort, v4);
                DeferredWork[11].Flags &= ~1u;
              }
              DeferredWork[1].AlpcSendMessagePort = v54;
              DeferredWork[6].AlpcSendMessage = (PPORT_MESSAGE)**v54;
              DeferredWork[6].AlpcSendMessagePort = v54;
              *(_QWORD *)&DeferredWork[7].AlpcSendMessageFlags = DeferredWork[2].AlpcSendMessage;
              v61 = NtCurrentTeb();
              *(_GUID *)&DeferredWork[12].AlpcSendMessage = v61->ActivityId;
              if ( DeferredWork[2].AlpcSendMessage
                && (*(_BYTE *)(&DeferredWork[2].AlpcSendMessage[10].CallbackId + 1) & 1) == 0 )
              {
                v19 = DeferredWork[6].AlpcSendMessageFlags | 8;
                DeferredWork[6].AlpcSendMessageFlags |= 8u;
                v62 = NtCurrentTeb();
                if ( v62->IsImpersonating )
                  DeferredWork[6].AlpcSendMessageFlags = v19 | 4;
                if ( TppCheckForTransactions() )
                  DeferredWork[6].AlpcSendMessageFlags = v20 | 0x10;
                if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                  DeferredWork[6].AlpcSendMessageFlags |= 0x20u;
                v63 = NtCurrentTeb();
                if ( v63->PreferredLanguages )
                  DeferredWork[6].AlpcSendMessageFlags |= 0x40u;
                v64 = NtCurrentTeb();
                if ( v64->SavedPriorityState )
                  DeferredWork[6].AlpcSendMessageFlags |= 0x80u;
              }
              (**v54)(&DeferredWork[2].AlpcSendMessagePort);
LABEL_40:
              if ( (BYTE4(DeferredWork[5].AlpcSendMessagePort) & 4) != 0 )
                v39 = 1;
              v40 = LODWORD(DeferredWork[5].AlpcSendMessagePort) == 4;
              TppCallbackEpilog(&DeferredWork[2].AlpcSendMessagePort);
              DeferredWork[1].AlpcSendMessagePort = 0LL;
              if ( v39 )
                break;
              v18 = *(_DWORD *)(a1 + 440);
              if ( !v18 )
                v18 = MEMORY[0x7FFE03C0];
              if ( *(_DWORD *)(a1 + 424) != v18 )
              {
                RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
                TppAdjustRunningThreadGoalWithLock(a1);
                RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
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
            WorkerFactoryInformation = 3;
            NtSetInformationWorkerFactory(
              *(HANDLE *)(a1 + 56),
              WorkerFactoryCallbackType,
              &WorkerFactoryInformation,
              4u);
LABEL_105:
            if ( (DeferredWork[11].Flags & 1) != 0 )
            {
              TppCallbackSendAndDestroyAlpcMessage(&DeferredWork[2].AlpcSendMessagePort, v4);
              DeferredWork[11].Flags &= ~1u;
            }
            if ( v34 )
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 416));
            if ( v35 )
            {
              v30 = (_RTL_SRWLOCK *)v46;
              RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)&v46->TppWorkerpListLock);
              AlpcSendMessagePort = DeferredWork[0].AlpcSendMessagePort;
              v32 = DeferredWork[0].AlpcSendMessage;
              if ( DeferredWork[0].AlpcSendMessage->ClientId.UniqueProcess != DeferredWork
                || *(_WORKER_FACTORY_DEFERRED_WORK **)DeferredWork[0].AlpcSendMessagePort != DeferredWork )
              {
                __fastfail(3u);
              }
              *(_QWORD *)DeferredWork[0].AlpcSendMessagePort = DeferredWork[0].AlpcSendMessage;
              v32->ClientId.UniqueProcess = AlpcSendMessagePort;
              RtlReleaseSRWLockExclusive(v30 + 113);
            }
            if ( v36 )
            {
              TppPoolRemoveWorker(DeferredWork, v4);
              if ( v37 )
                TppPoolUpdateTrimmedWorker(a1);
            }
            if ( (PVOID)a1 == TppPoolpGlobalPool )
            {
              TppPoolpDereferenceGlobalPool(&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
            }
            else if ( a1 == TppPoolpSerializedPool )
            {
              TppPoolpDereferenceGlobalPool(&TppPoolpSerializedPool, &TppPoolpSerializedPoolLock);
            }
            else if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
            {
              TppPoolpFree((PVOID)a1);
            }
            TppCritResetThread(v53, v4);
            TppFreeThreadData(BaseAddress);
            TppFreeDirectParamsCache(DeferredWork);
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
