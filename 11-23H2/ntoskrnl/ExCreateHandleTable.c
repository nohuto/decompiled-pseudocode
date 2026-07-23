/*
 * XREFs of ExCreateHandleTable @ 0x1407B07B8
 * Callers:
 *     ObInitProcess @ 0x1406B365C (ObInitProcess.c)
 *     RtlpInitializeHandleTableForAtomTable @ 0x1407B022C (RtlpInitializeHandleTableForAtomTable.c)
 *     ExDupHandleTable @ 0x1407B02CC (ExDupHandleTable.c)
 *     AlpcpInitSystem @ 0x14085A588 (AlpcpInitSystem.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x14097902C (AlpcpAllocateMessageFromExtendedTables.c)
 *     PspInitPhase0 @ 0x140B4A894 (PspInitPhase0.c)
 *     ObInitSystem @ 0x140B4B2F8 (ObInitSystem.c)
 *     PspInitializeJobStructures @ 0x140B72E7C (PspInitializeJobStructures.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExpAllocateHandleTable @ 0x1407B088C (ExpAllocateHandleTable.c)
 */

__int64 __fastcall ExCreateHandleTable(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v3; // esi
  __int64 result; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  char v8; // si

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  LOBYTE(a2) = 1;
  result = ExpAllocateHandleTable(a1, a2);
  v5 = result;
  if ( result )
  {
    v6 = (_QWORD *)(result + 24);
    if ( v3 )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&HandleTableListLock, 0LL);
      v7 = (_QWORD *)qword_140D54E98;
      if ( *(__int64 **)qword_140D54E98 != &HandleTableListHead )
        __fastfail(3u);
      *v6 = &HandleTableListHead;
      v6[1] = v7;
      *v7 = v6;
      qword_140D54E98 = (__int64)v6;
      v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&HandleTableListLock);
      KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      return v5;
    }
    else
    {
      *(_QWORD *)(result + 32) = result + 24;
      *v6 = v6;
    }
  }
  return result;
}
