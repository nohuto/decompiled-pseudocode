/*
 * XREFs of RaidCompletionDpcRoutine @ 0x1C003A6A0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0008004 (RaidAdapterFindUnit.c)
 *     RaidResumeUnitQueue @ 0x1C0012630 (RaidResumeUnitQueue.c)
 *     RaidResumeAdapterQueue @ 0x1C00190A0 (RaidResumeAdapterQueue.c)
 *     RaidAdapterRestartQueues @ 0x1C001921C (RaidAdapterRestartQueues.c)
 *     RaidRestartIoQueue @ 0x1C00194E0 (RaidRestartIoQueue.c)
 *     McTemplateK0pzqqxxtt_EtwWriteTransfer @ 0x1C0032690 (McTemplateK0pzqqxxtt_EtwWriteTransfer.c)
 *     StorPurgeEventQueue @ 0x1C003FE40 (StorPurgeEventQueue.c)
 */

void __fastcall RaidCompletionDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rdi
  int v5; // esi
  unsigned int v6; // r12d
  LARGE_INTEGER v7; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v9; // rdx
  __int64 *i; // r15
  int v11; // eax
  LARGE_INTEGER v12; // rax
  LARGE_INTEGER v13; // rcx
  LARGE_INTEGER v14; // r8
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r9
  __int64 Unit; // rax
  __int64 v18; // rbx
  __int64 v19; // [rsp+28h] [rbp-90h]
  __int64 v20; // [rsp+30h] [rbp-88h]
  __int64 v21; // [rsp+48h] [rbp-70h]
  __int64 v22; // [rsp+50h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v24; // [rsp+C8h] [rbp+10h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+D0h] [rbp+18h] BYREF
  PVOID v26; // [rsp+D8h] [rbp+20h]

  v26 = SystemArgument2;
  v4 = DeferredContext[8];
  HIBYTE(v24) = 0;
  v5 = (int)SystemArgument1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0;
  v7.QuadPart = 0LL;
  if ( StorEtwLoggingEnabled && (byte_1C0092A03 & 4) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v7 = PerformanceCounter;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 144), &LockHandle);
  for ( i = *(__int64 **)(v4 + 152); i != (__int64 *)(v4 + 152); i = (__int64 *)*i )
  {
    v11 = *((_DWORD *)i + 10);
    HIBYTE(v24) = HIBYTE(v11);
    if ( (BYTE2(v5) == 0xFF || BYTE2(v5) == (_BYTE)v11)
      && (BYTE1(v5) == 0xFF || BYTE1(v5) == BYTE1(v11))
      && ((_BYTE)v5 == 0xFF || (_BYTE)v5 == BYTE2(v11)) )
    {
      v6 = StorPurgeEventQueue(i[56], v9, v26);
    }
    if ( StorEtwLoggingEnabled && (byte_1C0092A03 & 4) != 0 && v6 >= 0x19 )
    {
      PerformanceFrequency.QuadPart = 1LL;
      if ( UseQPCTime )
        v12 = KeQueryPerformanceCounter(&PerformanceFrequency);
      else
        v12.QuadPart = KeQueryUnbiasedInterruptTime();
      if ( v12.QuadPart <= 0 || v12.QuadPart >= v7.QuadPart )
        v15 = v12.QuadPart - v7.QuadPart;
      else
        v15 = v12.QuadPart - v7.QuadPart - 1;
      if ( UseQPCTime )
      {
        v13 = PerformanceFrequency;
        v16 = 0LL;
        if ( PerformanceFrequency.QuadPart && v15 )
        {
          v14.QuadPart = 1000 * (v15 % PerformanceFrequency.QuadPart);
          v9 = 10000 * (v14.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart;
          v16 = 10000 * (v14.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
              + 10000
              * (1000 * (v15 / PerformanceFrequency.QuadPart)
               + v14.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart);
        }
      }
      else
      {
        v16 = v15;
      }
      if ( (byte_1C0092A03 & 4) != 0 )
      {
        LODWORD(v22) = 0;
        LODWORD(v21) = 0;
        LODWORD(v20) = v6;
        LODWORD(v19) = *(_DWORD *)(v4 + 56);
        McTemplateK0pzqqxxtt_EtwWriteTransfer(
          v13.QuadPart,
          v9,
          v14.QuadPart,
          RaidCompletionDpcRoutine,
          L"RaidCompletionDpcRoutine",
          v19,
          v20,
          v15,
          v16,
          v21,
          v22);
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( BYTE2(v5) == 0xFF || BYTE1(v5) == 0xFF || (_BYTE)v5 == 0xFF )
  {
    RaidResumeAdapterQueue(v4);
    RaidAdapterRestartQueues(v4, 0LL);
  }
  else
  {
    LOBYTE(v24) = BYTE2(v5);
    BYTE1(v24) = BYTE1(v5);
    BYTE2(v24) = v5;
    Unit = RaidAdapterFindUnit(v4, v24);
    v18 = Unit;
    if ( Unit )
    {
      RaidResumeUnitQueue(Unit);
      RaidRestartIoQueue(v18, 0);
    }
  }
}
