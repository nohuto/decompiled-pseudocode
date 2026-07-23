/*
 * XREFs of sub_14045F804 @ 0x14045F804
 * Callers:
 *     sub_140628D00 @ 0x140628D00 (sub_140628D00.c)
 *     sub_14062908C @ 0x14062908C (sub_14062908C.c)
 *     sub_14062B1A8 @ 0x14062B1A8 (sub_14062B1A8.c)
 *     sub_14062B7FC @ 0x14062B7FC (sub_14062B7FC.c)
 *     sub_14062BE2C @ 0x14062BE2C (sub_14062BE2C.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall sub_14045F804(PEX_SPIN_LOCK SpinLock)
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
  ExAcquireSpinLockSharedAtDpcLevel(SpinLock);
  return CurrentIrql;
}
