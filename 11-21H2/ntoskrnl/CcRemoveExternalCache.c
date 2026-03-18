/*
 * XREFs of CcRemoveExternalCache @ 0x140539BC4
 * Callers:
 *     CcUnregisterExternalCache @ 0x140539D20 (CcUnregisterExternalCache.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     CcDereferencePartition @ 0x140276728 (CcDereferencePartition.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcRemoveExternalCache(_QWORD *a1)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // r9
  _QWORD *v4; // r8
  int v5; // ecx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v11; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&CcExternalCacheListLock);
  v3 = a1[4];
  v4 = (_QWORD *)a1[5];
  if ( *(_QWORD **)(v3 + 8) != a1 + 4 || (_QWORD *)*v4 != a1 + 4 )
    __fastfail(3u);
  v5 = CcNumberOfExternalCaches;
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  if ( !v5 )
    KeBugCheckEx(0x34u, 0x171AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcNumberOfExternalCaches = v5 - 1;
  if ( CcEnablePerVolumeLazyWriter == 1 )
  {
    v6 = a1[7];
    CcDereferencePartition(a1[6]);
    if ( v6 )
    {
      v7 = _InterlockedDecrement64((volatile signed __int64 *)(v6 + 8));
      if ( v7 <= 0 )
      {
        if ( v7 )
          __fastfail(0xEu);
        KeSetEvent((PRKEVENT)(v6 + 1200), 0, 0);
      }
    }
  }
  KxReleaseSpinLock(&CcExternalCacheListLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v11 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
