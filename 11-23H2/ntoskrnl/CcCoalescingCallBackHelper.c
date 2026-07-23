/*
 * XREFs of CcCoalescingCallBackHelper @ 0x140535A20
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcScheduleLazyWriteScan @ 0x140299C88 (CcScheduleLazyWriteScan.c)
 *     CcRescheduleLazyWriteScanOnVolume @ 0x140357808 (CcRescheduleLazyWriteScanOnVolume.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     CcRescheduleLazyWriteScan @ 0x140537878 (CcRescheduleLazyWriteScan.c)
 */

char __fastcall CcCoalescingCallBackHelper(__int64 a1, __int64 a2, int *a3)
{
  _BYTE *v3; // rsi
  int v5; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // r8
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r9
  int v21; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  v3 = (_BYTE *)(a2 + 1172);
  v5 = *a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !CcEnablePerVolumeLazyWriter )
    v3 = (_BYTE *)(a1 + 1292);
  v7 = v5 - 1;
  if ( !v7 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
    v15 = CcEnablePerVolumeLazyWriter == 0;
    *v3 = 1;
    if ( v15 )
      *(_BYTE *)(a1 + 1049) = 0;
    else
      *(_BYTE *)(a2 + 985) = 0;
    if ( *(_QWORD *)(a1 + 1056) >= 0x2000uLL )
    {
      LOBYTE(v17) = 1;
      CcScheduleLazyWriteScan((_BYTE *)a1, a2, v17, 0);
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( !(_DWORD)KiIrqlFlags )
      goto LABEL_30;
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) == 0 )
      goto LABEL_30;
    if ( CurrentIrql > 0xFu )
      goto LABEL_30;
    if ( LockHandle.OldIrql > 0xFu )
      goto LABEL_30;
    if ( CurrentIrql < 2u )
      goto LABEL_30;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    v21 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
    v15 = (v21 & SchedulerAssist[5]) == 0;
    SchedulerAssist[5] &= v21;
    if ( !v15 )
      goto LABEL_30;
    v16 = (__int64)CurrentPrcb;
    goto LABEL_29;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
    *v3 = 0;
    if ( CcEnablePerVolumeLazyWriter )
      CcRescheduleLazyWriteScanOnVolume(a2, 0LL);
    else
      CcRescheduleLazyWriteScan(a1);
    goto LABEL_7;
  }
  if ( v8 == 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
    LOBYTE(v9) = 1;
    CcScheduleLazyWriteScan((_BYTE *)a1, a2, v9, 0);
LABEL_7:
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( !(_DWORD)KiIrqlFlags )
      goto LABEL_30;
    v11 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) == 0 )
      goto LABEL_30;
    if ( v11 > 0xFu )
      goto LABEL_30;
    if ( LockHandle.OldIrql > 0xFu )
      goto LABEL_30;
    if ( v11 < 2u )
      goto LABEL_30;
    v12 = KeGetCurrentPrcb();
    v13 = v12->SchedulerAssist;
    v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
    v15 = (v14 & v13[5]) == 0;
    v13[5] &= v14;
    if ( !v15 )
      goto LABEL_30;
    v16 = (__int64)v12;
LABEL_29:
    KiRemoveSystemWorkPriorityKick(v16);
LABEL_30:
    __writecr8(OldIrql);
  }
  return 1;
}
