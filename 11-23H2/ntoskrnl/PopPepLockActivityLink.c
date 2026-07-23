/*
 * XREFs of PopPepLockActivityLink @ 0x140313DF8
 * Callers:
 *     PopPepUpdateConstraints @ 0x14028D4C4 (PopPepUpdateConstraints.c)
 *     PopPepTryPowerDownDevice @ 0x140310F60 (PopPepTryPowerDownDevice.c)
 *     PopPepProcessEvent @ 0x140313B90 (PopPepProcessEvent.c)
 *     PopPepComponentSetLatency @ 0x14035B710 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x1403B3F24 (PopPepComponentSetResidency.c)
 *     PopPepCompleteComponentIdleState @ 0x14059F094 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetWakeHint @ 0x14059F1A0 (PopPepComponentSetWakeHint.c)
 *     PopPepSurprisePowerOn @ 0x1405A02B0 (PopPepSurprisePowerOn.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7E90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1403148B0 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall PopPepLockActivityLink(__int64 a1, volatile LONG *a2, unsigned int a3, unsigned int a4, KIRQL *a5)
{
  char v5; // bl
  KIRQL v8; // al
  bool v9; // zf
  unsigned __int64 v10; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax

  v5 = 0;
  if ( !a2 || *(_DWORD *)(a1 + 180) == 1 )
    goto LABEL_12;
  if ( a3 == 6 )
  {
    if ( a4 == 6 )
    {
LABEL_12:
      v5 = 1;
      *a5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
      *(_BYTE *)(a1 + 125) = 1;
      return v5;
    }
  }
  else if ( a3 <= 5 && ActivityAttributes[136 * a3] == 1 )
  {
    goto LABEL_12;
  }
  if ( a4 <= 5 && ActivityAttributes[136 * a4] == 1 )
    goto LABEL_12;
  v8 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  v9 = *(_BYTE *)(a1 + 125) == 1;
  v10 = v8;
  *a5 = v8;
  if ( v9 )
  {
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v10 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v9 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v10);
    goto LABEL_12;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(a2);
  return v5;
}
