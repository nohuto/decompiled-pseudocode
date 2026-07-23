/*
 * XREFs of PspJobIoRateVolumeEntryInsert @ 0x1405A44C8
 * Callers:
 *     PspSetJobIoRateControlForVolume @ 0x1409B2B64 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14024CCA0 (RtlRbInsertNodeEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLockTrackerCompare @ 0x1405A4430 (MiLockTrackerCompare.c)
 */

void __fastcall PspJobIoRateVolumeEntryInsert(__int64 a1, _RTL_BALANCED_NODE *a2)
{
  volatile LONG *v2; // r12
  __int64 v4; // rdi
  KIRQL v5; // al
  unsigned __int64 v6; // r14
  signed __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  BOOLEAN v9; // r8
  int v10; // esi
  unsigned __int64 v11; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf

  v2 = (volatile LONG *)(a1 + 1672);
  v4 = a1 + 1680;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1672));
  v6 = (unsigned __int64)a2[1].Children[0];
  v7 = *(_QWORD *)v4;
  v8 = v5;
  if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v7 )
    v7 ^= v4;
  v9 = 0;
  v10 = *(_BYTE *)(v4 + 8) & 1;
  if ( v7 )
  {
    while ( 1 )
    {
      if ( (int)MiLockTrackerCompare(v6, v7) < 0 )
      {
        v11 = *(_QWORD *)v7;
        if ( v10 )
        {
          if ( !v11 )
            goto LABEL_16;
          v11 ^= v7;
        }
        if ( !v11 )
        {
LABEL_16:
          v9 = 0;
          break;
        }
      }
      else
      {
        v11 = *(_QWORD *)(v7 + 8);
        if ( v10 )
        {
          if ( !v11 )
            goto LABEL_10;
          v11 ^= v7;
        }
        if ( !v11 )
        {
LABEL_10:
          v9 = 1;
          break;
        }
      }
      v7 = v11;
    }
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)v4, (PRTL_BALANCED_NODE)v7, v9, a2);
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v8 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
      v16 = (v15 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v8);
}
