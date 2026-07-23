/*
 * XREFs of ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x1405C0B20
 * Callers:
 *     ?SmStLockVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z @ 0x1405C1300 (-SmStLockVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1405C1578 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x1405C20F4 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 * Callees:
 *     SmKmStoreHelperCheckWaitCommand @ 0x1403433AC (SmKmStoreHelperCheckWaitCommand.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(__int64 a1, __int64 a2, int a3)
{
  if ( *(_QWORD *)(a1 + 6576) != a2 )
    return 1LL;
  if ( (unsigned int)SmKmStoreHelperCheckWaitCommand(a1 + 6360, a3) == -1073741536 )
  {
    *(_QWORD *)(a1 + 6576) = 0LL;
    return 1LL;
  }
  return 0LL;
}
