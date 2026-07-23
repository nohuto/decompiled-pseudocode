/*
 * XREFs of ExpShutdownWorkerFactory @ 0x14031DB98
 * Callers:
 *     NtShutdownWorkerFactory @ 0x140367D90 (NtShutdownWorkerFactory.c)
 *     ExpCloseWorkerFactory @ 0x140783F40 (ExpCloseWorkerFactory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x140304E44 (ExpLeaveWorkerFactoryAwayMode.c)
 *     IoSetIoCompletionEx3 @ 0x14031ACA0 (IoSetIoCompletionEx3.c)
 *     KeCancelTimer2 @ 0x14031E170 (KeCancelTimer2.c)
 *     KiDeregisterObjectWaitBlock @ 0x14033C6C0 (KiDeregisterObjectWaitBlock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpShutdownWorkerFactory(_QWORD *Object)
{
  KSPIN_LOCK *v2; // rcx
  PVOID *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax
  char v6; // di
  unsigned __int64 OldIrql; // rbp
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE v14; // [rsp+50h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)Object[2];
  memset(&v14, 0, sizeof(v14));
  KeAcquireInStackQueuedSpinLock(v2, &v14);
  v3 = (PVOID *)(Object + 9);
  v4 = 4LL;
  *((_DWORD *)Object + 102) = Object[51] & 0xFFFFFFF8 | 4;
  do
  {
    if ( *v3 )
    {
      ObfDereferenceObjectWithTag(*v3, 0x746C6644u);
      *v3 = 0LL;
    }
    ++v3;
    --v4;
  }
  while ( v4 );
  if ( (Object[51] & 0x200) != 0 )
    ExpLeaveWorkerFactoryAwayMode((char *)Object);
  if ( (_QWORD *)Object[74] == Object + 53 && (unsigned __int8)KiDeregisterObjectWaitBlock(Object + 53, Object + 70) )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  *(_BYTE *)(Object[2] + 33LL) = 1;
  v5 = Object[2];
  *((_DWORD *)Object + 95) = 0;
  *((_DWORD *)Object + 94) = 0;
  if ( !*(_DWORD *)(v5 + 28) || *(_BYTE *)(v5 + 32) )
  {
    v6 = 0;
  }
  else
  {
    *(_BYTE *)(v5 + 32) = 1;
    v6 = 1;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v14);
  OldIrql = v14.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v14.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (v14.OldIrql + 1));
      v13 = (v12 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  result = KeCancelTimer2(Object + 53, 0LL);
  if ( v6 )
    return IoSetIoCompletionEx3(
             *(_QWORD *)(Object[2] + 8LL),
             0LL,
             0LL,
             0LL,
             0LL,
             0,
             *(_QWORD *)(Object[2] + 16LL),
             0,
             0);
  return result;
}
