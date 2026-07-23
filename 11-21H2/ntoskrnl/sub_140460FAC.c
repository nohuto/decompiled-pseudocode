/*
 * XREFs of sub_140460FAC @ 0x140460FAC
 * Callers:
 *     sub_1406360C0 @ 0x1406360C0 (sub_1406360C0.c)
 *     sub_140636A64 @ 0x140636A64 (sub_140636A64.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     sub_1402DA448 @ 0x1402DA448 (sub_1402DA448.c)
 */

__int64 __fastcall sub_140460FAC(volatile signed __int32 *SpinLock, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // r8
  unsigned __int8 v5; // cl
  __int64 v6; // r9

  CurrentIrql = KeGetCurrentIrql();
  *a2 = CurrentIrql;
  if ( CurrentIrql <= 1u )
  {
    v5 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v5 <= 0xFu )
    {
      v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v6 + 20) |= ~((unsigned __int8)(1LL << (v5 + 1)) - 1) & 4;
    }
  }
  else if ( CurrentIrql != 2 )
  {
    return (unsigned __int8)sub_1402DA448(SpinLock);
  }
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)SpinLock);
  return 1LL;
}
