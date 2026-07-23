/*
 * XREFs of HalpMcUpdateUnlock @ 0x14051C214
 * Callers:
 *     HalpPowerStateCallback @ 0x1403B08B0 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x140505140 (HalStartDynamicProcessor.c)
 *     HalpLoadMicrocode @ 0x140934D30 (HalpLoadMicrocode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     MmUnlockPreChargedPagedPool @ 0x140A30CE0 (MmUnlockPreChargedPagedPool.c)
 */

__int64 HalpMcUpdateUnlock()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( HalpMcUpdateData && HalpMcUpdateDataCharged )
    MmUnlockPreChargedPagedPool(HalpMcUpdateData, (unsigned int)HalpMcUpdateDataSize);
  if ( HalpMcUpdateUnlockFunc )
    return (unsigned int)HalpMcUpdateUnlockFunc();
  return v0;
}
