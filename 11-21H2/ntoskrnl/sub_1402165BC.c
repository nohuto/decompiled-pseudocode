/*
 * XREFs of sub_1402165BC @ 0x1402165BC
 * Callers:
 *     sub_140201144 @ 0x140201144 (sub_140201144.c)
 *     sub_1402137E4 @ 0x1402137E4 (sub_1402137E4.c)
 *     sub_140215AA8 @ 0x140215AA8 (sub_140215AA8.c)
 *     sub_140215E54 @ 0x140215E54 (sub_140215E54.c)
 *     sub_1405910C0 @ 0x1405910C0 (sub_1405910C0.c)
 *     sub_140591724 @ 0x140591724 (sub_140591724.c)
 *     sub_140591814 @ 0x140591814 (sub_140591814.c)
 *     sub_140591AD0 @ 0x140591AD0 (sub_140591AD0.c)
 *     sub_140591C4C @ 0x140591C4C (sub_140591C4C.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

unsigned __int8 __fastcall sub_1402165BC(char a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // r9
  __int64 v4; // r14
  unsigned int v5; // ebx
  __int64 v6; // r14

  if ( (a1 & 4) != 0 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v3 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v3 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
  }
  if ( (a1 & 1) != 0 )
  {
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb() + 4199) + 12488LL)
                                                    + 128LL));
  }
  else
  {
    v4 = qword_140C506E0;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(qword_140C506E0 + 112) + 128LL));
    v5 = 1;
    if ( (unsigned __int16)word_140D05000 > 1u )
    {
      v6 = v4 + 232;
      do
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)v6 + 128LL));
        v6 += 120LL;
        ++v5;
      }
      while ( v5 < (unsigned __int16)word_140D05000 );
    }
  }
  return CurrentIrql;
}
