/*
 * XREFs of HalpMcUpdateLock @ 0x14051BC6C
 * Callers:
 *     HalpPowerStateCallback @ 0x1403B06D0 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x140504BF0 (HalStartDynamicProcessor.c)
 *     HalpLoadMicrocode @ 0x140934B30 (HalpLoadMicrocode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     MmLockPreChargedPagedPool @ 0x140A30950 (MmLockPreChargedPagedPool.c)
 */

__int64 __fastcall HalpMcUpdateLock(__int64 a1, __int64 a2)
{
  PVOID v2; // rcx
  unsigned int v3; // ebx

  v2 = HalpMcUpdateData;
  v3 = 0;
  if ( HalpMcUpdateData && HalpMcUpdateDataCharged )
    MmLockPreChargedPagedPool(HalpMcUpdateData, (unsigned int)HalpMcUpdateDataSize);
  if ( HalpMcUpdateLockFunc )
  {
    LOBYTE(v2) = 1;
    LOBYTE(a2) = HalpMcUpdateData == 0LL;
    return (unsigned int)HalpMcUpdateLockFunc(v2, a2);
  }
  return v3;
}
