/*
 * XREFs of TppWorkerThread @ 0x180035760
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18002FCE0 (TppPoolpDereferenceGlobalPool.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     TppGetCurrentThreadNumaNode @ 0x180033DE4 (TppGetCurrentThreadNumaNode.c)
 *     TppCheckForTransactions @ 0x180035698 (TppCheckForTransactions.c)
 *     RtlClearThreadWorkOnBehalfTicket @ 0x1800356F0 (RtlClearThreadWorkOnBehalfTicket.c)
 *     TppCallbackEpilog @ 0x18003636C (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18003668C (TppCallbackCheckThreadAfterCallback.c)
 *     TppPrepareDirectParams @ 0x18003683C (TppPrepareDirectParams.c)
 *     TppWorkerFindTask @ 0x1800378B0 (TppWorkerFindTask.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlExitUserThread @ 0x18005DFF0 (RtlExitUserThread.c)
 *     TppPoolUpdateTrimmedWorker @ 0x180069A98 (TppPoolUpdateTrimmedWorker.c)
 *     TppAllocThreadData @ 0x1800783A4 (TppAllocThreadData.c)
 *     TppPoolAddWorker @ 0x18007B338 (TppPoolAddWorker.c)
 *     TppPoolRemoveWorker @ 0x18007CFC0 (TppPoolRemoveWorker.c)
 *     TppCritSetThread @ 0x18007DF14 (TppCritSetThread.c)
 *     TppFreeDirectParamsCache @ 0x18007E57C (TppFreeDirectParamsCache.c)
 *     TppCallbackPerformDeferredWork @ 0x18007E5C8 (TppCallbackPerformDeferredWork.c)
 *     TppFreeThreadData @ 0x18007F0E8 (TppFreeThreadData.c)
 *     RtlRegisterThreadWithCsrss @ 0x1800804A0 (RtlRegisterThreadWithCsrss.c)
 *     TppCritResetThread @ 0x180081504 (TppCritResetThread.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x18008269C (TppCallbackSendAndDestroyAlpcMessage.c)
 *     TppPoolpFree @ 0x1800850AC (TppPoolpFree.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtWorkerFactoryWorkerReady @ 0x18009EE10 (NtWorkerFactoryWorkerReady.c)
 *     NtSetInformationThread @ 0x18009EF90 (NtSetInformationThread.c)
 *     NtSetInformationWorkerFactory @ 0x1800A23A0 (NtSetInformationWorkerFactory.c)
 *     ZwWaitForWorkViaWorkerFactory @ 0x1800A2A40 (ZwWaitForWorkViaWorkerFactory.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlResetStackOverflow @ 0x1800E8A98 (RtlResetStackOverflow.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x1801258C0 (TppAdjustRunningThreadGoalWithLock.c)
 *     TppETWWorkerNodeSwitch @ 0x1801266E4 (TppETWWorkerNodeSwitch.c)
 *     TppWorkerpInnerExceptionFilter @ 0x1801267F8 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x180126890 (TppWorkerpOuterExceptionFilter.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

void __fastcall __noreturn TppWorkerThread(__int64 a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9
  char v5; // di
  struct _PEB *v6; // rdi
  _LIST_ENTRY *Blink; // rcx
  _OWORD *v8; // rdi
  __int128 *Heap; // rax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  _QWORD *i; // rdx
  unsigned __int8 v16; // r15
  __int64 v17; // rsi
  __int16 v18; // di
  unsigned int v19; // r12d
  int v20; // r14d
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rcx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  bool v29; // di
  signed __int64 v30; // rax
  signed __int64 v31; // rtt
  int v32; // ecx
  signed __int64 v33; // rax
  char v34; // r8
  signed __int64 v35; // rtt
  struct _PEB *v36; // rdi
  _LIST_ENTRY *v37; // rdx
  _LIST_ENTRY *v38; // rax
  char v39; // [rsp+32h] [rbp-2A6h] BYREF
  char v40; // [rsp+33h] [rbp-2A5h]
  char v41; // [rsp+34h] [rbp-2A4h]
  char v42; // [rsp+35h] [rbp-2A3h]
  char v43; // [rsp+36h] [rbp-2A2h]
  char v44; // [rsp+37h] [rbp-2A1h]
  bool v45; // [rsp+38h] [rbp-2A0h]
  int v46; // [rsp+3Ch] [rbp-29Ch]
  int v47; // [rsp+40h] [rbp-298h]
  unsigned int v48; // [rsp+44h] [rbp-294h]
  int v49; // [rsp+48h] [rbp-290h] BYREF
  _WORD v50[2]; // [rsp+4Ch] [rbp-28Ch] BYREF
  __int64 v51; // [rsp+50h] [rbp-288h]
  struct _PEB *v52; // [rsp+58h] [rbp-280h]
  signed __int64 v53; // [rsp+60h] [rbp-278h]
  __int128 *v54; // [rsp+68h] [rbp-270h]
  signed __int64 v55; // [rsp+70h] [rbp-268h]
  _LIST_ENTRY ***v56; // [rsp+78h] [rbp-260h] BYREF
  int v57; // [rsp+80h] [rbp-258h] BYREF
  __int64 v58; // [rsp+88h] [rbp-250h] BYREF
  _DWORD *v59; // [rsp+90h] [rbp-248h]
  __int64 **v60; // [rsp+98h] [rbp-240h] BYREF
  int v61; // [rsp+A0h] [rbp-238h]
  __int64 v62; // [rsp+B8h] [rbp-220h]
  struct _TEB *v63; // [rsp+D0h] [rbp-208h]
  struct _TEB *v64; // [rsp+D8h] [rbp-200h]
  struct _TEB *v65; // [rsp+E0h] [rbp-1F8h]
  struct _TEB *v66; // [rsp+F0h] [rbp-1E8h]
  struct _TEB *v67; // [rsp+F8h] [rbp-1E0h]
  struct _TEB *v68; // [rsp+100h] [rbp-1D8h]
  _LIST_ENTRY *p_TppWorkerpList; // [rsp+120h] [rbp-1B8h] BYREF
  _LIST_ENTRY *v70; // [rsp+128h] [rbp-1B0h]
  __int64 **v71; // [rsp+140h] [rbp-198h]
  __int64 v72; // [rsp+150h] [rbp-188h]
  _BYTE v73[72]; // [rsp+158h] [rbp-180h] BYREF
  int v74; // [rsp+1A0h] [rbp-138h]
  char v75; // [rsp+1A4h] [rbp-134h]
  __int64 v76; // [rsp+1B0h] [rbp-128h]
  __int64 **v77; // [rsp+1B8h] [rbp-120h]
  int v78; // [rsp+1C0h] [rbp-118h]
  __int64 v79; // [rsp+1D8h] [rbp-100h]
  __int64 v80; // [rsp+228h] [rbp-B0h] BYREF
  int v81; // [rsp+23Ch] [rbp-9Ch]
  _GUID ActivityId; // [rsp+240h] [rbp-98h]
  __int64 v83; // [rsp+250h] [rbp-88h]
  __int128 v84; // [rsp+258h] [rbp-80h] BYREF
  __int128 v85; // [rsp+268h] [rbp-70h] BYREF
  _OWORD *v86; // [rsp+278h] [rbp-60h]
  unsigned int v87; // [rsp+280h] [rbp-58h] BYREF
  char v88; // [rsp+288h] [rbp-50h]
  unsigned __int16 v89; // [rsp+28Ah] [rbp-4Eh] BYREF
  __int128 v90; // [rsp+290h] [rbp-48h] BYREF

  v59 = (_DWORD *)a1;
  v58 = 0LL;
  v51 = a1;
  v53 = a1;
  v40 = 0;
  v41 = 0;
  v44 = 0;
  v42 = 0;
  v39 = 0;
  v43 = 0;
  v56 = 0LL;
  v46 = 0;
  RtlRegisterThreadWithCsrss();
  v52 = NtCurrentPeb();
  TppCritSetThread(&v58);
  TppAllocThreadData(&v56);
  if ( v56 )
    *v56 = &p_TppWorkerpList;
  memset_thunk_772440563353939046(&p_TppWorkerpList, 0, 0x170uLL);
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 368), v2, v3, v4);
  if ( *(_BYTE *)(a1 + 377) )
  {
    v47 = -1073741558;
    v5 = 1;
    v44 = 1;
  }
  else
  {
    v47 = NtWorkerFactoryWorkerReady(*(_QWORD *)(a1 + 56));
    if ( v47 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1);
      v5 = v44;
    }
    else
    {
      v5 = 1;
      v44 = 1;
    }
  }
  RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 368));
  if ( v5 )
    goto LABEL_108;
  TppPoolAddWorker(a1, &p_TppWorkerpList);
  v42 = 1;
  v6 = v52;
  RtlAcquireSRWLockExclusive(&v52->TppWorkerpListLock);
  Blink = v52->TppWorkerpList.Blink;
  if ( Blink->Flink != &v52->TppWorkerpList )
    __fastfail(3u);
  p_TppWorkerpList = &v52->TppWorkerpList;
  v70 = Blink;
  Blink->Flink = (_LIST_ENTRY *)&p_TppWorkerpList;
  v6->TppWorkerpList.Blink = (_LIST_ENTRY *)&p_TppWorkerpList;
  v41 = 1;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)&v6->TppWorkerpListLock);
  memset_thunk_772440563353939046(v73, 0, 0x100uLL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 416));
  v40 = 1;
  TppGetCurrentThreadNumaNode(a1, (int *)&v87, 0LL, &v89);
  while ( 1 )
  {
LABEL_12:
    v46 = 0;
    v84 = 0LL;
    v85 = 0LL;
    v8 = v86;
    v48 = 16;
    if ( v86 )
    {
      if ( *((_DWORD *)v86 + 2) != 1 )
      {
LABEL_17:
        v48 = 1;
        Heap = &v84;
        goto LABEL_18;
      }
      memset_thunk_772440563353939046(*(void **)v86, 0, 56LL * *((unsigned int *)v86 + 3));
      v48 = *((_DWORD *)v8 + 3);
      Heap = *(__int128 **)v8;
    }
    else
    {
      v61 = TppHeapTag + 3145728;
      Heap = (__int128 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 3145728) | 8u, 912LL);
      if ( !Heap )
        goto LABEL_17;
      *((_QWORD *)Heap + 112) = Heap;
      *((_DWORD *)Heap + 226) = 1;
      *((_DWORD *)Heap + 227) = 16;
      v86 = Heap + 56;
      v48 = 16;
    }
LABEL_18:
    v54 = Heap;
    v49 = 0;
    v10 = ZwWaitForWorkViaWorkerFactory(*(_QWORD *)(a1 + 56), Heap, v48, &v49, &v80);
    v47 = v10;
    v11 = v49;
    if ( v10 )
      v11 = 0;
    v49 = v11;
    if ( (v81 & 1) != 0 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v80);
      v81 &= ~1u;
      v10 = v47;
    }
    if ( v10 )
    {
      v12 = v10 - 128;
      if ( !v12 )
        goto LABEL_108;
      v13 = v12 - 64;
      if ( v13 )
      {
        if ( v13 == 66 )
        {
          v43 = 1;
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
      if ( !a1 || (v14 = *(_DWORD *)(a1 + 440)) == 0 )
        v14 = MEMORY[0x7FFE03C0];
      v59 = (_DWORD *)(a1 + 424);
      if ( *(_DWORD *)(a1 + 424) != v14 )
      {
        RtlAcquireSRWLockExclusive(a1 + 72);
        TppAdjustRunningThreadGoalWithLock(a1);
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
      }
      if ( (unsigned __int8)TppPrepareDirectParams(
                              (unsigned int)&p_TppWorkerpList,
                              (_DWORD)v54,
                              v49,
                              v48,
                              a1,
                              (__int64)&v39) )
        goto LABEL_108;
      if ( !v39 )
      {
        if ( (_QWORD)v84 )
        {
          v62 = v84;
          v76 = *(_QWORD *)(v84 + 56);
          v77 = (__int64 **)v84;
          v16 = *(_BYTE *)(v84 + 68);
          v17 = *(unsigned int *)(v84 + 64);
          v18 = -1;
          v19 = v87;
          v20 = v89;
          v21 = *(_DWORD *)(a1 + 428);
          if ( (_DWORD)v17 == v87 )
          {
            if ( v21 == -1 && !v88 )
            {
              v88 = 1;
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v17));
            }
          }
          else
          {
            if ( v21 == -1 )
            {
              if ( v88 )
              {
                i = (_QWORD *)(a1 + 40);
                _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v87));
              }
              else
              {
                v88 = 1;
                i = (_QWORD *)(v53 + 40);
              }
              _InterlockedIncrement((volatile signed __int32 *)(*i + 4 * v17));
            }
            v22 = v16;
            v23 = 1LL << v16;
            if ( ((1LL << v16) & *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL * (unsigned int)(v20 + TppMaximumGroups * v17))) != 0 )
            {
              v18 = v20;
            }
            else
            {
              for ( i = 0LL; ; LOWORD(i) = (_WORD)i + 1 )
              {
                while ( 1 )
                {
                  v22 = (unsigned __int16)i;
                  if ( (unsigned __int16)i >= (unsigned int)TppMaximumGroups )
                    goto LABEL_47;
                  if ( (_WORD)i != (_WORD)v20 )
                    break;
                  LOWORD(i) = (_WORD)i + 1;
                }
                v22 = *(_QWORD *)(a1 + 48) + 16LL * (TppMaximumGroups * (_DWORD)v17 + (unsigned int)(unsigned __int16)i);
                if ( (v23 & *(_QWORD *)v22) != 0 )
                  break;
              }
              v18 = (__int16)i;
            }
LABEL_47:
            v87 = v17;
            v89 = v18;
            if ( (unsigned int)RtlGetCurrentServiceSessionId(v22, i, (unsigned int)TppMaximumGroups, v23) )
              v24 = (__int64)NtCurrentPeb()->SharedData + 556;
            else
              v24 = 2147353478LL;
            if ( *(_BYTE *)v24 )
              TppETWWorkerNodeSwitch(a1, v19, v17, (unsigned __int16)v20, v18);
            v90 = 0LL;
            NtSetInformationThread(-2LL, 30LL, &v90);
            v50[0] = v18;
            v50[1] = v16;
            NtSetInformationThread(-2LL, 33LL, v50);
          }
          ActivityId = NtCurrentTeb()->ActivityId;
          if ( v79 && (*(_BYTE *)(v79 + 436) & 1) == 0 )
          {
            v25 = v78 | 8;
            v78 |= 8u;
            v63 = NtCurrentTeb();
            if ( v63->IsImpersonating )
              v78 = v25 | 4;
            if ( TppCheckForTransactions() )
              v78 = v26 | 0x10;
            if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
              v78 |= 0x20u;
            v64 = NtCurrentTeb();
            if ( v64->PreferredLanguages )
              v78 |= 0x40u;
            v65 = NtCurrentTeb();
            if ( v65->SavedPriorityState )
              v78 |= 0x80u;
          }
          (*(void (__fastcall **)(_BYTE *, __int64, _QWORD, __int128 *))(v62 + 56))(
            v73,
            v62,
            *((_QWORD *)&v84 + 1),
            &v85);
          goto LABEL_89;
        }
        while ( 1 )
        {
          if ( !(unsigned int)TppWorkerFindTask(a1, &p_TppWorkerpList, &v60) )
            goto LABEL_108;
          if ( (v81 & 1) != 0 )
          {
            TppCallbackSendAndDestroyAlpcMessage(v73);
            v81 &= ~1u;
          }
          v83 = 0LL;
          RtlClearThreadWorkOnBehalfTicket();
          v71 = v60;
          v76 = **v60;
          v77 = v60;
          v79 = v72;
          ActivityId = NtCurrentTeb()->ActivityId;
          if ( v72 && (*(_BYTE *)(v72 + 436) & 1) == 0 )
          {
            v27 = v78 | 8;
            v78 |= 8u;
            v66 = NtCurrentTeb();
            if ( v66->IsImpersonating )
              v78 = v27 | 4;
            if ( TppCheckForTransactions() )
              v78 = v28 | 0x10;
            if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
              v78 |= 0x20u;
            v67 = NtCurrentTeb();
            if ( v67->PreferredLanguages )
              v78 |= 0x40u;
            v68 = NtCurrentTeb();
            if ( v68->SavedPriorityState )
              v78 |= 0x80u;
          }
          ((void (__fastcall *)(_BYTE *))**v60)(v73);
LABEL_89:
          v29 = (v75 & 4) != 0;
          v45 = v74 == 4;
          TppCallbackEpilog(v73);
          v71 = 0LL;
          if ( v29 )
            break;
          if ( !a1 || (v32 = *(_DWORD *)(a1 + 440)) == 0 )
            v32 = MEMORY[0x7FFE03C0];
          if ( *v59 != v32 )
          {
            RtlAcquireSRWLockExclusive(a1 + 72);
            TppAdjustRunningThreadGoalWithLock(a1);
            RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
          }
          _m_prefetchw((const void *)(a1 + 8));
          v33 = *(_QWORD *)(a1 + 8);
          v55 = v33;
          do
          {
            if ( *(_BYTE *)(a1 + 376) )
              goto LABEL_108;
            if ( HIDWORD(v33) && ((v33 & 0x8000u) == 0LL || v45) )
            {
              v34 = 0;
              HIDWORD(v55) = HIDWORD(v33) - 1;
            }
            else
            {
              v34 = 1;
              LODWORD(v55) = v33 ^ (unsigned __int16)(v33 ^ (v33 + 1));
            }
            v35 = v33;
            v33 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v55, v33);
            v55 = v33;
          }
          while ( v35 != v33 );
          v39 = v34;
          if ( v34 )
            goto LABEL_12;
        }
        _m_prefetchw((const void *)(a1 + 8));
        v30 = *(_QWORD *)(a1 + 8);
        v53 = v30;
        do
        {
          LODWORD(v53) = v30 ^ (unsigned __int16)(v30 ^ (v30 + 1));
          v31 = v30;
          v30 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v53, v30);
          v53 = v30;
        }
        while ( v31 != v30 );
        v57 = 3;
        NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 9LL, &v57);
LABEL_108:
        TppCallbackPerformDeferredWork(v73);
        if ( v40 )
          _InterlockedDecrement((volatile signed __int32 *)(a1 + 416));
        if ( v41 )
        {
          v36 = v52;
          RtlAcquireSRWLockExclusive(&v52->TppWorkerpListLock);
          v37 = p_TppWorkerpList;
          v38 = v70;
          if ( (_LIST_ENTRY **)p_TppWorkerpList->Blink != &p_TppWorkerpList
            || (_LIST_ENTRY **)v70->Flink != &p_TppWorkerpList )
          {
            __fastfail(3u);
          }
          v70->Flink = p_TppWorkerpList;
          v37->Blink = v38;
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)&v36->TppWorkerpListLock);
        }
        if ( v42 )
        {
          TppPoolRemoveWorker(&p_TppWorkerpList);
          if ( v43 )
            TppPoolUpdateTrimmedWorker(a1);
        }
        if ( a1 == TppPoolpGlobalPool )
        {
          TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, (__int64)&TppPoolpGlobalPoolLock);
        }
        else if ( a1 == TppPoolpSerializedPool )
        {
          TppPoolpDereferenceGlobalPool((const void **)&TppPoolpSerializedPool, (__int64)&TppPoolpSerializedPoolLock);
        }
        else if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
        {
          TppPoolpFree(a1);
        }
        TppCritResetThread(v58);
        TppFreeThreadData(v56);
        TppFreeDirectParamsCache(&p_TppWorkerpList);
        v47 = 0;
        RtlExitUserThread(0LL);
      }
    }
  }
}
