/*
 * XREFs of ?FreeNode@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18015FEC0
 * Callers:
 *     ?RemoveAll@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEAAXXZ @ 0x180160838 (-RemoveAll@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@.c)
 *     ?RemoveNode@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@AEAAXPEAVCNode@12@0@Z @ 0x180160A28 (-RemoveNode@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE814 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreePlexes@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@AEAAXXZ @ 0x1801345D4 (-FreePlexes@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceV.c)
 *     ?PickSize@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@AEBAI_K@Z @ 0x180135768 (-PickSize@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V.c)
 *     ?Rehash@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEAAXI@Z @ 0x1801605B8 (-Rehash@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL.c)
 */

void __fastcall ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::FreeNode(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v3; // rdx
  unsigned int v4; // eax

  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = a2;
  v3 = *(_QWORD *)(a1 + 8) - 1LL;
  *(_QWORD *)(a1 + 8) = v3;
  if ( v3 < *(_QWORD *)(a1 + 40) && !*(_DWORD *)(a1 + 48) )
  {
    v4 = ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::PickSize(
           a1,
           v3);
    ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::Rehash(
      a1,
      v4);
  }
  if ( !*(_QWORD *)(a1 + 8) )
    ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,_ResourceValue,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<_ResourceValue>>::FreePlexes(a1);
}
