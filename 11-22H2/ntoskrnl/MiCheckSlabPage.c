/*
 * XREFs of MiCheckSlabPage @ 0x1402922C8
 * Callers:
 *     MiMakeDriverPagesPrivate @ 0x140291930 (MiMakeDriverPagesPrivate.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiFinalizeImageHeaderPage @ 0x140330294 (MiFinalizeImageHeaderPage.c)
 *     MiProtectDriverSectionPte @ 0x14061A510 (MiProtectDriverSectionPte.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14026E9B0 (MiSearchNumaNodeTable.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7AE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140314440 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCheckSlabPage(__int64 a1, int a2)
{
  __int64 v2; // rbx
  ULONG_PTR v3; // rbp
  __int64 v4; // rsi
  KIRQL v5; // al
  unsigned __int64 v6; // rbx
  unsigned int v7; // edi
  unsigned __int64 v8; // r14
  unsigned __int64 v10; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // edx
  bool v15; // zf

  v2 = *(_QWORD *)(qword_140C674C8 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  v3 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  v4 = 264LL * a2 + 25408LL * *((unsigned int *)MiSearchNumaNodeTable(v3) + 2) + *(_QWORD *)(v2 + 16) + 23392LL;
  v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v4 + 16));
  v6 = *(_QWORD *)v4;
  v7 = 0;
  v8 = v5;
  if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v6 )
    v6 ^= v4;
  while ( v6 )
  {
    if ( v3 > *(_QWORD *)(v6 + 32) )
    {
      v10 = *(_QWORD *)(v6 + 8);
    }
    else
    {
      if ( v3 >= *(_QWORD *)(v6 + 24) )
        break;
      v10 = *(_QWORD *)v6;
    }
    if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v10 )
      v6 ^= v10;
    else
      v6 = v10;
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v4 + 16));
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
      v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
      v15 = (v14 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v8);
  LOBYTE(v7) = v6 != 0;
  return v7;
}
