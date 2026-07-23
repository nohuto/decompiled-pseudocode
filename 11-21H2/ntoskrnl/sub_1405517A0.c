/*
 * XREFs of sub_1405517A0 @ 0x1405517A0
 * Callers:
 *     sub_140551840 @ 0x140551840 (sub_140551840.c)
 *     sub_1405518C0 @ 0x1405518C0 (sub_1405518C0.c)
 *     sub_140551930 @ 0x140551930 (sub_140551930.c)
 *     sub_140551A30 @ 0x140551A30 (sub_140551A30.c)
 *     sub_140551BE0 @ 0x140551BE0 (sub_140551BE0.c)
 *     sub_140551CA0 @ 0x140551CA0 (sub_140551CA0.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 */

void sub_1405517A0()
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v1; // r9

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql <= 2u )
  {
    while ( qword_140C48600 )
      _mm_pause();
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v1 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v1 + 20) |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
  }
  KeAcquireSpinLockAtDpcLevel(&qword_140C48600);
  byte_140C485F8 = CurrentIrql;
}
