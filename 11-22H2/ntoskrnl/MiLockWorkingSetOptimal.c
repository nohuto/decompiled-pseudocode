/*
 * XREFs of MiLockWorkingSetOptimal @ 0x14028584C
 * Callers:
 *     MmSetAddressRangeModifiedEx @ 0x14027F0B0 (MmSetAddressRangeModifiedEx.c)
 *     MiMakeSystemCachePteValid @ 0x1403458DC (MiMakeSystemCachePteValid.c)
 *     MiMarkPteDirty @ 0x14034AF10 (MiMarkPteDirty.c)
 *     MiDirtySystemCachePte @ 0x140350F78 (MiDirtySystemCachePte.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1403D39F8 (MiReturnSystemCacheRegionsToKva.c)
 *     MiInitializeBootShadowStackPage @ 0x1406449D4 (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1402376E0 (MiLockPageTableInternal.c)
 *     MiLockWorkingSetShared @ 0x140283B70 (MiLockWorkingSetShared.c)
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
