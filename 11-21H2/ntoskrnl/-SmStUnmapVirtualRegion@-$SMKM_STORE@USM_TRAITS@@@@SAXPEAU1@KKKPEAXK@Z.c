/*
 * XREFs of ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140379A64
 * Callers:
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14037556C (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x1403790A8 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x140379950 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x140391E54 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140394DD0 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x1405F7344 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x1405F7B94 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x140262ED4 (SmAcquireReleaseCharges.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ?SmStFindVirtualLockedRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@KPEAX@Z @ 0x1403798F0 (-SmStFindVirtualLockedRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@K.c)
 *     SmKmUnlockMdl @ 0x140379C24 (SmKmUnlockMdl.c)
 *     SmFpFree @ 0x14037AE58 (SmFpFree.c)
 */

char __fastcall SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // rdi
  signed __int64 *v7; // rsi
  unsigned __int64 v8; // r13
  struct _KTHREAD *v9; // rax
  __int64 v10; // rbx
  int v12; // r15d
  __int64 v13; // r12
  PMDL *VirtualLockedRegion; // rdi
  struct _KTHREAD *CurrentThread; // rax

  v6 = *(_QWORD *)(a1 + 6216);
  v7 = (signed __int64 *)(a1 + 6024);
  v8 = *(unsigned int *)(a1 + 6208);
  LOBYTE(v9) = 0;
  v10 = a2;
  v12 = 0;
  v13 = *(_QWORD *)(v6 + 8LL * a2) & 0x7FFFFFFFFFFF0000LL;
  if ( (a6 & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v12 = 1;
    --CurrentThread->SpecialApcDisable;
    LOBYTE(v9) = ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
  }
  if ( (a6 & 4) != 0 )
  {
    if ( *(__int64 *)(v6 + 8 * v10) >= 0 )
    {
      VirtualLockedRegion = (PMDL *)SMKM_STORE<SM_TRAITS>::SmStFindVirtualLockedRegion(a1, (a6 >> 4) & 7, v13);
      SmKmUnlockMdl(*VirtualLockedRegion);
      LOBYTE(v9) = SmFpFree(*(_QWORD *)(a1 + 6480), 2LL, a1 + 6360, *VirtualLockedRegion);
      *VirtualLockedRegion = 0LL;
    }
  }
  else
  {
    if ( (a6 & 2) != 0 )
    {
      LOWORD(v9) = 0x7FFF;
LABEL_20:
      _InterlockedAnd16((volatile signed __int16 *)(v6 + 8 * v10), (unsigned __int16)v9);
      goto LABEL_10;
    }
    if ( (a6 & 1) != 0 )
      goto LABEL_10;
    if ( _bittest16((const signed __int16 *)(v6 + 8 * v10), 0xDu)
      && KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 6488) )
    {
      LOWORD(v9) = -8193;
      goto LABEL_20;
    }
    LOWORD(v9) = _InterlockedDecrement16((volatile signed __int16 *)(v6 + 8 * v10));
    if ( ((unsigned __int16)v9 & 0x1FFF) == 0 && *(__int64 *)(v6 + 8 * v10) >= 0 )
      LOBYTE(v9) = SmAcquireReleaseCharges(v8, 1, 1);
  }
LABEL_10:
  if ( v12 )
  {
    if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v7);
    KeAbPostRelease((ULONG_PTR)v7);
    v9 = KeGetCurrentThread();
    if ( v9->SpecialApcDisable++ == -1 )
    {
      v9 = (struct _KTHREAD *)((char *)v9 + 152);
      if ( *(struct _KTHREAD **)&v9->Header.Lock != v9 )
        LOBYTE(v9) = KiCheckForKernelApcDelivery();
    }
  }
  return (char)v9;
}
