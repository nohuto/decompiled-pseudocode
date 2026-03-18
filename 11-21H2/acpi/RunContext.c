/*
 * XREFs of RunContext @ 0x1C0010A50
 * Callers:
 *     InsertReadyQueue @ 0x1C000E2B0 (InsertReadyQueue.c)
 *     DispatchCtxtQueue @ 0x1C00106B0 (DispatchCtxtQueue.c)
 * Callees:
 *     RestartContext @ 0x1C000DCC0 (RestartContext.c)
 *     NewObjData @ 0x1C0015D5C (NewObjData.c)
 *     DupObjData @ 0x1C00169A0 (DupObjData.c)
 *     FreeData @ 0x1C001840C (FreeData.c)
 *     FreeNameSpaceObjects @ 0x1C00186E0 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C00189F4 (DereferenceObjectEx.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0018AA0 (FreeObjData.c)
 *     HeapFree @ 0x1C0018DD0 (HeapFree.c)
 *     _tlgKeywordOn @ 0x1C0023FBC (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0023FEC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     LogSchedEvent @ 0x1C00297A4 (LogSchedEvent.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     AcpiQueueRecordBlackboxInformation @ 0x1C0063F38 (AcpiQueueRecordBlackboxInformation.c)
 *     AmliWatchdogTimeoutAction @ 0x1C0064394 (AmliWatchdogTimeoutAction.c)
 *     AMLIDebugger @ 0x1C0067034 (AMLIDebugger.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 *     InvokePauseCallbacks @ 0x1C00696A4 (InvokePauseCallbacks.c)
 *     ReleaseASLMutex @ 0x1C0069B14 (ReleaseASLMutex.c)
 */

__int64 __fastcall RunContext(PSLIST_ENTRY ListEntry)
{
  char v1; // r15
  _SLIST_ENTRY *v2; // r14
  _SLIST_ENTRY *v4; // rax
  unsigned int Next; // ecx
  __int64 v6; // rax
  __int64 v7; // r9
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v9; // r11
  __int64 v10; // rsi
  __int64 v11; // r10
  unsigned __int32 v12; // ecx
  unsigned int v13; // ecx
  __int64 v14; // rdx
  unsigned int v15; // ebx
  _SLIST_ENTRY *v16; // rdx
  unsigned int v17; // eax
  _SLIST_ENTRY *v18; // rsi
  __int64 v19; // r15
  int v20; // eax
  _QWORD *v21; // rax
  __int64 (__fastcall *v22)(); // r10
  __int64 v23; // r11
  _SLIST_ENTRY *v24; // r14
  __int64 v25; // rsi
  struct _KTHREAD *v26; // r15
  __int64 v27; // r9
  __int64 v28; // r12
  unsigned __int32 v29; // ecx
  unsigned int v30; // ecx
  __int64 v31; // rdx
  PSLIST_ENTRY v32; // rsi
  _SLIST_ENTRY *v33; // rdx
  _SLIST_ENTRY *v34; // rax
  _SLIST_ENTRY **v35; // rcx
  _SLIST_ENTRY *v36; // rdx
  PSLIST_ENTRY *v37; // rcx
  PSLIST_ENTRY v38; // rax
  _SLIST_ENTRY *v39; // r8
  _SLIST_ENTRY **v40; // rdx
  KIRQL v41; // al
  __int64 v42; // r8
  _SLIST_ENTRY *v43; // rsi
  KIRQL v44; // r14
  _SLIST_ENTRY *v45; // r15
  _SLIST_ENTRY *v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  _SLIST_ENTRY *v49; // rcx
  __int64 v50; // rsi
  struct _KTHREAD *v51; // r8
  __int64 v52; // r9
  unsigned __int32 v53; // r13d
  unsigned int v54; // r13d
  __int64 v55; // rdx
  __int64 v57; // r14
  _SLIST_ENTRY *v58; // rax
  unsigned int v59; // ecx
  unsigned int v60; // ecx
  _SLIST_ENTRY *v61; // r12
  int v62; // r14d
  _SLIST_ENTRY *v63; // r13
  unsigned int v64; // ecx
  unsigned int v65; // ecx
  unsigned int v66; // ecx
  __int64 v67; // rcx
  _SLIST_ENTRY *v68; // rcx
  _SLIST_ENTRY *v69; // rcx
  _SLIST_ENTRY *v70; // rax
  unsigned __int64 v71; // kr00_8
  unsigned __int16 v72; // ax
  int v73; // r8d
  int v74; // r9d
  __int16 v75; // [rsp+30h] [rbp-89h] BYREF
  __int16 v76; // [rsp+34h] [rbp-85h] BYREF
  int v77; // [rsp+38h] [rbp-81h] BYREF
  unsigned __int64 v78; // [rsp+40h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-69h] BYREF
  _SLIST_ENTRY *v80; // [rsp+60h] [rbp-59h]
  int v81; // [rsp+68h] [rbp-51h]
  int v82; // [rsp+6Ch] [rbp-4Dh]
  __int16 *v83; // [rsp+70h] [rbp-49h]
  __int64 v84; // [rsp+78h] [rbp-41h]
  unsigned __int64 *v85; // [rsp+80h] [rbp-39h]
  __int64 v86; // [rsp+88h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v87; // [rsp+90h] [rbp-29h] BYREF
  _DWORD *v88; // [rsp+B0h] [rbp-9h]
  __int64 v89; // [rsp+B8h] [rbp-1h]
  _SLIST_ENTRY *v90; // [rsp+C0h] [rbp+7h]
  _DWORD v91[2]; // [rsp+C8h] [rbp+Fh] BYREF
  int *v92; // [rsp+D0h] [rbp+17h]
  __int64 v93; // [rsp+D8h] [rbp+1Fh]

  v1 = 0;
  v2 = (PSLIST_ENTRY)((char *)ListEntry + 392);
  if ( v2->Next == v2 )
  {
    v4 = (_SLIST_ENTRY *)qword_1C00809A8;
    if ( *(__int64 **)qword_1C00809A8 != &RunningContextListHead )
      goto LABEL_158;
    v2->Next = (_SLIST_ENTRY *)&RunningContextListHead;
    ListEntry[25].Next = v4;
    v4->Next = v2;
    qword_1C00809A8 = (__int64)(&ListEntry[24].Next + 1);
    LOBYTE(v75) = 0;
  }
  else
  {
    LOBYTE(v75) = 1;
  }
  Next = (unsigned int)ListEntry[4].Next;
  *((_QWORD *)&ListEntry[25].Next + 1) = KeGetCurrentThread();
  if ( (Next & 0x200) != 0 )
  {
    gReadyQueue |= 0x200u;
    Next = (unsigned int)ListEntry[4].Next;
  }
  v6 = *((_QWORD *)&ListEntry[6].Next + 1);
  if ( v6 )
    v7 = *(_QWORD *)(v6 + 32);
  else
    v7 = *((_QWORD *)&ListEntry[4].Next + 1);
  CurrentThread = KeGetCurrentThread();
  v9 = *((_QWORD *)&ListEntry[25].Next + 1);
  v10 = (unsigned int)gReadyQueue;
  v11 = Next;
  if ( (gDebugger & 0x8000) != 0 && qword_1C0081AA0 )
  {
    v12 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0081A98 + 1, 1u);
    if ( (_DWORD)qword_1C0081A98 == 204 )
      v13 = v12 % 0xCC;
    else
      v13 = v12 % (unsigned int)qword_1C0081A98;
    v14 = 72LL * v13;
    *(_QWORD *)((char *)qword_1C0081AA0 + v14 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)qword_1C0081AA0 + v14) = 1381322307;
    *(_QWORD *)((char *)qword_1C0081AA0 + v14 + 16) = CurrentThread;
    *(_QWORD *)((char *)qword_1C0081AA0 + v14 + 24) = v9;
    *(_QWORD *)((char *)qword_1C0081AA0 + v14 + 32) = ListEntry;
    *(_QWORD *)((char *)qword_1C0081AA0 + v14 + 40) = v10;
    *(_QWORD *)((char *)qword_1C0081AA0 + v14 + 48) = ListEntry;
    *(_QWORD *)((char *)qword_1C0081AA0 + v14 + 56) = v7;
    *(_QWORD *)((char *)qword_1C0081AA0 + v14 + 64) = v11;
    Next = (unsigned int)ListEntry[4].Next;
  }
  do
  {
    v15 = 0;
    LODWORD(ListEntry[4].Next) = Next & 0xFFFFFFE7 | 0x10;
    KeReleaseSpinLock(&SpinLock, NewIrql);
    do
    {
      v16 = ListEntry[26].Next;
      if ( !v16 )
        break;
      if ( (gDebugger & 0x1000) != 0 )
      {
        ConPrintf("\nProcess AML Debugger Request.\n");
        _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
        AMLIDebugger();
        v16 = ListEntry[26].Next;
      }
      v17 = (*((__int64 (__fastcall **)(PSLIST_ENTRY, _SLIST_ENTRY *, _QWORD))&v16[1].Next + 1))(ListEntry, v16, v15);
      v15 = v17;
      if ( v17 == 32772 )
        break;
    }
    while ( v17 != 0x8000 );
    NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    Next = (unsigned int)ListEntry[4].Next;
    if ( (Next & 0x80u) == 0 || v15 != 0x8000 )
    {
      Next &= ~0x10u;
      LODWORD(ListEntry[4].Next) = Next;
    }
  }
  while ( (Next & 8) != 0 );
  if ( v15 == 32772 )
  {
    LODWORD(ListEntry[4].Next) = Next | 0x20;
    goto LABEL_47;
  }
  if ( v15 == 0x8000 )
  {
    if ( !*((_QWORD *)&ListEntry[6].Next + 1) )
      LODWORD(ListEntry[4].Next) = Next & 0xFFFFFF7F;
    v15 = 0;
    goto LABEL_47;
  }
  KeReleaseSpinLock(&SpinLock, NewIrql);
  if ( !v15 )
  {
    v18 = ListEntry[11].Next;
    if ( v18 )
    {
      v19 = gpheapGlobal;
      v15 = 0;
      if ( v18 != &ListEntry[8] )
      {
        *v18 = ListEntry[8];
        v18[1] = ListEntry[9];
        v18[2].Next = ListEntry[10].Next;
        if ( ListEntry[10].Next )
        {
          v58 = (_SLIST_ENTRY *)NewObjData(v19, &ListEntry[8]);
          v18[2].Next = v58;
          if ( !v58 )
          {
            v15 = -1073741670;
            LogError(3221225626LL);
            AcpiDiagTraceAmlError(0LL, 3221225626LL);
            PrintDebugMessage(43, 0, 0, 0, 0LL);
            goto LABEL_28;
          }
          memmove(v58, ListEntry[10].Next, *((unsigned int *)&ListEntry[9].Next + 2));
          v59 = WORD1(v18->Next);
          if ( v59 >= 4 )
          {
            v60 = v59 - 4;
            if ( v60 )
            {
              v64 = v60 - 1;
              if ( !v64 )
                goto LABEL_136;
              v65 = v64 - 125;
              if ( !v65 )
              {
                v69 = v18[2].Next;
                if ( (gdwfAMLI & 4) != 0 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)&v69->Next[7]);
                  v69 = v18[2].Next;
                }
                if ( (gdwfAMLI & 4) != 0 )
                  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v69->Next + 1) + 112LL));
                goto LABEL_104;
              }
              v66 = v65 - 1;
              if ( v66 )
              {
                if ( v66 == 1 )
                {
                  v68 = v18[2].Next;
                  if ( (gdwfAMLI & 4) != 0 )
                  {
                    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v68->Next + 1) + 112LL));
                    v68 = v18[2].Next;
                  }
                  if ( (gdwfAMLI & 4) != 0 )
                    _InterlockedIncrement((volatile signed __int32 *)&v68->Next[7]);
                }
              }
              else
              {
LABEL_136:
                if ( (gdwfAMLI & 4) != 0 )
                  _InterlockedIncrement((volatile signed __int32 *)&v18[2].Next->Next[7]);
              }
            }
            else
            {
              v61 = ListEntry[10].Next;
              v62 = 0;
              v63 = v18[2].Next;
              for ( LODWORD(v63->Next) = v61->Next; v62 < SLODWORD(v61->Next); ++v62 )
              {
                v15 = DupObjData(v19, &v63->Next + 5 * v62 + 1, &v61->Next + 5 * v62 + 1);
                if ( v15 )
                  break;
              }
            }
          }
LABEL_104:
          LOWORD(v18->Next) &= ~1u;
          _InterlockedExchange((volatile __int32 *)&v18->Next + 2, 0);
        }
      }
    }
  }
LABEL_28:
  v20 = (int)ListEntry[4].Next;
  if ( (v20 & 0x20) != 0 )
  {
    v21 = (_QWORD *)*((_QWORD *)&ListEntry[6].Next + 1);
    if ( v21 )
    {
      v22 = (__int64 (__fastcall *)())v21[11];
      v23 = v21[4];
      v24 = (_SLIST_ENTRY *)v21[12];
      v25 = v21[13];
    }
    else
    {
      v22 = (__int64 (__fastcall *)())*((_QWORD *)&ListEntry[10].Next + 1);
      v23 = *((_QWORD *)&ListEntry[4].Next + 1);
      v24 = ListEntry[11].Next;
      v25 = *((_QWORD *)&ListEntry[11].Next + 1);
    }
    if ( v22 == EvalMethodComplete )
    {
      LogSchedEvent(1146048069, (_DWORD)ListEntry, v23, v15, v25);
      *(_DWORD *)v25 = v15;
      *(_QWORD *)(v25 + 8) = ListEntry;
      KeSetEvent((PRKEVENT)(v25 + 16), 0, 0);
    }
    else if ( v15 == 32771 )
    {
      RestartContext((__int64)ListEntry);
    }
    else if ( v22 )
    {
      v26 = KeGetCurrentThread();
      v27 = *((_QWORD *)&ListEntry[25].Next + 1);
      v28 = (unsigned int)gReadyQueue;
      if ( (gDebugger & 0x8000) != 0 && qword_1C0081AA0 )
      {
        v29 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0081A98 + 1, 1u);
        if ( (_DWORD)qword_1C0081A98 == 204 )
          v30 = v29 % 0xCC;
        else
          v30 = v29 % (unsigned int)qword_1C0081A98;
        v31 = 72LL * v30;
        *(_QWORD *)((char *)qword_1C0081AA0 + v31 + 8) = MEMORY[0xFFFFF78000000008];
        *(_DWORD *)((char *)qword_1C0081AA0 + v31) = 1095975746;
        *(_QWORD *)((char *)qword_1C0081AA0 + v31 + 16) = v26;
        *(_QWORD *)((char *)qword_1C0081AA0 + v31 + 24) = v27;
        *(_QWORD *)((char *)qword_1C0081AA0 + v31 + 32) = ListEntry;
        *(_QWORD *)((char *)qword_1C0081AA0 + v31 + 40) = v28;
        *(_QWORD *)((char *)qword_1C0081AA0 + v31 + 48) = v23;
        *(_QWORD *)((char *)qword_1C0081AA0 + v31 + 56) = (int)v15;
        *(_QWORD *)((char *)qword_1C0081AA0 + v31 + 64) = v25;
      }
      ((void (__fastcall *)(__int64, _QWORD, _SLIST_ENTRY *, __int64))v22)(v23 + 120, v15, v24, v25);
    }
    v20 = (int)ListEntry[4].Next;
    if ( (v20 & 0x100) != 0 )
      v15 = 32772;
  }
  if ( (v20 & 0x200) != 0 )
    gReadyQueue &= ~0x200u;
  v32 = ListEntry + 3;
  while ( 1 )
  {
    v33 = v32->Next;
    if ( v32->Next == v32 )
      break;
    if ( *((_DWORD *)&v33[-2].Next + 2) == 1 )
    {
      ReleaseASLMutex(ListEntry, *((_QWORD *)&v33[-1].Next + 1), 0LL);
    }
    else
    {
      if ( *(&v33->Next + 1) != v32 )
        goto LABEL_158;
      v70 = v33->Next;
      if ( *(&v33->Next->Next + 1) != v33 )
        goto LABEL_158;
      v32->Next = v70;
      *((_QWORD *)&v70->Next + 1) = v32;
      HeapFree(&v33[-2].Next + 1);
    }
  }
  v1 = 1;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v2 = (PSLIST_ENTRY)((char *)ListEntry + 392);
LABEL_47:
  if ( !(_BYTE)v75 )
  {
    v34 = v2->Next;
    if ( *(&v2->Next->Next + 1) != v2 )
      goto LABEL_158;
    v35 = (_SLIST_ENTRY **)*((_QWORD *)&v2->Next + 1);
    if ( *v35 != v2 )
      goto LABEL_158;
    *v35 = v34;
    *((_QWORD *)&v34->Next + 1) = v35;
    *((_QWORD *)&v2->Next + 1) = v2;
    v2->Next = v2;
    *((_QWORD *)&ListEntry[25].Next + 1) = 0LL;
  }
  if ( !v1 )
    goto LABEL_80;
  byte_1C0082248 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
  v36 = ListEntry[1].Next;
  if ( *(&v36->Next + 1) != &ListEntry[1]
    || (v37 = (PSLIST_ENTRY *)*((_QWORD *)&ListEntry[1].Next + 1), *v37 != &ListEntry[1])
    || (*v37 = v36,
        v38 = ListEntry + 2,
        *((_QWORD *)&v36->Next + 1) = v37,
        v39 = ListEntry[2].Next,
        *(&v39->Next + 1) != &ListEntry[2])
    || (v40 = (_SLIST_ENTRY **)*((_QWORD *)&ListEntry[2].Next + 1), *v40 != v38) )
  {
LABEL_158:
    __fastfail(3u);
  }
  *v40 = v39;
  *((_QWORD *)&v39->Next + 1) = v40;
  *((_QWORD *)&ListEntry[2].Next + 1) = ListEntry + 2;
  v38->Next = v38;
  KeReleaseSpinLock(&gmutCtxtList, byte_1C0082248);
  if ( ((__int64)ListEntry[8].Next & 1) != 0 )
  {
    v67 = *((_QWORD *)&ListEntry[8].Next + 1);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v67 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v67 & 8) != 0 )
      FreeData();
  }
  else if ( ListEntry[10].Next && *((int *)&ListEntry[8].Next + 2) <= 0 )
  {
    if ( WORD1(ListEntry[8].Next) == 4 )
      FreeDataBuffs(&ListEntry[10].Next->Next + 1, ListEntry[10].Next->Next);
    FreeObjData(&ListEntry[8]);
  }
  ListEntry[8] = 0LL;
  ListEntry[9] = 0LL;
  ListEntry[10].Next = 0LL;
  v41 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
  --gdwcCTObjs;
  KeReleaseSpinLock(&gdwGContextSpinLock, v41);
  if ( AcpiDiagHandle && EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_AML_METHOD_TRACE) )
  {
    *(_QWORD *)&UserData.Size = 2LL;
    v71 = MEMORY[0xFFFFF78000000008] - *((_QWORD *)&ListEntry[28].Next + 1);
    v72 = *((_WORD *)&ListEntry[27].Next + 4);
    v81 = v72;
    v75 = v72 >> 1;
    UserData.Ptr = (unsigned __int64)&v75;
    v80 = ListEntry[28].Next;
    v83 = &v76;
    v78 = v71 / 0x2710;
    v85 = &v78;
    v82 = 0;
    v76 = 0;
    v84 = 2LL;
    v86 = 8LL;
    EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_AML_METHOD_TRACE, 0LL, 4u, &UserData);
  }
  v42 = *((_QWORD *)&ListEntry[28].Next + 1);
  if ( v42
    && (unsigned int)((MEMORY[0xFFFFF78000000008] - v42) / 0x2710uLL) >= 0x3E8
    && (unsigned int)dword_1C007E0E8 > 5
    && (unsigned __int8)tlgKeywordOn(&dword_1C007E0E8) )
  {
    v89 = 2LL;
    v88 = v91;
    v90 = ListEntry[28].Next;
    v91[0] = *((unsigned __int16 *)&ListEntry[27].Next + 4);
    v92 = &v77;
    v91[1] = 0;
    v77 = v74;
    v93 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C007E0E8, (int)&dword_1C0071F48, v73, v74, 5u, &v87);
  }
  v43 = ListEntry[29].Next;
  if ( v43 )
  {
    v44 = KeAcquireSpinLockRaiseToDpc(&AcpiWatchdogLock);
    v45 = v43->Next;
    if ( *((_BYTE *)&v43[5].Next + 8) || *((_BYTE *)&v45[29].Next + 8) )
    {
      *((_BYTE *)&v43[5].Next + 8) = 0;
      if ( !KeCancelTimer((PKTIMER)(&v43[6].Next + 1)) )
      {
        if ( *((_BYTE *)&v45[29].Next + 8) )
          AcpiQueueRecordBlackboxInformation();
        else
          AmliWatchdogTimeoutAction(v43);
      }
    }
    KeReleaseSpinLock(&AcpiWatchdogLock, v44);
    ExFreePoolWithTag(ListEntry[29].Next, 0);
  }
  v46 = ListEntry[28].Next;
  if ( v46 )
    ExFreePoolWithTag(v46, 0);
  v47 = *((_QWORD *)&ListEntry[4].Next + 1);
  if ( v47 )
  {
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v47 + 112), 0xFFFFFFFF) == 1 )
    {
      *(_WORD *)(v47 + 64) |= 4u;
      if ( (*(_WORD *)(v47 + 64) & 0x40) == 0 )
        FreeNameSpaceObjects(v47);
    }
    *((_QWORD *)&ListEntry[4].Next + 1) = 0LL;
  }
  v48 = *((_QWORD *)&ListEntry[26].Next + 1);
  if ( v48 )
  {
    DereferenceObjectEx(v48);
    *((_QWORD *)&ListEntry[26].Next + 1) = 0LL;
  }
  v49 = ListEntry[5].Next;
  if ( v49 )
  {
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)&v49[7], 0xFFFFFFFF) == 1 )
    {
      LOWORD(v49[4].Next) |= 4u;
      if ( ((__int64)v49[4].Next & 0x40) == 0 )
        FreeNameSpaceObjects(v49);
    }
    ListEntry[5].Next = 0LL;
  }
  v50 = *((_QWORD *)&ListEntry[31].Next + 1);
  if ( v50 )
  {
    do
    {
      v57 = *(_QWORD *)(v50 + 24);
      ++dword_1C00821DC;
      if ( ExQueryDepthSList(&AMLIContextLookAsideList) >= (unsigned __int16)word_1C00821D0 )
      {
        ++dword_1C00821E0;
        ((void (__fastcall *)(__int64))qword_1C00821F8)(v50);
      }
      else
      {
        ExpInterlockedPushEntrySList(&AMLIContextLookAsideList, (PSLIST_ENTRY)v50);
      }
      v50 = v57;
    }
    while ( v57 );
  }
  ++dword_1C00821DC;
  if ( ExQueryDepthSList(&AMLIContextLookAsideList) >= (unsigned __int16)word_1C00821D0 )
  {
    ++dword_1C00821E0;
    ((void (__fastcall *)(PSLIST_ENTRY))qword_1C00821F8)(ListEntry);
  }
  else
  {
    ExpInterlockedPushEntrySList(&AMLIContextLookAsideList, ListEntry);
  }
LABEL_80:
  if ( (gReadyQueue & 4) != 0 && glistCtxtHead == (_UNKNOWN *)&glistCtxtHead )
  {
    gReadyQueue = gReadyQueue & 0xFFFFFFF3 | 8;
    if ( (__int64 *)qword_1C0081DB0 != &qword_1C0081DB0 )
    {
      InvokePauseCallbacks();
      LogSchedEvent(1346454338, 0, (_DWORD)ListEntry, v15, 0LL);
    }
  }
  v51 = KeGetCurrentThread();
  v52 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && qword_1C0081AA0 )
  {
    v53 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0081A98 + 1, 1u);
    if ( (_DWORD)qword_1C0081A98 == 204 )
      v54 = v53 % 0xCC;
    else
      v54 = v53 % (unsigned int)qword_1C0081A98;
    v55 = 72LL * v54;
    *(_QWORD *)((char *)qword_1C0081AA0 + v55 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)qword_1C0081AA0 + v55) = 1381322273;
    *(_QWORD *)((char *)qword_1C0081AA0 + v55 + 16) = v51;
    *(_QWORD *)((char *)qword_1C0081AA0 + v55 + 24) = 0LL;
    *(_QWORD *)((char *)qword_1C0081AA0 + v55 + 32) = 0LL;
    *(_QWORD *)((char *)qword_1C0081AA0 + v55 + 40) = v52;
    *(_QWORD *)((char *)qword_1C0081AA0 + v55 + 48) = ListEntry;
    *(_QWORD *)((char *)qword_1C0081AA0 + v55 + 56) = (int)v15;
    *(_QWORD *)((char *)qword_1C0081AA0 + v55 + 64) = 0LL;
  }
  return v15;
}
