/*
 * XREFs of CcAddExternalCacheInternal @ 0x1403D7060
 * Callers:
 *     CcRegisterExternalCache @ 0x1403D6F80 (CcRegisterExternalCache.c)
 *     CcAddExternalCacheToVolume @ 0x1403D7004 (CcAddExternalCacheToVolume.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcAddExternalCacheInternal(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  unsigned int v7; // eax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf

  v4 = KeAcquireSpinLockRaiseToDpc(&CcExternalCacheListLock);
  v5 = (_QWORD *)(a1 + 32);
  v6 = *(_QWORD **)(a2 + 8);
  if ( *v6 != a2 )
    __fastfail(3u);
  v5[1] = v6;
  *v5 = a2;
  *v6 = v5;
  v7 = CcNumberOfExternalCaches;
  *(_QWORD *)(a2 + 8) = v5;
  if ( v7 + 1 < v7 )
    KeBugCheckEx(0x34u, 0x1E0AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcNumberOfExternalCaches = v7 + 1;
  result = KxReleaseSpinLock((volatile signed __int64 *)&CcExternalCacheListLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v4 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v11 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v4);
  return result;
}
