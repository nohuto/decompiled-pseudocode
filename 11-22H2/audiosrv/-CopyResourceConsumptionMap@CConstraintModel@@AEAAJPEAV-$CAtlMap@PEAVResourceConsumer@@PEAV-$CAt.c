/*
 * XREFs of ?CopyResourceConsumptionMap@CConstraintModel@@AEAAJPEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@0@Z @ 0x18015FA7C
 * Callers:
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x18005C0C4 (-Initialize@CConstraintModel@@QEAAJXZ.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x1801601E0 (-GetStartPosition@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_Res.c)
 *     ?SetAt@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEAAPEAU__POSITION@@AEBQEAVResourceConsumer@@AEBQEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@2@@Z @ 0x180160AD0 (-SetAt@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@.c)
 */

__int64 __fastcall CConstraintModel::CopyResourceConsumptionMap(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  int v5; // edi
  __int64 StartPosition; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  ATL::CAtlException *v10; // rbx
  ATL::CAtlException *v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h]
  __int64 v14; // [rsp+70h] [rbp+18h]
  __int64 v15; // [rsp+78h] [rbp+20h]

  v14 = a3;
  v13 = a2;
  v12 = a1;
  v3 = a3;
  v4 = a2;
  v5 = 0;
  StartPosition = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,_ResourceValue,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<_ResourceValue>>::GetStartPosition(a2);
LABEL_2:
  v7 = StartPosition;
  while ( 1 )
  {
    v15 = v7;
    if ( !v7 || v5 < 0 )
      return (unsigned int)v5;
    try
    {
      v12 = *(_QWORD *)(v7 + 8);
      v5 = 0;
      ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::SetAt(
        v3,
        v7,
        &v12);
    }
    catch ( ATL::CAtlException *v11 )
    {
      v10 = v11;
      if ( *(_DWORD *)v11 == -1073741571 )
        _o__resetstkoflw();
      LODWORD(v12) = *(_DWORD *)v10;
      v3 = v14;
      v4 = v13;
      v5 = v12;
      v7 = v15;
    }
    StartPosition = *(_QWORD *)(v7 + 16);
    if ( StartPosition )
      goto LABEL_2;
    LODWORD(v8) = *(_DWORD *)(v7 + 24) % *(_DWORD *)(v4 + 16);
    do
    {
      v8 = (unsigned int)(v8 + 1);
      v7 = 0LL;
      if ( (unsigned int)v8 >= *(_DWORD *)(v4 + 16) )
        break;
      v7 = *(_QWORD *)(*(_QWORD *)v4 + 8 * v8);
    }
    while ( !v7 );
  }
}
