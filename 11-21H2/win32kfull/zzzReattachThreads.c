/*
 * XREFs of zzzReattachThreads @ 0x1C00A8E58
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 *     zzzAttachThreadInput @ 0x1C009D530 (zzzAttachThreadInput.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01E0DC0 (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     zzzEndDeferWinEventNotify @ 0x1C0048944 (zzzEndDeferWinEventNotify.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     SetNewForegroundQueue @ 0x1C007FCD0 (SetNewForegroundQueue.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C00A86E4 (zzzInputFocusReceivedWindowEvent.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1C00A898C (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C00A918C (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x1C00A9230 (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x1C00A9310 (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C00A9BFC (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x1C00AC8B0 (-InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00AD9D0 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     ?IsSingleThreadAttached@tagQ@@QEBA_NXZ @ 0x1C010C718 (-IsSingleThreadAttached@tagQ@@QEBA_NXZ.c)
 *     UnpackAffectedThreadList @ 0x1C01108A4 (UnpackAffectedThreadList.c)
 *     ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x1C0117970 (-IsAnyThreadAttached@tagQ@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     _GetNextQueueWindow @ 0x1C01EE6BC (_GetNextQueueWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall zzzReattachThreads(char a1, const struct tagTHREADINFO *a2, const struct tagTHREADINFO *a3)
{
  int v3; // r15d
  int v4; // edi
  int v5; // esi
  __int64 v8; // rax
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rcx
  const struct tagTHREADINFO *v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // rcx
  const struct tagTHREADINFO *v17; // rcx
  struct _LIST_ENTRY *RecalcHeadPtiListEntry; // r14
  struct _LIST_ENTRY *i; // rdi
  struct tagTHREADINFO *RecalcPtiFromListEntry; // rax
  tagQ *v21; // rcx
  const struct tagWND *v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  struct tagQMSG *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 NextQueueWindow; // rax
  char v37; // [rsp+70h] [rbp+8h] BYREF

  v3 = 1;
  v4 = a1 & 1;
  v5 = a1 & 2;
  v8 = *(_QWORD *)(gptiCurrent + 432LL);
  v9 = *(_QWORD *)(v8 + 112);
  if ( v9 )
    v10 = *(struct tagTHREADINFO **)(v9 + 16);
  else
    v10 = *(struct tagTHREADINFO **)(v8 + 96);
  ++gdwDeferWinEvent;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v37);
  if ( v4 )
    goto LABEL_53;
  if ( a2 && a3 )
  {
    PackAffectedThreadList(a2, a3);
    goto LABEL_7;
  }
  if ( !v5 && !a3 )
  {
LABEL_53:
    UnpackAffectedThreadList();
    if ( v4 )
    {
LABEL_43:
      v11 = 0LL;
      goto LABEL_11;
    }
  }
LABEL_7:
  zzzRecalcThreadAttachment();
  v11 = gpqForeground;
  if ( !gpqForeground )
    v11 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( tagQ::IsSingleThreadAttached((tagQ *)v11) )
    goto LABEL_43;
  ++*(_DWORD *)(v11 + 392);
LABEL_11:
  v12 = 0LL;
  if ( gpqForeground && (v13 = *(_QWORD *)(gpqForeground + 120LL)) != 0 )
  {
    v14 = *(const struct tagTHREADINFO **)(v13 + 16);
    v12 = *((_QWORD *)v14 + 82);
    if ( !v12 && !InAffectedThreadList(v14) )
      v12 = *(_QWORD *)(v30 + 432);
  }
  else
  {
    v3 = 0;
  }
  v15 = 0LL;
  if ( gpqForegroundPrev )
  {
    v16 = *(_QWORD *)(gpqForegroundPrev + 128LL);
    if ( v16 )
    {
      v17 = *(const struct tagTHREADINFO **)(v16 + 16);
      v15 = *((_QWORD *)v17 + 82);
      if ( !v15 && !InAffectedThreadList(v17) )
        v15 = *(_QWORD *)(v35 + 432);
    }
  }
  RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
  for ( i = RecalcHeadPtiListEntry->Flink; i != RecalcHeadPtiListEntry; i = i->Flink )
  {
    RecalcPtiFromListEntry = GetRecalcPtiFromListEntry(i);
    if ( RecalcPtiFromListEntry )
    {
      v21 = (tagQ *)*((_QWORD *)RecalcPtiFromListEntry + 82);
      if ( v21 == *((tagQ **)RecalcPtiFromListEntry + 54) )
      {
        tagTHREADINFO::AssignAttachQueue(RecalcPtiFromListEntry, 0LL);
      }
      else if ( v21 )
      {
        tagQ::zzzAttachToQueue(v21, RecalcPtiFromListEntry, (struct tagQ *)v11);
      }
    }
  }
  RecalculateQueueInfo();
  if ( v11 )
  {
    v24 = *(_DWORD *)(v11 + 392);
    if ( !v24 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v23);
      v24 = *(_DWORD *)(v11 + 392);
    }
    v25 = *(struct tagQMSG **)(v11 + 24);
    *(_DWORD *)(v11 + 392) = v24 - 1;
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_QWORD *)(v11 + 32) = 0LL;
    *(_DWORD *)(v11 + 40) = 0;
    RedistributeInput(v25, (struct tagQ *)v11, v10);
    if ( !tagQ::IsAnyThreadAttached((tagQ *)v11) )
    {
      v22 = 0LL;
LABEL_28:
      zzzDestroyQueue(v26, v22);
      goto LABEL_29;
    }
    v29 = *(_QWORD *)(v11 + 88);
    if ( v29 && v11 != *(_QWORD *)(v29 + 432) )
      zzzDestroyQueue(v26, v29);
    v22 = *(const struct tagWND **)(v11 + 96);
    if ( v22 && v11 != *((_QWORD *)v22 + 54) )
    {
      v26 = v11;
      goto LABEL_28;
    }
  }
LABEL_29:
  if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput )
  {
    SetNewForegroundQueue(v12, v22);
    gpqForegroundPrev = v15;
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 112LL) )
      zzzInputFocusReceivedWindowEvent(4u);
    UnpackAffectedThreadList();
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v37, v27, v28);
    zzzEndDeferWinEventNotify();
    if ( !gpqForeground && v3 )
    {
      NextQueueWindow = GetNextQueueWindow(
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL) + 112LL),
                          0LL,
                          0LL);
      if ( NextQueueWindow )
        PostEventMessageEx(
          *(struct tagTHREADINFO **)(NextQueueWindow + 16),
          *(struct tagQ **)(*(_QWORD *)(NextQueueWindow + 16) + 432LL),
          6u,
          0LL,
          0,
          0LL,
          *(_QWORD *)NextQueueWindow,
          0LL);
    }
    GenerateMouseMove(0LL);
  }
  else
  {
    UnpackAffectedThreadList();
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v37, v31, v32);
    zzzEndDeferWinEventNotify();
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v37, v33, v34);
  }
}
