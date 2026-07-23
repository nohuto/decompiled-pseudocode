/*
 * XREFs of CcPostWorkQueueAsyncRead @ 0x1402C0E94
 * Callers:
 *     CcAsyncCopyRead @ 0x1402C1300 (CcAsyncCopyRead.c)
 *     CcAsyncReadWorker @ 0x1403BECE0 (CcAsyncReadWorker.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     CcFreeWorkQueueEntry @ 0x14029C620 (CcFreeWorkQueueEntry.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x1402AD4E0 (ExpAllocatePoolWithTagFromNode.c)
 *     ExQueueWorkItemToPartition @ 0x1402B982C (ExQueueWorkItemToPartition.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x1402C1118 (CcShouldSpinAsyncReadWorkerThread.c)
 *     CcCompleteAsyncRead @ 0x1402C16C0 (CcCompleteAsyncRead.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140395734 (CcPerfLogWorkItemEnqueue.c)
 */

__int64 __fastcall CcPostWorkQueueAsyncRead(PSLIST_ENTRY ListEntry, __int64 a2)
{
  _SLIST_ENTRY *Next; // r13
  __int64 v5; // r15
  __int64 Next_high; // r12
  __int64 *v7; // rbp
  __int64 v8; // rdi
  char v9; // r14
  _QWORD *v10; // rax
  __int64 result; // rax
  _QWORD *v12; // r10
  __int64 v13; // r14
  _QWORD *v14; // rcx
  __int64 v15; // r15
  _QWORD *v16; // r12
  __int64 PoolWithTagFromNode; // rax
  __int64 v18; // r14
  __int64 v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // [rsp+30h] [rbp-48h]
  char v22; // [rsp+80h] [rbp+8h]
  int v23; // [rsp+90h] [rbp+18h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+20h] BYREF

  Next = ListEntry[9].Next;
  BugCheckParameter2 = 0LL;
  v5 = *((_QWORD *)&ListEntry[8].Next + 1);
  Next_high = HIDWORD(ListEntry[7].Next);
  v7 = (__int64 *)(&Next[72].Next + 1);
  v8 = *((_QWORD *)&ListEntry[9].Next + 1);
  v22 = 0;
  v21 = v5;
  v23 = HIDWORD(ListEntry[7].Next);
  if ( !CcEnablePerVolumeLazyWriter )
    v7 = (__int64 *)(v5 + 1224);
  if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
    CcPerfLogWorkItemEnqueue(a2, ListEntry, 0LL, 0LL);
  if ( LODWORD(ListEntry[8].Next) != 5 )
  {
    v13 = 16 * Next_high;
    v14 = (_QWORD *)(16 * Next_high + *(_QWORD *)(v8 + 264));
    v15 = 4 * Next_high;
    v16 = (_QWORD *)(v8 + 248);
    if ( (_QWORD *)*v14 != v14 || *(_DWORD *)(v15 + *v16) >= (unsigned int)CcMaxNumberCompleteAsyncReadExWorkItems )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v7, 0LL);
      v19 = v13 + *(_QWORD *)(v8 + 264);
      if ( *(_QWORD *)v19 != v19 || *(_DWORD *)(v15 + *v16) >= (unsigned int)CcMaxNumberCompleteAsyncReadExWorkItems )
      {
        v20 = *(_QWORD **)(v19 + 8);
        if ( *v20 != v19 )
LABEL_32:
          __fastfail(3u);
        ListEntry->Next = (_SLIST_ENTRY *)v19;
        *((_QWORD *)&ListEntry->Next + 1) = v20;
        *v20 = ListEntry;
        *(_QWORD *)(v19 + 8) = ListEntry;
        v22 = 1;
      }
      result = ExReleasePushLockEx(v7, 0LL);
      if ( v22 )
        return result;
    }
    PoolWithTagFromNode = ExpAllocatePoolWithTagFromNode(
                            NonPagedPoolNx,
                            0x50uLL,
                            1901552451LL,
                            *(_DWORD *)(v8 + 24) | 0x80000000,
                            0);
    v18 = PoolWithTagFromNode;
    if ( !PoolWithTagFromNode )
    {
      **((_DWORD **)&ListEntry[4].Next + 1) = -1073741670;
      CcCompleteAsyncRead(ListEntry);
      return CcFreeWorkQueueEntry(ListEntry);
    }
    *(_DWORD *)(PoolWithTagFromNode + 32) = 4;
    *(_QWORD *)(PoolWithTagFromNode + 56) = v21;
    *(_DWORD *)(PoolWithTagFromNode + 36) = v23;
    *(_QWORD *)(PoolWithTagFromNode + 64) = Next;
    *(_QWORD *)(PoolWithTagFromNode + 72) = v8;
    *(_QWORD *)(PoolWithTagFromNode + 48) = ListEntry;
    *(_QWORD *)PoolWithTagFromNode = 0LL;
    *(_QWORD *)(PoolWithTagFromNode + 16) = CcCompleteAsyncReadWorker;
    *(_QWORD *)(PoolWithTagFromNode + 24) = PoolWithTagFromNode;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v7, 0LL);
    *(_DWORD *)(v18 + 40) = *(_DWORD *)(v15 + *v16);
    ++*(_DWORD *)(*v16 + v15);
    v5 = v21;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v21 + 1296)) <= 1 )
      __fastfail(0xEu);
    if ( Next && _InterlockedIncrement64((volatile signed __int64 *)&Next->Next + 1) <= 1 )
      __fastfail(0xEu);
    ExReleasePushLockEx(v7, 0LL);
    *(_QWORD *)v18 = 0LL;
    result = ExQueueWorkItemToPartition((_QWORD *)v18, 46, *(_DWORD *)(v8 + 24), *(_QWORD *)(v21 + 8));
    v12 = (_QWORD *)BugCheckParameter2;
LABEL_11:
    if ( v12 )
    {
      *v12 = 0LL;
      return ExQueueWorkItemToPartition(v12, 0, *(_DWORD *)(v8 + 24), *(_QWORD *)(v5 + 8));
    }
    return result;
  }
  v9 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v7, 0LL);
  v10 = *(_QWORD **)(a2 + 8);
  if ( *v10 != a2 )
    goto LABEL_32;
  *((_QWORD *)&ListEntry->Next + 1) = v10;
  ListEntry->Next = (_SLIST_ENTRY *)a2;
  *v10 = ListEntry;
  *(_QWORD *)(a2 + 8) = ListEntry;
  if ( *(_QWORD *)(*(_QWORD *)(v8 + 264) + 16 * Next_high) == *(_QWORD *)(v8 + 264) + 16 * Next_high
    || *(_DWORD *)(*(_QWORD *)(v8 + 240) + 4 * Next_high) <= 1u )
  {
    KeSetEvent((PRKEVENT)(*(_QWORD *)(v8 + 272) + 24 * Next_high), 0, 0);
  }
  else
  {
    v9 = 1;
  }
  result = ExReleasePushLockEx(v7, 0LL);
  if ( !v9 )
  {
    result = CcShouldSpinAsyncReadWorkerThread(v5, v8, &BugCheckParameter2, (unsigned int)Next_high);
    v12 = (_QWORD *)BugCheckParameter2;
    if ( (_BYTE)result )
    {
      if ( !BugCheckParameter2 )
        return result;
      result = *(_QWORD *)(v8 + 280);
      *(_DWORD *)(result + 4 * (101 * Next_high + *(unsigned int *)(BugCheckParameter2 + 40))) = 0;
    }
    goto LABEL_11;
  }
  return result;
}
