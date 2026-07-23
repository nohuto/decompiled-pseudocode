/*
 * XREFs of sub_14045F78C @ 0x14045F78C
 * Callers:
 *     sub_140629B70 @ 0x140629B70 (sub_140629B70.c)
 *     sub_140629D0C @ 0x140629D0C (sub_140629D0C.c)
 *     sub_140629E84 @ 0x140629E84 (sub_140629E84.c)
 *     sub_14062A30C @ 0x14062A30C (sub_14062A30C.c)
 *     sub_14062AAC8 @ 0x14062AAC8 (sub_14062AAC8.c)
 *     sub_14062AE30 @ 0x14062AE30 (sub_14062AE30.c)
 *     sub_14062BA64 @ 0x14062BA64 (sub_14062BA64.c)
 *     sub_14062BE2C @ 0x14062BE2C (sub_14062BE2C.c)
 *     sub_14062C2E4 @ 0x14062C2E4 (sub_14062C2E4.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall sub_14045F78C(PEX_SPIN_LOCK SpinLock)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v2; // r9

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v2 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v2 + 20) |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0xFFFC;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
  return CurrentIrql;
}
