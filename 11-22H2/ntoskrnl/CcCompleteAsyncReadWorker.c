/*
 * XREFs of CcCompleteAsyncReadWorker @ 0x140352FA0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 *     CcFindNextWorkQueueEntry @ 0x1402996CC (CcFindNextWorkQueueEntry.c)
 *     CcFreeWorkQueueEntry @ 0x14029C270 (CcFreeWorkQueueEntry.c)
 *     CcDereferencePartition @ 0x14029C310 (CcDereferencePartition.c)
 *     CcCompleteAsyncRead @ 0x1402C1400 (CcCompleteAsyncRead.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall CcCompleteAsyncReadWorker(__int64 a1)
{
  char v1; // r12
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // r15
  __int64 v6; // rcx
  __int64 *v7; // rsi
  __int64 v8; // r14
  __int64 v9; // r13
  _SLIST_ENTRY *NextWorkQueueEntry; // rbx
  __int64 v11; // rcx
  _QWORD *v12; // r8

  v1 = 0;
  if ( *(_DWORD *)(a1 + 32) == 4 )
  {
    v3 = *(_QWORD *)(a1 + 64);
    v4 = *(_QWORD *)(a1 + 56);
    v5 = *(_QWORD *)(a1 + 72);
    v6 = *(unsigned int *)(a1 + 36);
    v7 = (__int64 *)(v3 + 1160);
    if ( !CcEnablePerVolumeLazyWriter )
      v7 = (__int64 *)(v4 + 1224);
    v8 = v6;
    v9 = 16 * v6;
    NextWorkQueueEntry = *(_SLIST_ENTRY **)(a1 + 48);
    do
    {
      CcCompleteAsyncRead((__int64)NextWorkQueueEntry);
      CcFreeWorkQueueEntry(NextWorkQueueEntry);
      NextWorkQueueEntry = 0LL;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v7, 0LL);
      v12 = (_QWORD *)(v9 + *(_QWORD *)(v5 + 264));
      if ( (_QWORD *)*v12 == v12 )
      {
        v1 = 1;
        --*(_DWORD *)(*(_QWORD *)(v5 + 248) + 4 * v8);
      }
      else
      {
        NextWorkQueueEntry = (_SLIST_ENTRY *)CcFindNextWorkQueueEntry(v11, v5, v12);
      }
      ExReleasePushLockEx(v7, 0LL);
    }
    while ( !v1 );
    CcDereferencePartition(v4);
    if ( v3 )
    {
      if ( _InterlockedDecrement64((volatile signed __int64 *)(v3 + 8)) <= -1 )
        __fastfail(0xEu);
    }
    ExFreePoolWithTag((PVOID)a1, 0x71576343u);
  }
}
