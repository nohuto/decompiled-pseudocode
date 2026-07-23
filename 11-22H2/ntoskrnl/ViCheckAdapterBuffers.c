/*
 * XREFs of ViCheckAdapterBuffers @ 0x140AC91E4
 * Callers:
 *     VfMapTransfer @ 0x140AC7F00 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140AC80B0 (VfMapTransferEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ViCheckTag @ 0x140AC9514 (ViCheckTag.c)
 */

void __fastcall ViCheckAdapterBuffers(__int64 a1)
{
  _QWORD **v1; // rbx
  __int16 v2; // bp
  volatile signed __int64 *v3; // rsi
  KIRQL v4; // al
  _QWORD *v5; // r14
  unsigned __int64 v6; // rdi
  __int64 i; // r10
  __int64 v8; // rdx
  __int16 v9; // r9
  unsigned __int64 v10; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf

  v1 = (_QWORD **)(a1 + 112);
  v2 = 0;
  if ( *v1 != v1 )
  {
    v3 = (volatile signed __int64 *)(a1 + 128);
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
    v5 = *v1;
    v6 = v4;
    for ( i = (__int64)(*v1 - 6); v1 != v5; v5 = (_QWORD *)*v5 )
    {
      v8 = *(unsigned int *)(i + 8);
      v9 = v2 | 1;
      v10 = *(_QWORD *)(i + 24) - *(_QWORD *)(i + 16);
      if ( v10 < 8 )
        v9 = v2;
      v2 = v9 | 2;
      if ( v8 + v10 + 8 > *(unsigned int *)(i + 4) )
        v2 = v9;
      ViCheckTag(*(_QWORD *)(i + 24), v8);
      i = *v5 - 48LL;
    }
    KxReleaseSpinLock(v3);
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
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v6);
  }
}
