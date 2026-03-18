/*
 * XREFs of CcPostWorkQueueAsyncRead @ 0x1402F5AEC
 * Callers:
 *     CcAsyncCopyRead @ 0x1402F5790 (CcAsyncCopyRead.c)
 *     CcAsyncReadWorker @ 0x1403C4AE0 (CcAsyncReadWorker.c)
 * Callees:
 *     CcFreeWorkQueueEntry @ 0x1402766A0 (CcFreeWorkQueueEntry.c)
 *     CcCompleteAsyncRead @ 0x14028F324 (CcCompleteAsyncRead.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExQueueWorkItemToPartition @ 0x1402EF060 (ExQueueWorkItemToPartition.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x1402F5D4C (CcShouldSpinAsyncReadWorkerThread.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x140349710 (ExpAllocatePoolWithTagFromNode.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403AE50C (CcPerfLogWorkItemEnqueue.c)
 */

int __fastcall CcPostWorkQueueAsyncRead(PSLIST_ENTRY ListEntry, __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // rdi
  _SLIST_ENTRY *Next; // r13
  __int64 Next_high; // r12
  char v8; // r14
  _QWORD *v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // r10
  __int64 v12; // r14
  __int64 v13; // r15
  ULONG_PTR v14; // r12
  __int64 v15; // r9
  __int64 PoolWithTagFromNode; // rax
  ULONG_PTR v17; // r14
  __int64 v18; // rdx
  _QWORD *v19; // rax
  char v21; // [rsp+70h] [rbp+8h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp+20h] BYREF

  BugCheckParameter2 = 0LL;
  v4 = *((_QWORD *)&ListEntry[8].Next + 1);
  v5 = *((_QWORD *)&ListEntry[9].Next + 1);
  Next = ListEntry[9].Next;
  Next_high = HIDWORD(ListEntry[7].Next);
  v21 = 0;
  if ( (xmmword_140D06910 & 0x20000) != 0 )
    CcPerfLogWorkItemEnqueue(a2, ListEntry, 0LL, 0LL);
  if ( LOBYTE(ListEntry[8].Next) != 5 )
  {
    v12 = 16 * Next_high;
    v13 = Next_high;
    if ( *(_QWORD *)(16 * Next_high + *(_QWORD *)(v5 + 264)) == 16 * Next_high + *(_QWORD *)(v5 + 264)
      && *(_DWORD *)(*(_QWORD *)(v5 + 248) + 4 * Next_high) < (unsigned int)CcMaxNumberCompleteAsyncReadExWorkItems )
    {
      v14 = v4 + 1160;
    }
    else
    {
      v14 = v4 + 1160;
      ExAcquirePushLockExclusiveEx(v4 + 1160, 0LL);
      v18 = v12 + *(_QWORD *)(v5 + 264);
      if ( *(_QWORD *)v18 != v18
        || *(_DWORD *)(*(_QWORD *)(v5 + 248) + 4 * v13) >= (unsigned int)CcMaxNumberCompleteAsyncReadExWorkItems )
      {
        v19 = *(_QWORD **)(v18 + 8);
        if ( *v19 != v18 )
LABEL_29:
          __fastfail(3u);
        ListEntry->Next = (_SLIST_ENTRY *)v18;
        *((_QWORD *)&ListEntry->Next + 1) = v19;
        *v19 = ListEntry;
        *(_QWORD *)(v18 + 8) = ListEntry;
        v21 = 1;
      }
      LODWORD(v10) = ExReleasePushLockEx(v4 + 1160, 0LL);
      if ( v21 )
        return v10;
    }
    v15 = *(unsigned int *)(v5 + 24);
    LODWORD(v15) = v15 | 0x80000000;
    PoolWithTagFromNode = ExpAllocatePoolWithTagFromNode(512LL, 80LL, 1901552451LL, v15, 0);
    v17 = PoolWithTagFromNode;
    if ( !PoolWithTagFromNode )
    {
      **((_DWORD **)&ListEntry[4].Next + 1) = -1073741670;
      CcCompleteAsyncRead((__int64)ListEntry);
      LODWORD(v10) = CcFreeWorkQueueEntry(ListEntry);
      return v10;
    }
    *(_DWORD *)(PoolWithTagFromNode + 32) = 4;
    *(_QWORD *)(PoolWithTagFromNode + 56) = v4;
    *(_QWORD *)(PoolWithTagFromNode + 64) = Next;
    *(_QWORD *)(PoolWithTagFromNode + 72) = v5;
    *(_QWORD *)(PoolWithTagFromNode + 48) = ListEntry;
    *(_DWORD *)(PoolWithTagFromNode + 36) = v13;
    *(_QWORD *)PoolWithTagFromNode = 0LL;
    *(_QWORD *)(PoolWithTagFromNode + 16) = CcCompleteAsyncReadWorker;
    *(_QWORD *)(PoolWithTagFromNode + 24) = PoolWithTagFromNode;
    ExAcquirePushLockExclusiveEx(v14, 0LL);
    *(_DWORD *)(v17 + 40) = (*(_DWORD *)(*(_QWORD *)(v5 + 248) + 4 * v13))++;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 1232)) <= 1 )
      __fastfail(0xEu);
    if ( Next && _InterlockedIncrement64((volatile signed __int64 *)&Next->Next + 1) <= 1 )
      __fastfail(0xEu);
    ExReleasePushLockEx(v14, 0LL);
    *(_QWORD *)v17 = 0LL;
    LODWORD(v10) = ExQueueWorkItemToPartition(v17, 46, *(_DWORD *)(v5 + 24), *(_QWORD *)(v4 + 8));
    v11 = (_QWORD *)BugCheckParameter2;
    goto LABEL_9;
  }
  v8 = 0;
  ExAcquirePushLockExclusiveEx(v4 + 1160, 0LL);
  v9 = *(_QWORD **)(a2 + 8);
  if ( *v9 != a2 )
    goto LABEL_29;
  *((_QWORD *)&ListEntry->Next + 1) = v9;
  ListEntry->Next = (_SLIST_ENTRY *)a2;
  *v9 = ListEntry;
  *(_QWORD *)(a2 + 8) = ListEntry;
  if ( *(_QWORD *)(*(_QWORD *)(v5 + 264) + 16 * Next_high) == *(_QWORD *)(v5 + 264) + 16 * Next_high
    || *(_DWORD *)(*(_QWORD *)(v5 + 240) + 4 * Next_high) <= 1u )
  {
    KeSetEvent((PRKEVENT)(*(_QWORD *)(v5 + 272) + 24 * Next_high), 0, 0);
  }
  else
  {
    v8 = 1;
  }
  LODWORD(v10) = ExReleasePushLockEx(v4 + 1160, 0LL);
  if ( !v8 )
  {
    LODWORD(v10) = CcShouldSpinAsyncReadWorkerThread(v4, v5, &BugCheckParameter2, (unsigned int)Next_high);
    v11 = (_QWORD *)BugCheckParameter2;
    if ( (_BYTE)v10 )
    {
      if ( !BugCheckParameter2 )
        return v10;
      v10 = *(_QWORD *)(v5 + 280);
      *(_DWORD *)(v10 + 4 * (101 * Next_high + *(unsigned int *)(BugCheckParameter2 + 40))) = 0;
    }
LABEL_9:
    if ( v11 )
    {
      *v11 = 0LL;
      LODWORD(v10) = ExQueueWorkItemToPartition((ULONG_PTR)v11, 0, *(_DWORD *)(v5 + 24), *(_QWORD *)(v4 + 8));
    }
  }
  return v10;
}
