/*
 * XREFs of KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x14056E3D0
 * Callers:
 *     sub_140612160 @ 0x140612160 (sub_140612160.c)
 * Callees:
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 */

__int64 __fastcall KeAcquireInStackQueuedSpinLockRaiseToSynch(volatile __int64 *a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // r11
  __int64 v3; // r9

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v3 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v3 + 20) |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0x1FFC;
  }
  *(_BYTE *)(a2 + 16) = CurrentIrql;
  return sub_1403119F0(a2, a1);
}
