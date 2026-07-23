/*
 * XREFs of KeAcquireInterruptSpinLock @ 0x1402511A0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

KIRQL __stdcall KeAcquireInterruptSpinLock(PKINTERRUPT Interrupt)
{
  unsigned __int64 v1; // rdx
  KIRQL CurrentIrql; // di
  __int64 v4; // r10

  v1 = *((unsigned __int8 *)Interrupt + 93);
  if ( !(_BYTE)v1 )
    KeBugCheckEx(0x13Bu, 1uLL, (ULONG_PTR)Interrupt, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v1);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v1 - 2) <= 0xDu )
  {
    v4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v4 + 20) |= ((1LL << ((unsigned __int8)v1 + 1)) - 1) & ~((1LL << (CurrentIrql + 1)) - 1) & 0xFFFFFFFC;
  }
  KeAcquireSpinLockAtDpcLevel(*((PKSPIN_LOCK *)Interrupt + 9));
  return CurrentIrql;
}
