/*
 * XREFs of InsertReadyQueue @ 0x1C000E2B0
 * Callers:
 *     RestartCtxtPassive @ 0x1C000D890 (RestartCtxtPassive.c)
 *     RestartContext @ 0x1C000DCC0 (RestartContext.c)
 *     AsyncEvalObject @ 0x1C00114E0 (AsyncEvalObject.c)
 *     ParseRelease @ 0x1C0024F10 (ParseRelease.c)
 *     DequeueAndReadyContext @ 0x1C0026C94 (DequeueAndReadyContext.c)
 * Callees:
 *     RestartContext @ 0x1C000DCC0 (RestartContext.c)
 *     RunContext @ 0x1C0010A50 (RunContext.c)
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     LogSchedEvent @ 0x1C00297A4 (LogSchedEvent.c)
 *     OSQueueWorkItem @ 0x1C002B8D0 (OSQueueWorkItem.c)
 *     AMLIDebugger @ 0x1C0067034 (AMLIDebugger.c)
 */

__int64 __fastcall InsertReadyQueue(PSLIST_ENTRY ListEntry, char a2)
{
  unsigned int v2; // esi
  __int64 v5; // rax
  __int64 v6; // r9
  struct _KTHREAD *CurrentThread; // r14
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // r15
  unsigned __int32 v11; // ecx
  unsigned int v12; // ecx
  __int64 v13; // rdx
  int Next; // eax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // r8
  struct _KTHREAD *v18; // r11
  __int64 v19; // r9
  __int64 v20; // r10
  __int64 v21; // rsi
  unsigned __int32 v22; // edi
  unsigned int v23; // edi
  __int64 v24; // rdx
  int v25; // eax
  PSLIST_ENTRY v26; // rax
  PSLIST_ENTRY *v27; // rdx
  __int64 v29; // rax
  __int64 v30; // r8
  struct _KTHREAD *v31; // r11
  __int64 v32; // r9
  __int64 v33; // r10
  __int64 v34; // rsi
  unsigned __int32 v35; // edi
  unsigned int v36; // edi
  __int64 v37; // rdx
  _QWORD *v38; // r8
  __int64 (__fastcall *v39)(); // rax
  __int64 v40; // r9
  __int64 v41; // r8
  struct _KTHREAD *v42; // r11
  __int64 v43; // r10
  __int64 v44; // rbp
  unsigned __int32 v45; // edi
  unsigned int v46; // edi
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // r9

  v2 = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  v5 = *((_QWORD *)&ListEntry[6].Next + 1);
  if ( v5 )
    v6 = *(_QWORD *)(v5 + 32);
  else
    v6 = *((_QWORD *)&ListEntry[4].Next + 1);
  CurrentThread = KeGetCurrentThread();
  v8 = *((_QWORD *)&ListEntry[7].Next + 1);
  v9 = *((_QWORD *)&ListEntry[25].Next + 1);
  v10 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && qword_1C0081AA0 )
  {
    v11 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0081A98 + 1, 1u);
    if ( (_DWORD)qword_1C0081A98 == 204 )
      v12 = v11 % 0xCC;
    else
      v12 = v11 % (unsigned int)qword_1C0081A98;
    v13 = 72LL * v12;
    *(_QWORD *)((char *)qword_1C0081AA0 + v13 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)qword_1C0081AA0 + v13) = 1229869905;
    *(_QWORD *)((char *)qword_1C0081AA0 + v13 + 16) = CurrentThread;
    *(_QWORD *)((char *)qword_1C0081AA0 + v13 + 24) = v9;
    *(_QWORD *)((char *)qword_1C0081AA0 + v13 + 32) = ListEntry;
    *(_QWORD *)((char *)qword_1C0081AA0 + v13 + 40) = v10;
    *(_QWORD *)((char *)qword_1C0081AA0 + v13 + 48) = ListEntry;
    *(_QWORD *)((char *)qword_1C0081AA0 + v13 + 56) = v6;
    *(_QWORD *)((char *)qword_1C0081AA0 + v13 + 64) = v8;
  }
  Next = (int)ListEntry[4].Next;
  if ( (Next & 1) != 0 )
  {
    LODWORD(ListEntry[4].Next) = Next & 0xFFFFFFFE;
    if ( !KeCancelTimer((PKTIMER)&ListEntry[12]) )
      LODWORD(ListEntry[4].Next) |= 2u;
  }
  v15 = LODWORD(ListEntry[4].Next) | 8;
  LODWORD(ListEntry[4].Next) = v15;
  if ( (v15 & 2) == 0 && ((v15 & 0x10) == 0 || (v15 & 0x80) != 0) )
  {
    if ( !a2 )
    {
      if ( (gdwfAMLI & 4) != 0 )
      {
        if ( (gReadyQueue & 8) == 0 )
          return (unsigned int)RunContext(ListEntry);
        v50 = *((_QWORD *)&ListEntry[6].Next + 1);
        if ( v50 )
          v51 = *(_QWORD *)(v50 + 32);
        else
          v51 = *((_QWORD *)&ListEntry[4].Next + 1);
        LogSchedEvent(1363367000, (_DWORD)ListEntry, (_DWORD)ListEntry, v51, *((_QWORD *)&ListEntry[7].Next + 1));
        v25 = (int)ListEntry[4].Next;
        if ( (v25 & 0x40) != 0 )
          goto LABEL_27;
        LODWORD(ListEntry[4].Next) = v25 | 0x40;
        v26 = ListEntry + 2;
        v27 = (PSLIST_ENTRY *)qword_1C0081D70;
        if ( *(__int64 **)qword_1C0081D70 == &qword_1C0081D68 )
          goto LABEL_26;
      }
      else
      {
        if ( (v15 & 0x80) != 0 && *((struct _KTHREAD **)&ListEntry[25].Next + 1) == KeGetCurrentThread() )
        {
          v48 = *((_QWORD *)&ListEntry[6].Next + 1);
          if ( v48 )
            v49 = *(_QWORD *)(v48 + 32);
          else
            v49 = *((_QWORD *)&ListEntry[4].Next + 1);
          LogSchedEvent(1313166164, (_DWORD)ListEntry, (_DWORD)ListEntry, v49, *((_QWORD *)&ListEntry[7].Next + 1));
          return (unsigned int)RunContext(ListEntry);
        }
        if ( (__int64 *)RunningContextListHead == &RunningContextListHead && (gReadyQueue & 8) == 0 )
        {
          v29 = *((_QWORD *)&ListEntry[6].Next + 1);
          if ( v29 )
            v30 = *(_QWORD *)(v29 + 32);
          else
            v30 = *((_QWORD *)&ListEntry[4].Next + 1);
          v31 = KeGetCurrentThread();
          v32 = *((_QWORD *)&ListEntry[7].Next + 1);
          v33 = *((_QWORD *)&ListEntry[25].Next + 1);
          v34 = (unsigned int)gReadyQueue;
          if ( (gDebugger & 0x8000) != 0 && qword_1C0081AA0 )
          {
            v35 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0081A98 + 1, 1u);
            if ( (_DWORD)qword_1C0081A98 == 204 )
              v36 = v35 % 0xCC;
            else
              v36 = v35 % (unsigned int)qword_1C0081A98;
            v37 = 72LL * v36;
            *(_QWORD *)((char *)qword_1C0081AA0 + v37 + 8) = MEMORY[0xFFFFF78000000008];
            *(_DWORD *)((char *)qword_1C0081AA0 + v37) = 1163280716;
            *(_QWORD *)((char *)qword_1C0081AA0 + v37 + 16) = v31;
            *(_QWORD *)((char *)qword_1C0081AA0 + v37 + 24) = v33;
            *(_QWORD *)((char *)qword_1C0081AA0 + v37 + 32) = ListEntry;
            *(_QWORD *)((char *)qword_1C0081AA0 + v37 + 40) = v34;
            *(_QWORD *)((char *)qword_1C0081AA0 + v37 + 48) = ListEntry;
            *(_QWORD *)((char *)qword_1C0081AA0 + v37 + 56) = v30;
            *(_QWORD *)((char *)qword_1C0081AA0 + v37 + 64) = v32;
          }
          v2 = RunContext(ListEntry);
          if ( (__int64 *)qword_1C0081D68 != &qword_1C0081D68 && (gReadyQueue & 2) == 0 )
          {
            LogSchedEvent(1263092555, 0, v2, 0, 0LL);
            gReadyQueue |= 2u;
            OSQueueWorkItem(&qword_1C0081D88);
          }
          return v2;
        }
        v16 = *((_QWORD *)&ListEntry[6].Next + 1);
        if ( v16 )
          v17 = *(_QWORD *)(v16 + 32);
        else
          v17 = *((_QWORD *)&ListEntry[4].Next + 1);
        v18 = KeGetCurrentThread();
        v19 = *((_QWORD *)&ListEntry[7].Next + 1);
        v20 = *((_QWORD *)&ListEntry[25].Next + 1);
        v21 = (unsigned int)gReadyQueue;
        if ( (gDebugger & 0x8000) != 0 && qword_1C0081AA0 )
        {
          v22 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0081A98 + 1, 1u);
          if ( (_DWORD)qword_1C0081A98 == 204 )
            v23 = v22 % 0xCC;
          else
            v23 = v22 % (unsigned int)qword_1C0081A98;
          v24 = 72LL * v23;
          *(_QWORD *)((char *)qword_1C0081AA0 + v24 + 8) = MEMORY[0xFFFFF78000000008];
          *(_DWORD *)((char *)qword_1C0081AA0 + v24) = 1363367000;
          *(_QWORD *)((char *)qword_1C0081AA0 + v24 + 16) = v18;
          *(_QWORD *)((char *)qword_1C0081AA0 + v24 + 24) = v20;
          *(_QWORD *)((char *)qword_1C0081AA0 + v24 + 32) = ListEntry;
          *(_QWORD *)((char *)qword_1C0081AA0 + v24 + 40) = v21;
          *(_QWORD *)((char *)qword_1C0081AA0 + v24 + 48) = ListEntry;
          *(_QWORD *)((char *)qword_1C0081AA0 + v24 + 56) = v17;
          *(_QWORD *)((char *)qword_1C0081AA0 + v24 + 64) = v19;
        }
        v25 = (int)ListEntry[4].Next;
        if ( (v25 & 0x40) != 0 )
        {
LABEL_27:
          v2 = 32772;
          LODWORD(ListEntry[4].Next) = v25 | 0x20;
          return v2;
        }
        LODWORD(ListEntry[4].Next) = v25 | 0x40;
        v26 = ListEntry + 2;
        v27 = (PSLIST_ENTRY *)qword_1C0081D70;
        if ( *(__int64 **)qword_1C0081D70 == &qword_1C0081D68 )
        {
LABEL_26:
          v26->Next = (_SLIST_ENTRY *)&qword_1C0081D68;
          *((_QWORD *)&v26->Next + 1) = v27;
          *v27 = v26;
          qword_1C0081D70 = (__int64)v26;
          v25 = (int)ListEntry[4].Next;
          goto LABEL_27;
        }
      }
      __fastfail(3u);
    }
    KeReleaseSpinLock(&SpinLock, NewIrql);
    v38 = (_QWORD *)*((_QWORD *)&ListEntry[6].Next + 1);
    if ( v38 )
    {
      v39 = (__int64 (__fastcall *)())v38[11];
      v40 = v38[4];
      v41 = v38[13];
    }
    else
    {
      v39 = (__int64 (__fastcall *)())*((_QWORD *)&ListEntry[10].Next + 1);
      v40 = *((_QWORD *)&ListEntry[4].Next + 1);
      v41 = *((_QWORD *)&ListEntry[11].Next + 1);
    }
    if ( v39 == EvalMethodComplete )
    {
      v42 = KeGetCurrentThread();
      v43 = *((_QWORD *)&ListEntry[25].Next + 1);
      v44 = (unsigned int)gReadyQueue;
      if ( (gDebugger & 0x8000) != 0 && qword_1C0081AA0 )
      {
        v45 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0081A98 + 1, 1u);
        if ( (_DWORD)qword_1C0081A98 == 204 )
          v46 = v45 % 0xCC;
        else
          v46 = v45 % (unsigned int)qword_1C0081A98;
        v47 = 72LL * v46;
        *(_QWORD *)((char *)qword_1C0081AA0 + v47 + 8) = MEMORY[0xFFFFF78000000008];
        *(_DWORD *)((char *)qword_1C0081AA0 + v47) = 1146048069;
        *(_QWORD *)((char *)qword_1C0081AA0 + v47 + 16) = v42;
        *(_QWORD *)((char *)qword_1C0081AA0 + v47 + 24) = v43;
        *(_QWORD *)((char *)qword_1C0081AA0 + v47 + 32) = ListEntry;
        *(_QWORD *)((char *)qword_1C0081AA0 + v47 + 40) = v44;
        *(_QWORD *)((char *)qword_1C0081AA0 + v47 + 48) = v40;
        *(_QWORD *)((char *)qword_1C0081AA0 + v47 + 56) = 32771LL;
        *(_QWORD *)((char *)qword_1C0081AA0 + v47 + 64) = v41;
      }
      *(_DWORD *)v41 = 32771;
      *(_QWORD *)(v41 + 8) = ListEntry;
      KeSetEvent((PRKEVENT)(v41 + 16), 0, 0);
    }
    else
    {
      RestartContext((__int64)ListEntry);
    }
    NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  }
  return v2;
}
