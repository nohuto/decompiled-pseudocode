/*
 * XREFs of MiManagePartitionCharges @ 0x1405BEF18
 * Callers:
 *     MmManagePartitionCharges @ 0x140982240 (MmManagePartitionCharges.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiManagePartitionCharges(__int64 a1, char a2, unsigned int a3, __int64 a4)
{
  volatile LONG *v4; // rbp
  unsigned __int64 v9; // rbx
  int v10; // edi
  _QWORD *v11; // rdx
  __int64 v12; // r8
  _QWORD *v13; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf

  v4 = (volatile LONG *)(a1 + 1344);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
  if ( a3 )
  {
    v10 = a2 & 2;
    v11 = (_QWORD *)(a4 + 24);
    v12 = a3;
    do
    {
      v13 = (_QWORD *)(a1 + (-(__int64)(*((_DWORD *)v11 - 6) != 0) & 0xFFFFFFFFFFFFFFE0uLL) + 2312);
      if ( v10 )
      {
        v13[3] = *v11;
      }
      else
      {
        *v11 = v13[3];
        v11[1] = v13[1];
        *(v11 - 1) = v13[2];
        *(v11 - 2) = *v13;
      }
      v11 += 5;
      --v12;
    }
    while ( v12 );
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v18 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return 0LL;
}
