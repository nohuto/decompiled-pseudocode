/*
 * XREFs of sub_14045A41A @ 0x14045A41A
 * Callers:
 *     sub_1403AF3B4 @ 0x1403AF3B4 (sub_1403AF3B4.c)
 *     sub_14056ECDC @ 0x14056ECDC (sub_14056ECDC.c)
 *     sub_14056EE94 @ 0x14056EE94 (sub_14056EE94.c)
 *     sub_14056F190 @ 0x14056F190 (sub_14056F190.c)
 *     sub_14056F494 @ 0x14056F494 (sub_14056F494.c)
 *     sub_140575CD8 @ 0x140575CD8 (sub_140575CD8.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 */

void __fastcall sub_14045A41A(PKSPIN_LOCK SpinLock, unsigned __int8 *a2)
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
  KeAcquireSpinLockAtDpcLevel(SpinLock);
}
