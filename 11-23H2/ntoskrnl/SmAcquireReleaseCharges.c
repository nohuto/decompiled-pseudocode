/*
 * XREFs of SmAcquireReleaseCharges @ 0x140343C8C
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140343068 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1403435D8 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     SmFpCleanup @ 0x1403445A8 (SmFpCleanup.c)
 *     SmFpPreAllocate @ 0x1403A6DE4 (SmFpPreAllocate.c)
 *     SmKmAllocateMdlForLock @ 0x1403A7000 (SmKmAllocateMdlForLock.c)
 *     SmFpAllocate @ 0x14046638E (SmFpAllocate.c)
 *     SmFpFree @ 0x1404664A8 (SmFpFree.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1405C1578 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1405C2964 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmKmFreeMdlForLock @ 0x1405CBA70 (SmKmFreeMdlForLock.c)
 * Callees:
 *     MmChargeResources @ 0x140343CE0 (MmChargeResources.c)
 *     MmReleaseResourceCharge @ 0x1403454E8 (MmReleaseResourceCharge.c)
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
