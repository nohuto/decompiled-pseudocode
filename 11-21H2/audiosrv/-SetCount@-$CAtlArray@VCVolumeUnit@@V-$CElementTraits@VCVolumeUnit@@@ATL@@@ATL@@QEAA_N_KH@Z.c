/*
 * XREFs of ?SetCount@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x180043494
 * Callers:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x180043090 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x180043300 (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     _ATL::CAtlArray_CVolumeUnit_ATL::CElementTraits_CVolumeUnit___::SetAtGrow_::_1_::catch$0 @ 0x18006D385 (_ATL--CAtlArray_CVolumeUnit_ATL--CElementTraits_CVolumeUnit___--SetAtGrow_--_1_--catch$0.c)
 * Callees:
 *     ?GrowBuffer@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@AEAA_N_K@Z @ 0x1800433A4 (-GrowBuffer@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@AEAA_N_K@Z.c)
 *     ?CallConstructors@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@CAXPEAVCVolumeUnit@@_K@Z @ 0x18004350C (-CallConstructors@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@CAXPEAVC.c)
 */

char __fastcall ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetCount(__int64 a1, size_t a2)
{
  size_t v2; // rdi
  size_t v5; // rcx

  v2 = 0LL;
  if ( !a2 )
  {
    if ( *(_QWORD *)a1 )
    {
      free(*(void **)a1);
      *(_QWORD *)a1 = 0LL;
    }
    *(_QWORD *)(a1 + 16) = 0LL;
    goto LABEL_7;
  }
  if ( a2 <= *(_QWORD *)(a1 + 16) )
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( a2 <= v5 )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::GrowBuffer(a1, a2) )
  {
    v5 = *(_QWORD *)(a1 + 8);
LABEL_5:
    ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::CallConstructors((CVolumeUnit *)(*(_QWORD *)a1
                                                                                                 + (v5 << 6)));
LABEL_6:
    v2 = a2;
LABEL_7:
    *(_QWORD *)(a1 + 8) = v2;
    return 1;
  }
  return 0;
}
