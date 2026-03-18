/*
 * XREFs of HalpMcUpdateUnlock @ 0x14051BCC4
 * Callers:
 *     HalpPowerStateCallback @ 0x1403B06D0 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x140504BF0 (HalStartDynamicProcessor.c)
 *     HalpLoadMicrocode @ 0x140934B30 (HalpLoadMicrocode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     MmUnlockPreChargedPagedPool @ 0x140A30A30 (MmUnlockPreChargedPagedPool.c)
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
