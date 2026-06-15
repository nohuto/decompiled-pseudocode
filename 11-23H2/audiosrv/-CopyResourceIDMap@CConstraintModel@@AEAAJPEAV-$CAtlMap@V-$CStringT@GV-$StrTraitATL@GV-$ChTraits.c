/*
 * XREFs of ?CopyResourceIDMap@CConstraintModel@@AEAAJPEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@0@Z @ 0x18015FB10
 * Callers:
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x18005C0D4 (-Initialize@CConstraintModel@@QEAAJXZ.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x180160190 (-GetStartPosition@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_Res.c)
 *     ?SetAt@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@QEAAPEAU__POSITION@@PEBGAEBU_ResourceValue@@@Z @ 0x180160B28 (-SetAt@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@.c)
 */

__int64 __fastcall CConstraintModel::CopyResourceIDMap(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  int v5; // edi
  __int64 StartPosition; // rax
  __int64 v7; // rbx
  __int64 v9; // rdx
  ATL::CAtlException *v11; // rbx
  ATL::CAtlException *v12; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13[4]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v18; // [rsp+88h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v5 = 0;
  StartPosition = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,_ResourceValue,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<_ResourceValue>>::GetStartPosition(a2);
LABEL_2:
  v7 = StartPosition;
  while ( 1 )
  {
    v18 = v7;
    if ( !v7 || v5 < 0 )
      return (unsigned int)v5;
    try
    {
      v13[0] = *(_OWORD *)(v7 + 8);
      v5 = 0;
      ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,_ResourceValue,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<_ResourceValue>>::SetAt(
        v3,
        *(_QWORD *)v7,
        v13);
    }
    catch ( ATL::CAtlException *v12 )
    {
      v11 = v12;
      if ( *(_DWORD *)v12 == -1073741571 )
        _o__resetstkoflw();
      v3 = a3;
      v4 = a2;
      v5 = *(_DWORD *)v11;
      v7 = v18;
    }
    StartPosition = *(_QWORD *)(v7 + 24);
    if ( StartPosition )
      goto LABEL_2;
    LODWORD(v9) = *(_DWORD *)(v7 + 32) % *(_DWORD *)(v4 + 16);
    do
    {
      v9 = (unsigned int)(v9 + 1);
      v7 = 0LL;
      if ( (unsigned int)v9 >= *(_DWORD *)(v4 + 16) )
        break;
      v7 = *(_QWORD *)(*(_QWORD *)v4 + 8 * v9);
    }
    while ( !v7 );
  }
}
