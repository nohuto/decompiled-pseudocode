/*
 * XREFs of ?RemoveAll@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ @ 0x18010D968
 * Callers:
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x180055800 (-Initialize@CConstraintModel@@QEAAJXZ.c)
 *     ??1?$CAtlList@_KV?$CElementTraits@_K@ATL@@@ATL@@QEAA@XZ @ 0x180109BC0 (--1-$CAtlList@_KV-$CElementTraits@_K@ATL@@@ATL@@QEAA@XZ.c)
 *     ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x18010C830 (-ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ @ 0x18010D968 (-RemoveAll@-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ.c)
 *     ??1CConstraintModel@@UEAA@XZ @ 0x1801582C0 (--1CConstraintModel@@UEAA@XZ.c)
 *     ?CleanResourceConsumptionMap@CConstraintModel@@AEAAXPEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@@Z @ 0x180158530 (-CleanResourceConsumptionMap@CConstraintModel@@AEAAXPEAV-$CAtlMap@PEAVResourceConsumer@@PEAV-$CA.c)
 *     ??1TelephonyController@@MEAA@XZ @ 0x1801600B4 (--1TelephonyController@@MEAA@XZ.c)
 *     ?GetSupportedCellularRoutingPairs@TelephonyController@@AEAAJXZ @ 0x1801607CC (-GetSupportedCellularRoutingPairs@TelephonyController@@AEAAJXZ.c)
 *     ?Initialize@TelephonyController@@IEAAJXZ @ 0x180160CDC (-Initialize@TelephonyController@@IEAAJXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x1800C37B0 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ @ 0x18010D968 (-RemoveAll@-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::RemoveAll(__int64 a1)
{
  _QWORD *v2; // rcx
  bool v3; // zf
  __int64 v4; // rax
  ATL::CAtlPlex **v5; // rcx

  if ( *(_QWORD *)(a1 + 16) )
  {
    do
    {
      v2 = *(_QWORD **)a1;
      if ( !*(_QWORD *)a1 )
        ATL::AtlThrowImpl(-2147467259);
      *(_QWORD *)a1 = *v2;
      *v2 = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = v2;
      v3 = (*(_QWORD *)(a1 + 16))-- == 1LL;
      v4 = *(_QWORD *)(a1 + 16);
      if ( v3 )
      {
        ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::RemoveAll(a1);
        v4 = *(_QWORD *)(a1 + 16);
      }
    }
    while ( v4 );
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v5 = *(ATL::CAtlPlex ***)(a1 + 24);
  if ( v5 )
  {
    ATL::CAtlPlex::FreeDataChain(v5);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
