/*
 * XREFs of EtwpCovSampCaptureCancelApcs @ 0x140635C4C
 * Callers:
 *     EtwpCovSampCaptureContextStop @ 0x140635EEC (EtwpCovSampCaptureContextStop.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeRemoveQueueApc @ 0x14024EC10 (KeRemoveQueueApc.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140460DBA (EtwpCovSampCaptureReleaseToLookaside.c)
 */

__int64 __fastcall EtwpCovSampCaptureCancelApcs(__int64 a1)
{
  __int64 result; // rax
  __int64 *v2; // r14
  __int64 *v3; // rdi
  KSPIN_LOCK *v4; // r12
  void *v5; // rsi
  unsigned __int64 v6; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf
  __int64 v10; // rbx
  __int64 v11; // rdx

  result = *(unsigned int *)(a1 + 456);
  if ( *(_DWORD *)(a1 + 460) != (_DWORD)result )
  {
    v2 = (__int64 *)(a1 + 416);
    v3 = *(__int64 **)(a1 + 416);
    if ( v3 != (__int64 *)(a1 + 416) )
    {
      v4 = (KSPIN_LOCK *)(a1 + 368);
      do
      {
        v5 = 0LL;
        v6 = KeAcquireSpinLockRaiseToDpc(v4);
        if ( *((_BYTE *)v3 + 114) )
        {
          v5 = (void *)v3[5];
          if ( v5 )
            ObfReferenceObjectWithTag((PVOID)v3[5], 0x746C6644u);
        }
        KxReleaseSpinLock(v4);
        result = (unsigned int)KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            result = KeGetCurrentIrql();
            if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v6 <= 0xFu && (unsigned __int8)result >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
              v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= result;
              if ( v9 )
                result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v6);
        if ( v5 )
        {
          if ( KeRemoveQueueApc((__int64)(v3 + 4)) )
          {
            v10 = qword_140C15D88;
            memset(v3 + 4, 0, 0x58uLL);
            v11 = v3[3];
            *((_DWORD *)v3 + 30) = 0;
            EtwpCovSampCaptureReleaseToLookaside(v10, v11, (struct _SLIST_ENTRY *)(v3 - 3));
          }
          result = ObfDereferenceObjectWithTag(v5, 0x746C6644u);
        }
        v3 = (__int64 *)*v3;
      }
      while ( v3 != v2 );
    }
  }
  return result;
}
