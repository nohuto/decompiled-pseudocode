/*
 * XREFs of ZwUnlockVirtualMemory @ 0x14041E8C0
 * Callers:
 *     CmSiUnlockViewOfSection @ 0x140354A38 (CmSiUnlockViewOfSection.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x1405C20CC (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     SmKmStoreHelperCommandProcess @ 0x1405CB808 (SmKmStoreHelperCommandProcess.c)
 *     VmColdPagesHint @ 0x1405F8930 (VmColdPagesHint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnlockVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
