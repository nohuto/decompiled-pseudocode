/*
 * XREFs of sub_14056EC64 @ 0x14056EC64
 * Callers:
 *     sub_14056F060 @ 0x14056F060 (sub_14056F060.c)
 *     sub_14056F330 @ 0x14056F330 (sub_14056F330.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 */

void __fastcall sub_14056EC64(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // r10
  __int64 v2; // r9

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v2 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v2 + 20) |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0x1FFC;
  }
  *a1 = CurrentIrql;
  KeAcquireSpinLockAtDpcLevel(&qword_140C2B0D0);
}
