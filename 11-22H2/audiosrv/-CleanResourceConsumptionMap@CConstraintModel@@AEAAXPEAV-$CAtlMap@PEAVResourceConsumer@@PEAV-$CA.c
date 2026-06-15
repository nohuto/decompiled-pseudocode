/*
 * XREFs of ?CleanResourceConsumptionMap@CConstraintModel@@AEAAXPEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@@Z @ 0x18015F910
 * Callers:
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x18005C0C4 (-Initialize@CConstraintModel@@QEAAJXZ.c)
 *     ??1CConstraintModel@@UEAA@XZ @ 0x18015F5D0 (--1CConstraintModel@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ @ 0x180101DD4 (-RemoveAll@-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ.c)
 *     ?GetStartPosition@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x1801601E0 (-GetStartPosition@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_Res.c)
 */

__int64 __fastcall CConstraintModel::CleanResourceConsumptionMap(__int64 a1, __int64 a2)
{
  __int64 StartPosition; // rbx
  void *v4; // rdi
  __int64 v5; // rdx

  StartPosition = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,_ResourceValue,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<_ResourceValue>>::GetStartPosition(a2);
  if ( StartPosition )
  {
    while ( 1 )
    {
LABEL_2:
      v4 = *(void **)(StartPosition + 8);
      if ( *(_QWORD *)StartPosition )
        (***(void (__fastcall ****)(_QWORD, __int64))StartPosition)(*(_QWORD *)StartPosition, 1LL);
      if ( v4 )
      {
        ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::RemoveAll((__int64)v4);
        operator delete(v4);
      }
      if ( !*(_QWORD *)(StartPosition + 16) )
        break;
      StartPosition = *(_QWORD *)(StartPosition + 16);
    }
    LODWORD(v5) = *(_DWORD *)(StartPosition + 24) % *(_DWORD *)(a2 + 16);
    while ( 1 )
    {
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *(_DWORD *)(a2 + 16) )
        break;
      StartPosition = *(_QWORD *)(*(_QWORD *)a2 + 8 * v5);
      if ( StartPosition )
        goto LABEL_2;
    }
  }
  return ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::RemoveAll(a2);
}
