/*
 * XREFs of KeAcquireQueuedSpinLockRaiseToSynch @ 0x14056E460
 * Callers:
 *     sub_1406123A0 @ 0x1406123A0 (sub_1406123A0.c)
 * Callees:
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 */

unsigned __int8 __fastcall KeAcquireQueuedSpinLockRaiseToSynch(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v2; // r9
  volatile __int64 **v3; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v2 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v2 + 20) |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0x1FFC;
  }
  v3 = (volatile __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * a1);
  sub_1403119F0((__int64)v3, v3[1]);
  return CurrentIrql;
}
