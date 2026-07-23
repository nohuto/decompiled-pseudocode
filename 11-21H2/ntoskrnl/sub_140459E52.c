/*
 * XREFs of sub_140459E52 @ 0x140459E52
 * Callers:
 *     sub_140560880 @ 0x140560880 (sub_140560880.c)
 *     sub_1405609F8 @ 0x1405609F8 (sub_1405609F8.c)
 *     sub_140560AAC @ 0x140560AAC (sub_140560AAC.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 */

void __fastcall sub_140459E52(unsigned __int8 *a1)
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
  KeAcquireSpinLockAtDpcLevel(&qword_140C468E8);
}
