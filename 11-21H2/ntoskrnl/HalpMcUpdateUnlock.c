/*
 * XREFs of HalpMcUpdateUnlock @ 0x14038D400
 * Callers:
 *     HalpPowerStateCallback @ 0x1403B60E0 (HalpPowerStateCallback.c)
 *     HalpLoadMicrocode @ 0x14090A1A0 (HalpLoadMicrocode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     MmUnlockPreChargedPagedPool @ 0x140800560 (MmUnlockPreChargedPagedPool.c)
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
