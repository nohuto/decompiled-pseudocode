/*
 * XREFs of NtCancelWaitCompletionPacket @ 0x140349A30
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x14023E450 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250E80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseQueuedSpinLock @ 0x140260360 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260E60 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402B68C0 (ObfReferenceObjectWithTag.c)
 *     IopCancelWaitCompletionPacket @ 0x140349BFC (IopCancelWaitCompletionPacket.c)
 *     Feature_1940347194__private_IsEnabledDeviceUsage @ 0x14040FEC0 (Feature_1940347194__private_IsEnabledDeviceUsage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     ObReferenceObjectByHandle @ 0x1406E62C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtCancelWaitCompletionPacket(void *a1)
{
  NTSTATUS v1; // eax
  PVOID v2; // rbx
  unsigned int v3; // edi
  KIRQL v4; // al
  KSPIN_LOCK *v5; // r14
  KIRQL v6; // r15
  KIRQL v7; // si
  __int64 v8; // rdx
  __int64 v9; // rcx
  bool v10; // zf
  char v11; // al
  char v12; // al
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  PVOID Object; // [rsp+90h] [rbp+40h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Object = 0LL;
  v1 = ObReferenceObjectByHandle(
         a1,
         1u,
         IopWaitCompletionPacketObjectType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL);
  v2 = Object;
  v3 = v1;
  if ( v1 < 0 )
    goto LABEL_25;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 12);
  v5 = (KSPIN_LOCK *)*((_QWORD *)v2 + 11);
  v6 = v4;
  if ( v5 )
    ObfReferenceObjectWithTag(*((PVOID *)v2 + 11), 0x746C6644u);
  KeReleaseSpinLock((PKSPIN_LOCK)v2 + 12, v6);
  if ( !v5 )
  {
    v3 = -1073741536;
    goto LABEL_25;
  }
  KeAcquireInStackQueuedSpinLock(v5 + 8, &LockHandle);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2 + 12);
  v10 = (unsigned int)Feature_1940347194__private_IsEnabledDeviceUsage(v9, v8) == 0;
  v11 = *((_BYTE *)v2 + 104);
  v2 = Object;
  if ( v10 )
  {
    if ( !v11 )
      goto LABEL_8;
  }
  else
  {
    if ( !v11 )
    {
LABEL_8:
      v3 = -1073741536;
      goto LABEL_15;
    }
    if ( *((KSPIN_LOCK **)Object + 11) != v5 )
    {
      v3 = -1073700861;
      goto LABEL_15;
    }
  }
  if ( (unsigned __int8)IopCancelWaitCompletionPacket(Object) )
    goto LABEL_16;
  v12 = *((_BYTE *)v2 + 104);
  v2 = Object;
  if ( v12 )
    v3 = 259;
LABEL_15:
  KeReleaseSpinLock((PKSPIN_LOCK)v2 + 12, v7);
LABEL_16:
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v10 = (v17 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v17;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      v2 = Object;
    }
  }
  __writecr8(OldIrql);
  ObfDereferenceObjectWithTag(v5, 0x746C6644u);
LABEL_25:
  if ( v2 )
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  return v3;
}
