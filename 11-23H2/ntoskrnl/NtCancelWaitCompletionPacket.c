/*
 * XREFs of NtCancelWaitCompletionPacket @ 0x140349980
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x14023E520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     IopCancelWaitCompletionPacket @ 0x140349B40 (IopCancelWaitCompletionPacket.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtCancelWaitCompletionPacket(HANDLE WaitCompletionPacketHandle, BOOLEAN RemoveSignaledPacket)
{
  NTSTATUS v2; // eax
  PVOID v3; // rbx
  NTSTATUS v4; // edi
  KIRQL v5; // al
  KSPIN_LOCK *v6; // rsi
  KIRQL v7; // r15
  KIRQL v8; // r14
  char v9; // al
  char v10; // al
  unsigned __int64 OldIrql; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  PVOID Object; // [rsp+90h] [rbp+40h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Object = 0LL;
  v2 = ObReferenceObjectByHandle(
         WaitCompletionPacketHandle,
         1u,
         IopWaitCompletionPacketObjectType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL);
  v3 = Object;
  v4 = v2;
  if ( v2 < 0 )
    goto LABEL_23;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 12);
  v6 = (KSPIN_LOCK *)*((_QWORD *)v3 + 11);
  v7 = v5;
  if ( v6 )
    ObfReferenceObjectWithTag(*((PVOID *)v3 + 11), 0x746C6644u);
  KeReleaseSpinLock((PKSPIN_LOCK)v3 + 12, v7);
  if ( !v6 )
  {
    v4 = -1073741536;
    goto LABEL_23;
  }
  KeAcquireInStackQueuedSpinLock(v6 + 8, &LockHandle);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v3 + 12);
  v9 = *((_BYTE *)v3 + 104);
  v3 = Object;
  if ( v9 )
  {
    if ( *((KSPIN_LOCK **)Object + 11) == v6 )
    {
      if ( (unsigned __int8)IopCancelWaitCompletionPacket(Object) )
        goto LABEL_14;
      v10 = *((_BYTE *)v3 + 104);
      v3 = Object;
      if ( v10 )
        v4 = 259;
    }
    else
    {
      v4 = -1073700861;
    }
  }
  else
  {
    v4 = -1073741536;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v3 + 12, v8);
LABEL_14:
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && LockHandle.OldIrql <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v16 = (v15 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      v3 = Object;
    }
  }
  __writecr8(OldIrql);
  ObfDereferenceObjectWithTag(v6, 0x746C6644u);
LABEL_23:
  if ( v3 )
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  return v4;
}
