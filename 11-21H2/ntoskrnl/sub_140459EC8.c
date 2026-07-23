/*
 * XREFs of sub_140459EC8 @ 0x140459EC8
 * Callers:
 *     sub_140560798 @ 0x140560798 (sub_140560798.c)
 *     sub_140560880 @ 0x140560880 (sub_140560880.c)
 *     sub_140560BB0 @ 0x140560BB0 (sub_140560BB0.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 */

void __fastcall sub_140459EC8(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // r10
  __int64 v3; // r9

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v3 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v3 + 20) |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0x1FFC;
  }
  *a2 = CurrentIrql;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 56));
}
