/*
 * XREFs of IopLoadDriverImage @ 0x14035B110
 * Callers:
 *     NtLoadDriver @ 0x1407CECE0 (NtLoadDriver.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     PsDetachSiloFromCurrentThread @ 0x14031CF20 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14031CF40 (PsAttachSiloToCurrentThread.c)
 *     Feature_Servicing_DriverEntryThreadAttachIssue__private_IsEnabledDeviceUsage @ 0x14040FF68 (Feature_Servicing_DriverEntryThreadAttachIssue__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     IopLoadUnloadDriver @ 0x1407CF120 (IopLoadUnloadDriver.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopLoadDriverImage(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v5; // rax
  int v6; // edx
  void *v7; // rcx
  unsigned __int64 v8; // rdx
  void *Pool2; // rdi
  struct _LIST_ENTRY *v10; // rbx
  void *Src[2]; // [rsp+38h] [rbp-70h] BYREF
  _BYTE WorkItem[80]; // [rsp+50h] [rbp-58h] BYREF

  *(_OWORD *)Src = 0LL;
  memset(WorkItem, 0, sizeof(WorkItem));
  if ( !a1 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
      return 3221225569LL;
    if ( PsIsCurrentThreadInServerSilo() )
      return 0LL;
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v5 = (__int64)a1;
    v6 = *(_DWORD *)v5;
    LODWORD(Src[0]) = v6;
    v7 = *(void **)(v5 + 8);
    Src[1] = v7;
    if ( !(_WORD)v6 )
      return 3221225485LL;
    if ( ((unsigned __int8)v7 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (unsigned __int64)v7 + (unsigned __int16)v6;
    if ( v8 > 0x7FFFFFFF0000LL || v8 < (unsigned __int64)v7 )
      MEMORY[0x7FFFFFFF0000] = 0;
    Pool2 = (void *)ExAllocatePool2(289LL, LOWORD(Src[0]), 844001097LL);
    memmove(Pool2, Src[1], LOWORD(Src[0]));
    Src[1] = Pool2;
  }
  else
  {
    *(_OWORD *)Src = *a1;
    Pool2 = 0LL;
  }
  WorkItem[34] = 6;
  *(_DWORD *)&WorkItem[36] = 0;
  *(_QWORD *)&WorkItem[48] = &WorkItem[40];
  *(_QWORD *)&WorkItem[40] = &WorkItem[40];
  *(_QWORD *)&WorkItem[56] = 0LL;
  *(_QWORD *)&WorkItem[64] = Src;
  if ( CurrentThread->ApcState.Process == PsInitialSystemProcess )
  {
    if ( (unsigned int)Feature_Servicing_DriverEntryThreadAttachIssue__private_IsEnabledDeviceUsage() )
    {
      v10 = PsAttachSiloToCurrentThread(0LL);
      IopLoadUnloadDriver(WorkItem);
      PsDetachSiloFromCurrentThread(v10);
    }
    else
    {
      IopLoadUnloadDriver(WorkItem);
    }
  }
  else
  {
    *(_QWORD *)&WorkItem[16] = IopLoadUnloadDriver;
    *(_QWORD *)&WorkItem[24] = WorkItem;
    *(_QWORD *)WorkItem = 0LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)WorkItem, DelayedWorkQueue);
    KeWaitForSingleObject(&WorkItem[32], UserRequest, 0, 0, 0LL);
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return *(unsigned int *)&WorkItem[72];
}
