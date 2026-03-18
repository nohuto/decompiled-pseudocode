/*
 * XREFs of MmUpdateSlabRangeType @ 0x140B52548
 * Callers:
 *     PsDispatchIumService @ 0x1405E1764 (PsDispatchIumService.c)
 * Callees:
 *     MiEnumerateSlabAllocators @ 0x14023B3C8 (MiEnumerateSlabAllocators.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     MiInsertSlabEntry @ 0x1403C2B24 (MiInsertSlabEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiRemoveSlabEntry @ 0x1405B1910 (MiRemoveSlabEntry.c)
 */

__int64 __fastcall MmUpdateSlabRangeType(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, int a3)
{
  __int64 result; // rax
  ULONG_PTR v4; // rsi
  ULONG_PTR BugCheckParameter4; // r13
  __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // r12
  unsigned __int64 v11; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r8
  _DWORD *SchedulerAssist; // r11
  int v15; // eax
  bool v16; // zf
  ULONG_PTR v17; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  result = (unsigned int)dword_140C54F84;
  v4 = BugCheckParameter3;
  BugCheckParameter4 = a3;
  if ( (dword_140C54F84 & 8) != 0 && BugCheckParameter3 )
  {
    do
    {
      v7 = *((unsigned int *)MiSearchNumaNodeTable(BugCheckParameter2) + 2);
      v18 = 0LL;
      v17 = BugCheckParameter2;
      MiEnumerateSlabAllocators(
        (__int64)&MiSystemPartition,
        (unsigned int (__fastcall *)(__int64, unsigned __int64, __int64))MiUpdateSlabRangeTypeHelper,
        (__int64)&v17,
        v7);
      v8 = v18;
      if ( !v18 )
        KeBugCheckEx(0x1Au, 0x3030312uLL, BugCheckParameter2, v4, BugCheckParameter4);
      if ( *(_QWORD *)(v18 + 24) != BugCheckParameter2 )
        KeBugCheckEx(0x1Au, 0x3030313uLL, BugCheckParameter2, *(_QWORD *)(v18 + 24), 0LL);
      v9 = *(_QWORD *)(v18 + 40);
      result = *(int *)(v9 + 48);
      if ( (unsigned int)result <= 3 && (_DWORD)result != 2 )
        KeBugCheckEx(0x1Au, 0x3030314uLL, BugCheckParameter2, *(_QWORD *)(v18 + 40), *(int *)(v9 + 48));
      v10 = 168LL * *((int *)MmSlabTypeToMiSlabType + BugCheckParameter4) + 23168 + 24512 * v7 + qword_140C54F90;
      if ( v10 != v9 )
      {
        v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 16));
        MiRemoveSlabEntry((__int64)&MiSystemPartition, (unsigned __int64 *)v9, v8);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 16));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v16 = (v15 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v15;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v11);
        *(_QWORD *)(v8 + 40) = v10;
        result = MiInsertSlabEntry((__int64)&MiSystemPartition, v10, v8);
      }
      BugCheckParameter2 += 512LL;
      v4 -= 512LL;
    }
    while ( v4 );
  }
  return result;
}
