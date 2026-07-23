/*
 * XREFs of EtwpCovSampCaptureCancelApcs @ 0x140602E70
 * Callers:
 *     EtwpCovSampCaptureContextStop @ 0x140603108 (EtwpCovSampCaptureContextStop.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     KeRemoveQueueApc @ 0x140361D10 (KeRemoveQueueApc.c)
 *     memset @ 0x140435400 (memset.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140469B2A (EtwpCovSampCaptureReleaseToLookaside.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall EtwpCovSampCaptureCancelApcs(__int64 a1)
{
  __int64 *v1; // r14
  __int64 *v2; // rdi
  KSPIN_LOCK *v3; // r12
  void *v4; // rsi
  unsigned __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  __int64 v11; // rbx
  __int64 v12; // rdx

  if ( *(_DWORD *)(a1 + 716) != *(_DWORD *)(a1 + 712) )
  {
    v1 = (__int64 *)(a1 + 672);
    v2 = *(__int64 **)(a1 + 672);
    if ( v2 != (__int64 *)(a1 + 672) )
    {
      v3 = (KSPIN_LOCK *)(a1 + 632);
      do
      {
        v4 = 0LL;
        v5 = KeAcquireSpinLockRaiseToDpc(v3);
        if ( *((_BYTE *)v2 + 114) )
        {
          v4 = (void *)v2[5];
          if ( v4 )
            ObfReferenceObjectWithTag((PVOID)v2[5], 0x746C6644u);
        }
        KxReleaseSpinLock((volatile signed __int64 *)v3);
        if ( (_DWORD)KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
            && CurrentIrql <= 0xFu
            && (unsigned __int8)v5 <= 0xFu
            && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
            v10 = (v9 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v9;
            if ( v10 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v5);
        if ( v4 )
        {
          if ( KeRemoveQueueApc((__int64)(v2 + 4)) )
          {
            v11 = qword_140C31CA8;
            memset(v2 + 4, 0, 0x58uLL);
            v12 = v2[3];
            *((_DWORD *)v2 + 30) = 0;
            EtwpCovSampCaptureReleaseToLookaside(v11, v12, (_SLIST_ENTRY *)(v2 - 3));
          }
          ObfDereferenceObjectWithTag(v4, 0x746C6644u);
        }
        v2 = (__int64 *)*v2;
      }
      while ( v2 != v1 );
    }
  }
}
