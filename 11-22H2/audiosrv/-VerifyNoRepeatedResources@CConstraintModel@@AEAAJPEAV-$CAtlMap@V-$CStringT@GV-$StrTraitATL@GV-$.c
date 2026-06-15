/*
 * XREFs of ?VerifyNoRepeatedResources@CConstraintModel@@AEAAJPEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@0@Z @ 0x180160D30
 * Callers:
 *     ?VerifyNoRepeatedResourcesOrConsumers@CConstraintModel@@AEAAJPEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@0PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@3@1@Z @ 0x180160DD0 (-VerifyNoRepeatedResourcesOrConsumers@CConstraintModel@@AEAAJPEAV-$CAtlMap@V-$CStringT@GV-$StrTr.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x1801601E0 (-GetStartPosition@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_Res.c)
 *     ?Lookup@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@QEBA_NPEBGAEAU_ResourceValue@@@Z @ 0x180160210 (-Lookup@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue.c)
 */

__int64 __fastcall CConstraintModel::VerifyNoRepeatedResources(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 StartPosition; // rdi
  BOOL v7; // r10d
  __int64 v8; // rdx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  StartPosition = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,_ResourceValue,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<_ResourceValue>>::GetStartPosition(a3);
  if ( StartPosition )
  {
    while ( 1 )
    {
LABEL_2:
      if ( v7 )
        return (unsigned int)-2147024713;
      v7 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,_ResourceValue,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<_ResourceValue>>::Lookup(
             a2,
             *(unsigned __int16 **)StartPosition,
             &v10) != 0;
      if ( !*(_QWORD *)(StartPosition + 24) )
        break;
      StartPosition = *(_QWORD *)(StartPosition + 24);
    }
    LODWORD(v8) = *(_DWORD *)(StartPosition + 32) % *(_DWORD *)(a3 + 16);
    while ( 1 )
    {
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= *(_DWORD *)(a3 + 16) )
        break;
      StartPosition = *(_QWORD *)(*(_QWORD *)a3 + 8 * v8);
      if ( StartPosition )
        goto LABEL_2;
    }
    if ( v7 )
      return (unsigned int)-2147024713;
  }
  return v3;
}
