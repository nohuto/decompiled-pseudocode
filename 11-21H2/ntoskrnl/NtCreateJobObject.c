/*
 * XREFs of NtCreateJobObject @ 0x140681CB0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     PoEnergyEstimationEnabled @ 0x1402F6160 (PoEnergyEstimationEnabled.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PspUnlockJobListExclusive @ 0x140681AD4 (PspUnlockJobListExclusive.c)
 *     ExUuidCreate @ 0x140681B30 (ExUuidCreate.c)
 *     PspIoRateEntryInitialize @ 0x140681FE4 (PspIoRateEntryInitialize.c)
 *     ObInsertObjectEx @ 0x140729C30 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14072B3B0 (ObCreateObjectEx.c)
 *     ExCreateHandleEx @ 0x1407A1CE8 (ExCreateHandleEx.c)
 *     EtwTraceJob @ 0x1409E21EC (EtwTraceJob.c)
 */

__int64 __fastcall NtCreateJobObject(__int64 *a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // r15
  char PreviousMode; // si
  __int64 v7; // rcx
  char v8; // r12
  int v9; // ecx
  int Object; // esi
  __int64 Handle; // rax
  __int64 v13; // [rsp+60h] [rbp-48h] BYREF
  LARGE_INTEGER Interval; // [rsp+68h] [rbp-40h] BYREF
  unsigned int v15; // [rsp+C8h] [rbp+20h]

  v13 = 0LL;
  v15 = 0;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  *a1 = 0LL;
  v8 = PoEnergyEstimationEnabled();
  LOBYTE(v9) = PreviousMode;
  Object = ObCreateObjectEx(v9, (_DWORD)PsJobType, a3, PreviousMode);
  if ( Object >= 0 )
  {
    memset(0LL, 0, v8 != 0 ? 2224 : 1792);
    MEMORY[0x4F8] = 0LL;
    MEMORY[0x30] = 40LL;
    MEMORY[0x28] = 40LL;
    MEMORY[0x4E8] = 1248LL;
    MEMORY[0x4E0] = 1248LL;
    MEMORY[0x4D8] = 1232LL;
    MEMORY[0x4D0] = 1232LL;
    MEMORY[0x508] = 1280LL;
    MEMORY[0x500] = 1280LL;
    KeInitializeEvent(0LL, NotificationEvent, 0);
    MEMORY[0x4C8] = 0LL;
    MEMORY[0x108] = 2097153LL;
    memset((void *)0x110, 0, 0x100uLL);
    MEMORY[0x2C8] = 2097153LL;
    memset((void *)0x2D0, 0, 0x100uLL);
    MEMORY[0x5C8] = 1472LL;
    MEMORY[0x5C0] = 1472LL;
    MEMORY[0x5D0] = 0LL;
    if ( v8 )
      MEMORY[0x5F0] = 1792LL;
    MEMORY[0x240] = -1;
    MEMORY[0x42C] = 16382;
    MEMORY[0x6B0] = 1LL;
    MEMORY[0x414] = 10;
    MEMORY[0x244] = 5;
    ExInitializeResourceLite((PERESOURCE)0x38);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobListLock, 0LL);
    if ( *(__int64 **)qword_140D3B2F8 != &PspJobList )
      __fastfail(3u);
    MEMORY[0x18] = &PspJobList;
    MEMORY[0x20] = qword_140D3B2F8;
    *(_QWORD *)qword_140D3B2F8 = 24LL;
    qword_140D3B2F8 = 24LL;
    PspUnlockJobListExclusive((__int64)CurrentThread);
    MEMORY[0x5E8] |= 0x200000u;
    v15 = MEMORY[0x5E8];
    while ( 1 )
    {
      Object = ExUuidCreate((UUID *)0x598);
      if ( Object != -1073741267 )
        break;
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( Object == 1073872982 )
      Object = 0;
    if ( Object >= 0 )
    {
      Handle = ExCreateHandleEx(PspUniqueJobIdTable, 0, 0, 0, 0LL);
      if ( Handle )
        MEMORY[0x594] = Handle;
      else
        Object = -1073741670;
    }
    PspIoRateEntryInitialize(1592LL);
    MEMORY[0x678] = 0LL;
    MEMORY[0x680] = 0LL;
    MEMORY[0x6A8] = 0LL;
    if ( Object < 0 || (ObfReferenceObject(0LL), Object = ObInsertObjectEx(0LL, 0LL, 0, 0LL, (__int64)&v13), Object < 0) )
      ObfDereferenceObject(0LL);
    else
      *a1 = v13;
  }
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJob(0LL, v15, (unsigned int)Object, 1824LL);
  return (unsigned int)Object;
}
