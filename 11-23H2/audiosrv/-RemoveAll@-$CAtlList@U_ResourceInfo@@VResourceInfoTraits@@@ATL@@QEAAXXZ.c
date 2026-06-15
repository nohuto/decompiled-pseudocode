/*
 * XREFs of ?RemoveAll@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ @ 0x180101D84
 * Callers:
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x18005C0D4 (-Initialize@CConstraintModel@@QEAAJXZ.c)
 *     ??1?$CAtlList@_KV?$CElementTraits@_K@ATL@@@ATL@@QEAA@XZ @ 0x1800FE938 (--1-$CAtlList@_KV-$CElementTraits@_K@ATL@@@ATL@@QEAA@XZ.c)
 *     ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1801010B4 (-ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ @ 0x180101D84 (-RemoveAll@-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ.c)
 *     ??1CConstraintModel@@UEAA@XZ @ 0x18015F580 (--1CConstraintModel@@UEAA@XZ.c)
 *     ?CleanResourceConsumptionMap@CConstraintModel@@AEAAXPEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@@Z @ 0x18015F8C0 (-CleanResourceConsumptionMap@CConstraintModel@@AEAAXPEAV-$CAtlMap@PEAVResourceConsumer@@PEAV-$CA.c)
 *     ??1TelephonyController@@MEAA@XZ @ 0x1801660D4 (--1TelephonyController@@MEAA@XZ.c)
 *     ?GetSupportedCellularRoutingPairs@TelephonyController@@AEAAJXZ @ 0x18016679C (-GetSupportedCellularRoutingPairs@TelephonyController@@AEAAJXZ.c)
 *     ?Initialize@TelephonyController@@IEAAJXZ @ 0x180166C98 (-Initialize@TelephonyController@@IEAAJXZ.c)
 * Callees:
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x180014F90 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE7C4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RemoveAll@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ @ 0x180101D84 (-RemoveAll@-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::RemoveAll(__int64 a1)
{
  _QWORD *v2; // rcx
  ATL::CAtlPlex **v4; // rcx

  while ( *(_QWORD *)(a1 + 16) )
  {
    v2 = *(_QWORD **)a1;
    if ( !*(_QWORD *)a1 )
      ATL::AtlThrowImpl(-2147467259);
    *(_QWORD *)a1 = *v2;
    *v2 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = v2;
    if ( (*(_QWORD *)(a1 + 16))-- == 1LL )
      ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::RemoveAll(a1);
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v4 = *(ATL::CAtlPlex ***)(a1 + 24);
  if ( v4 )
  {
    ATL::CAtlPlex::FreeDataChain(v4);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
