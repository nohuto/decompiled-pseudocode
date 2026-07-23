/*
 * XREFs of NtCancelWaitCompletionPacket @ 0x140349200
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     IopCancelWaitCompletionPacket @ 0x140349398 (IopCancelWaitCompletionPacket.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtCancelWaitCompletionPacket(HANDLE WaitCompletionPacketHandle, BOOLEAN RemoveSignaledPacket)
{
  int v2; // esi
  PVOID v3; // rbx
  KIRQL v4; // al
  KSPIN_LOCK *v5; // r15
  unsigned __int64 v6; // rdi
  _BYTE *v7; // rbx
  unsigned __int64 v8; // rdi
  _BYTE *v9; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r9
  int v20; // eax
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax
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
  if ( v2 < 0 )
    goto LABEL_10;
  v3 = Object;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 12);
  v5 = (KSPIN_LOCK *)*((_QWORD *)v3 + 11);
  v6 = v4;
  if ( v5 )
    ObfReferenceObjectWithTag(*((PVOID *)v3 + 11), 0x746C6644u);
  KxReleaseSpinLock((volatile signed __int64 *)v3 + 12);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v6 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v16 = (v15 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v6);
  if ( !v5 )
  {
    v2 = -1073741536;
    goto LABEL_10;
  }
  KeAcquireInStackQueuedSpinLock(v5 + 8, &LockHandle);
  v7 = Object;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 12);
  if ( !v7[104] )
  {
    v2 = -1073741536;
LABEL_15:
    KxReleaseSpinLock((volatile signed __int64 *)Object + 12);
    if ( (_DWORD)KiIrqlFlags )
    {
      v17 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v17 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = v18->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v16 = (v20 & v19[5]) == 0;
        v19[5] &= v20;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
    __writecr8(v8);
    goto LABEL_8;
  }
  v9 = Object;
  if ( !(unsigned __int8)IopCancelWaitCompletionPacket(Object) )
  {
    if ( v9[104] )
      v2 = 259;
    goto LABEL_15;
  }
LABEL_8:
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    v21 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v21 <= 0xFu && LockHandle.OldIrql <= 0xFu && v21 >= 2u )
    {
      v22 = KeGetCurrentPrcb();
      v23 = v22->SchedulerAssist;
      v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v16 = (v24 & v23[5]) == 0;
      v23[5] &= v24;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(v22);
    }
  }
  __writecr8(OldIrql);
  ObfDereferenceObjectWithTag(v5, 0x746C6644u);
LABEL_10:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return v2;
}
