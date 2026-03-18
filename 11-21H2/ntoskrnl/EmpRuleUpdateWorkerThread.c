/*
 * XREFs of EmpRuleUpdateWorkerThread @ 0x1403D49C0
 * Callers:
 *     <none>
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     EmpUpdateRuleState @ 0x1402DCC34 (EmpUpdateRuleState.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 EmpRuleUpdateWorkerThread()
{
  __int64 *v0; // r14
  unsigned int i; // r15d
  int v2; // r8d
  char v3; // al
  struct _KTHREAD *v4; // rsi
  unsigned int v5; // ecx
  __int64 v6; // rdi
  unsigned int v7; // edx
  int v8; // r8d
  char v9; // al
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int SessionId; // ecx
  unsigned int v12; // edx
  __int64 p_Process; // rdi
  char v14; // bp
  struct _KTHREAD *v15; // rsi
  unsigned int v16; // ecx
  __int64 v17; // rdi
  int v18; // r8d
  __int64 result; // rax

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpEvaluationQueueLock, 0LL);
  v0 = (__int64 *)EmpRuleUpdateQueue;
  for ( i = -1; EmpRuleUpdateQueue; v0 = (__int64 *)EmpRuleUpdateQueue )
  {
    EmpRuleUpdateQueue = *v0;
    v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpEvaluationQueueLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
      ExfTryToWakePushLock(&EmpEvaluationQueueLock);
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned __int64)&EmpEvaluationQueueLock - qword_140C50630 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    _disable();
    v12 = 0;
    p_Process = (__int64)&CurrentThread[1].Process;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&EmpEvaluationQueueLock & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(p_Process + 18)
         || (*(_DWORD *)p_Process & 1) != 0
         || *(_DWORD *)(p_Process + 8) != SessionId )
    {
      ++v12;
      p_Process += 96LL;
      if ( v12 >= 6 )
        goto LABEL_31;
    }
    *(_BYTE *)(p_Process + 18) = 0;
    if ( p_Process )
    {
      if ( *(__int64 *)p_Process < 0 )
      {
        *(_BYTE *)p_Process |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(p_Process);
        _disable();
      }
      v2 = *(_DWORD *)(p_Process + 88);
      *(_DWORD *)(p_Process + 88) = 0;
      *(_BYTE *)(p_Process + 17) = 0;
      *(_QWORD *)p_Process = 0LL;
      CurrentThread->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
      _enable();
      if ( v2 )
        KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, (__int64)&EmpEvaluationQueueLock, v2);
      goto LABEL_12;
    }
LABEL_31:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&EmpEvaluationQueueLock, SessionId, 0LL);
    _enable();
LABEL_12:
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
    EmpUpdateRuleState(*(v0 - 1), v0[1]);
    v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
      ExfTryToWakePushLock(&EmpDatabaseLock);
    v4 = KeGetCurrentThread();
    if ( (unsigned __int64)&EmpDatabaseLock - qword_140C50630 < 0x8000000000LL )
      v5 = MmGetSessionIdEx((__int64)v4->ApcState.Process);
    else
      v5 = -1;
    _disable();
    v6 = (__int64)&v4[1].Process;
    v7 = 0;
    while ( (*(_QWORD *)v6 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&EmpDatabaseLock & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v6 + 18)
         || (*(_DWORD *)v6 & 1) != 0
         || *(_DWORD *)(v6 + 8) != v5 )
    {
      ++v7;
      v6 += 96LL;
      if ( v7 >= 6 )
        goto LABEL_34;
    }
    *(_BYTE *)(v6 + 18) = 0;
    if ( v6 )
    {
      if ( *(__int64 *)v6 < 0 )
      {
        *(_BYTE *)v6 |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(v6);
        _disable();
      }
      v8 = *(_DWORD *)(v6 + 88);
      *(_DWORD *)(v6 + 88) = 0;
      *(_BYTE *)(v6 + 17) = 0;
      *(_QWORD *)v6 = 0LL;
      v4->AbEntrySummary |= 1 << *(_BYTE *)(v6 + 16);
      _enable();
      if ( v8 )
        KiAbThreadRemoveBoostsSlow((ULONG_PTR)v4, (__int64)&EmpDatabaseLock, v8);
      goto LABEL_25;
    }
LABEL_34:
    if ( (*((_DWORD *)&v4->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v4, (ULONG_PTR)&EmpDatabaseLock, v5, 0LL);
    _enable();
LABEL_25:
    ExFreePoolWithTag(v0 - 1, 0x75714D45u);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpEvaluationQueueLock, 0LL);
  }
  v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpEvaluationQueueLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
    ExfTryToWakePushLock(&EmpEvaluationQueueLock);
  v15 = KeGetCurrentThread();
  if ( (unsigned __int64)&EmpEvaluationQueueLock - qword_140C50630 < 0x8000000000LL )
    i = MmGetSessionIdEx((__int64)v15->ApcState.Process);
  _disable();
  v16 = 0;
  v17 = (__int64)&v15[1].Process;
  while ( (*(_QWORD *)v17 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&EmpEvaluationQueueLock & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v17 + 18)
       || (*(_DWORD *)v17 & 1) != 0
       || *(_DWORD *)(v17 + 8) != i )
  {
    ++v16;
    v17 += 96LL;
    if ( v16 >= 6 )
      goto LABEL_53;
  }
  *(_BYTE *)(v17 + 18) = 0;
  if ( v17 )
  {
    if ( *(__int64 *)v17 < 0 )
    {
      *(_BYTE *)v17 |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(v17);
      _disable();
    }
    v18 = *(_DWORD *)(v17 + 88);
    *(_DWORD *)(v17 + 88) = 0;
    *(_BYTE *)(v17 + 17) = 0;
    *(_QWORD *)v17 = 0LL;
    result = *(unsigned __int8 *)(v17 + 16);
    v15->AbEntrySummary |= 1 << result;
    _enable();
    if ( v18 )
      result = KiAbThreadRemoveBoostsSlow((ULONG_PTR)v15, (__int64)&EmpEvaluationQueueLock, v18);
    goto LABEL_51;
  }
LABEL_53:
  result = *((unsigned int *)&v15->MiscFlags + 1);
  if ( (result & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v15, (ULONG_PTR)&EmpEvaluationQueueLock, i, 0LL);
  _enable();
LABEL_51:
  _InterlockedExchange(&EmpWorkerBusy, 0);
  return result;
}
