/*
 * XREFs of RaidCompletionDpcRoutine @ 0x1C00390D0
 * Callers:
 *     <none>
 * Callees:
 *     RaidRestartIoQueue @ 0x1C0009220 (RaidRestartIoQueue.c)
 *     RaidAdapterFindUnit @ 0x1C000FFFC (RaidAdapterFindUnit.c)
 *     RaidResumeUnitQueue @ 0x1C0014698 (RaidResumeUnitQueue.c)
 *     RaidAdapterRestartQueues @ 0x1C001DEE0 (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C001E01C (RaidResumeAdapterQueue.c)
 *     McTemplateK0pzqqxxtt_EtwWriteTransfer @ 0x1C003204C (McTemplateK0pzqqxxtt_EtwWriteTransfer.c)
 *     StorPurgeEventQueue @ 0x1C003DB7C (StorPurgeEventQueue.c)
 */

void __fastcall RaidCompletionDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rdi
  int v5; // ebp
  unsigned int v6; // r12d
  LARGE_INTEGER v7; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v9; // rdx
  __int64 *i; // r15
  int v11; // ecx
  LARGE_INTEGER v12; // rax
  LARGE_INTEGER v13; // rcx
  unsigned __int64 v14; // r9
  __int64 v15; // r8
  unsigned __int64 v16; // rtt
  __int64 v17; // r8
  unsigned __int64 v18; // rtt
  __int64 Unit; // rax
  __int64 v20; // rbx
  __int64 v21; // [rsp+28h] [rbp-90h]
  __int64 v22; // [rsp+30h] [rbp-88h]
  __int64 v23; // [rsp+48h] [rbp-70h]
  __int64 v24; // [rsp+50h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v26; // [rsp+C8h] [rbp+10h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+D0h] [rbp+18h] BYREF
  PVOID v28; // [rsp+D8h] [rbp+20h]

  v28 = SystemArgument2;
  v4 = DeferredContext[8];
  HIBYTE(v26) = 0;
  v5 = (int)SystemArgument1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0;
  v7.QuadPart = 0LL;
  if ( StorEtwLoggingEnabled && (byte_1C00799E3 & 4) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v7 = PerformanceCounter;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 136), &LockHandle);
  for ( i = *(__int64 **)(v4 + 144); i != (__int64 *)(v4 + 144); i = (__int64 *)*i )
  {
    v11 = *((_DWORD *)i + 10);
    HIBYTE(v26) = HIBYTE(v11);
    if ( (BYTE2(v5) == 0xFF || BYTE2(v5) == (_BYTE)v11)
      && (BYTE1(v5) == 0xFF || BYTE1(v5) == BYTE1(v11))
      && ((_BYTE)v5 == 0xFF || (_BYTE)v5 == BYTE2(v11)) )
    {
      v6 = StorPurgeEventQueue(i[56], v9, v28);
    }
    if ( StorEtwLoggingEnabled && (byte_1C00799E3 & 4) != 0 && v6 >= 0x19 )
    {
      PerformanceFrequency.QuadPart = 1LL;
      if ( UseQPCTime )
        v12 = KeQueryPerformanceCounter(&PerformanceFrequency);
      else
        v12.QuadPart = KeQueryUnbiasedInterruptTime();
      if ( v12.QuadPart <= 0 || v12.QuadPart >= v7.QuadPart )
        v14 = v12.QuadPart - v7.QuadPart;
      else
        v14 = v12.QuadPart - v7.QuadPart - 1;
      if ( UseQPCTime )
      {
        v13 = PerformanceFrequency;
        v15 = 0LL;
        if ( PerformanceFrequency.QuadPart && v14 )
        {
          v16 = 1000 * (v14 % PerformanceFrequency.QuadPart);
          v17 = 10000 * (v16 / PerformanceFrequency.QuadPart + 1000 * (v14 / PerformanceFrequency.QuadPart));
          v18 = 10000 * (v16 % PerformanceFrequency.QuadPart);
          v9 = v18 % PerformanceFrequency.QuadPart;
          v15 = v18 / PerformanceFrequency.QuadPart + v17;
        }
      }
      else
      {
        v15 = v14;
      }
      if ( (byte_1C00799E3 & 4) != 0 )
      {
        LODWORD(v24) = 0;
        LODWORD(v23) = 0;
        LODWORD(v22) = v6;
        LODWORD(v21) = *(_DWORD *)(v4 + 56);
        McTemplateK0pzqqxxtt_EtwWriteTransfer(
          v13.QuadPart,
          v9,
          v15,
          RaidCompletionDpcRoutine,
          L"RaidCompletionDpcRoutine",
          v21,
          v22,
          v14,
          v15,
          v23,
          v24);
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( BYTE2(v5) == 0xFF || BYTE1(v5) == 0xFF || (_BYTE)v5 == 0xFF )
  {
    RaidResumeAdapterQueue(v4, 0LL);
    RaidAdapterRestartQueues(v4, 0);
  }
  else
  {
    LOBYTE(v26) = BYTE2(v5);
    BYTE1(v26) = BYTE1(v5);
    BYTE2(v26) = v5;
    Unit = RaidAdapterFindUnit(v4, v26);
    v20 = Unit;
    if ( Unit )
    {
      RaidResumeUnitQueue(Unit);
      RaidRestartIoQueue(v20, 0);
    }
  }
}
