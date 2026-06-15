/*
 * XREFs of ?VerifyNoRepeatedResources@CConstraintModel@@AEAAJPEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@0@Z @ 0x180159930
 * Callers:
 *     ?VerifyNoRepeatedResourcesOrConsumers@CConstraintModel@@AEAAJPEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@0PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@3@1@Z @ 0x1801599D8 (-VerifyNoRepeatedResourcesOrConsumers@CConstraintModel@@AEAAJPEAV-$CAtlMap@V-$CStringT@GV-$StrTr.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x180158E08 (-GetStartPosition@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_Res.c)
 *     ?Lookup@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@QEBA_NPEBGAEAU_ResourceValue@@@Z @ 0x180158E38 (-Lookup@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue.c)
 */

__int64 __fastcall CConstraintModel::VerifyNoRepeatedResources(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 StartPosition; // rdi
  BOOL v7; // r10d
  __int64 v9; // rdx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  StartPosition = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,_ResourceValue,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<_ResourceValue>>::GetStartPosition(a3);
  if ( StartPosition )
  {
LABEL_2:
    while ( !v7 )
    {
      v7 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,_ResourceValue,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<_ResourceValue>>::Lookup(
             a2,
             *(unsigned __int16 **)StartPosition,
             &v10) != 0;
      if ( *(_QWORD *)(StartPosition + 24) )
      {
        StartPosition = *(_QWORD *)(StartPosition + 24);
      }
      else
      {
        LODWORD(v9) = *(_DWORD *)(StartPosition + 32) % *(_DWORD *)(a3 + 16);
        while ( 1 )
        {
          v9 = (unsigned int)(v9 + 1);
          StartPosition = 0LL;
          if ( (unsigned int)v9 >= *(_DWORD *)(a3 + 16) )
            break;
          StartPosition = *(_QWORD *)(*(_QWORD *)a3 + 8 * v9);
          if ( StartPosition )
            goto LABEL_2;
        }
      }
      if ( !StartPosition )
      {
        if ( !v7 )
          return v3;
        return (unsigned int)-2147024713;
      }
    }
    return (unsigned int)-2147024713;
  }
  return v3;
}
