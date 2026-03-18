/*
 * XREFs of MiLockWorkingSetOptimal @ 0x14028596C
 * Callers:
 *     MmSetAddressRangeModifiedEx @ 0x14027F1D0 (MmSetAddressRangeModifiedEx.c)
 *     MiMakeSystemCachePteValid @ 0x140345DCC (MiMakeSystemCachePteValid.c)
 *     MiMarkPteDirty @ 0x14034B510 (MiMarkPteDirty.c)
 *     MiDirtySystemCachePte @ 0x140351578 (MiDirtySystemCachePte.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1403D4058 (MiReturnSystemCacheRegionsToKva.c)
 *     MiInitializeBootShadowStackPage @ 0x140644964 (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x140237700 (MiLockPageTableInternal.c)
 *     MiLockWorkingSetShared @ 0x140283C90 (MiLockWorkingSetShared.c)
 */

unsigned __int64 __fastcall MiLockWorkingSetOptimal(__int64 a1, unsigned __int64 a2, _BYTE *a3)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // r9

  v4 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a3 = MiLockWorkingSetShared(a1);
  MiLockPageTableInternal(a1, v4, 0, v5);
  return v4;
}
