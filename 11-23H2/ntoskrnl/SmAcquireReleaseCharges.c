/*
 * XREFs of SmAcquireReleaseCharges @ 0x1403439FC
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140342DD8 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140343348 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     SmFpCleanup @ 0x140344318 (SmFpCleanup.c)
 *     SmFpPreAllocate @ 0x1403A6C04 (SmFpPreAllocate.c)
 *     SmKmAllocateMdlForLock @ 0x1403A6E20 (SmKmAllocateMdlForLock.c)
 *     SmFpAllocate @ 0x140465F8E (SmFpAllocate.c)
 *     SmFpFree @ 0x1404660A8 (SmFpFree.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1405C1008 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1405C23F4 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmKmFreeMdlForLock @ 0x1405CB500 (SmKmFreeMdlForLock.c)
 * Callees:
 *     MmChargeResources @ 0x140343A50 (MmChargeResources.c)
 *     MmReleaseResourceCharge @ 0x140345258 (MmReleaseResourceCharge.c)
 */

__int64 __fastcall SmAcquireReleaseCharges(__int64 a1, unsigned __int64 a2, char a3, int a4)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned int v6; // ebx
  unsigned int v7; // r10d

  v4 = *(_QWORD *)(a1 + 1936);
  v5 = a2 >> 12;
  v6 = 1;
  v7 = a3 & 1 | 2;
  if ( (a3 & 2) == 0 )
    v7 = a3 & 1;
  if ( a4 )
    MmReleaseResourceCharge(v4, v5, v7, 0LL);
  else
    return (unsigned int)MmChargeResources(v4, v5, v7);
  return v6;
}
