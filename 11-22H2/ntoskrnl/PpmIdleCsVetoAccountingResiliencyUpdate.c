/*
 * XREFs of PpmIdleCsVetoAccountingResiliencyUpdate @ 0x140584F80
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x14099812C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x14058506C (PpmIdleCsVetoAccountingUpdateBlock.c)
 */

void __fastcall PpmIdleCsVetoAccountingResiliencyUpdate(char a1)
{
  unsigned __int64 v2; // rbx
  unsigned int v3; // edi
  __int64 i; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf

  if ( PpmPlatformStates && *(_DWORD *)(PpmPlatformStates + 4) )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
    v3 = 0;
    for ( i = PpmPlatformStates; v3 < *(_DWORD *)PpmPlatformStates; ++v3 )
    {
      v5 = v3;
      v6 = 448LL * v3;
      LOBYTE(v5) = 2;
      v7 = v6 + i + 80;
      LOBYTE(v6) = a1;
      PpmIdleCsVetoAccountingUpdateBlock(v7, v5, v6);
      i = PpmPlatformStates;
    }
    KxReleaseSpinLock((volatile signed __int64 *)&PpmIdleVetoLock);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v2 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v2);
  }
}
