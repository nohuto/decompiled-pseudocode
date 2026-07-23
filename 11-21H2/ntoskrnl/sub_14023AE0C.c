/*
 * XREFs of sub_14023AE0C @ 0x14023AE0C
 * Callers:
 *     sub_14023AB60 @ 0x14023AB60 (sub_14023AB60.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 */

void __fastcall sub_14023AE0C(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // r10
  __int64 v2; // r9

  if ( byte_140C4BF30 )
  {
    *a1 = 15;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v2 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v2 + 20) |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0xFFFC;
    }
    *a1 = CurrentIrql;
    KeAcquireSpinLockAtDpcLevel(&qword_140C4BCA8);
  }
}
