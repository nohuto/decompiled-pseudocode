/*
 * XREFs of VerifierPortKeAcquireSpinLockNoXdv @ 0x140A96660
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfMiscCheckKernelAddress @ 0x1406021F8 (VfMiscCheckKernelAddress.c)
 *     ViTargetIncrementCounter @ 0x140A8B2AC (ViTargetIncrementCounter.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140A96894 (ViKeIrqlLogAndTrimMemory.c)
 */

KIRQL __fastcall VerifierPortKeAcquireSpinLockNoXdv(PKSPIN_LOCK SpinLock, KIRQL *a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  KIRQL result; // al

  ++dword_140C29FC8;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a3, 164LL);
  VfMiscCheckKernelAddress((ULONG_PTR)SpinLock, 8uLL);
  LOBYTE(v5) = 2;
  v6 = ViKeIrqlLogAndTrimMemory(v5);
  result = KeAcquireSpinLockRaiseToDpc(SpinLock);
  *a2 = result;
  if ( v6 )
    *(_WORD *)(v6 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
