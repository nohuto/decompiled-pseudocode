/*
 * XREFs of RtlpHpLfhContextCompact @ 0x140314E58
 * Callers:
 *     RtlpHpHeapCompact @ 0x140337B54 (RtlpHpHeapCompact.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7AE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpLfhOwnerCompact @ 0x14031579C (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpAcquireLockShared @ 0x140315948 (RtlpHpAcquireLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall RtlpHpLfhContextCompact(__int64 a1, int a2, __int64 a3)
{
  int v5; // ebp
  unsigned __int8 v6; // si
  _QWORD *v7; // rbx
  __int64 v8; // r14
  $C71981A45BEB2B45F82C232A7085991E *v9; // rax
  struct _KTHREAD *CurrentThread; // rcx
  bool v11; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax

  v5 = a2 & 1;
  if ( (a2 & 1) != 0 )
    v6 = -1;
  else
    v6 = RtlpHpAcquireLockShared(a1 + 72, *(unsigned __int8 *)(a1 + 57), a3);
  v7 = (_QWORD *)(a1 + 128);
  v8 = 129LL;
  do
  {
    v9 = ($C71981A45BEB2B45F82C232A7085991E *)*v7;
    if ( (*v7 & 1) == 0 )
      LOBYTE(v9) = RtlpHpLfhOwnerCompact(a1, *v7, a2 | 1u);
    ++v7;
    --v8;
  }
  while ( v8 );
  if ( !v5 )
  {
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << (v6 + 1));
          v11 = (v15 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v15;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      LOBYTE(v9) = v6;
      __writecr8(v6);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 72));
      LOBYTE(v9) = KeAbPostRelease(a1 + 72);
      CurrentThread = KeGetCurrentThread();
      v11 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v11 )
      {
        v9 = &CurrentThread->152;
        if ( ($C71981A45BEB2B45F82C232A7085991E *)v9->ApcState.ApcListHead[0].Flink != v9 )
          LOBYTE(v9) = KiCheckForKernelApcDelivery();
      }
    }
  }
  return (char)v9;
}
