/*
 * XREFs of ?SetCount@?$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V?$CElementTraits@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x14000FC40
 * Callers:
 *     ?InsertAt@?$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V?$CElementTraits@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@@ATL@@QEAAX_KAEBQEAUAPO_CONNECTION_DESCRIPTOR@@0@Z @ 0x14000FB7C (-InsertAt@-$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V-$CElementTraits@PEAUAPO_CONNECTION_DESCRI.c)
 *     _ATL::CAtlArray_APO_CONNECTION_DESCRIPTOR___ATL::CElementTraits_APO_CONNECTION_DESCRIPTOR_____::InsertAt_::_1_::catch$0 @ 0x140035147 (_ATL--CAtlArray_APO_CONNECTION_DESCRIPTOR___ATL--CElementTraits_APO_CONNECTION_DESCRIPTOR_____--.c)
 * Callees:
 *     ?CallConstructors@?$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V?$CElementTraits@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@@ATL@@CAXPEAPEAUAPO_CONNECTION_DESCRIPTOR@@_K@Z @ 0x14000FCA0 (-CallConstructors@-$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V-$CElementTraits@PEAUAPO_CONNECTIO.c)
 *     ?GrowBuffer@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@AEAA_N_K@Z @ 0x14000FCB0 (-GrowBuffer@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@AEAA_N_K@Z.c)
 */

char __fastcall ATL::CAtlArray<APO_CONNECTION_DESCRIPTOR *,ATL::CElementTraits<APO_CONNECTION_DESCRIPTOR *>>::SetCount(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx

  v2 = 0LL;
  if ( !a2 )
  {
    if ( *(_QWORD *)a1 )
    {
      free(*(void **)a1);
      *(_QWORD *)a1 = 0LL;
    }
    *(_QWORD *)(a1 + 16) = 0LL;
    goto LABEL_6;
  }
  if ( a2 <= *(_QWORD *)(a1 + 16) )
  {
    if ( a2 <= *(_QWORD *)(a1 + 8) )
      goto LABEL_5;
    goto LABEL_4;
  }
  if ( (unsigned __int8)ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::GrowBuffer() )
  {
LABEL_4:
    ATL::CAtlArray<APO_CONNECTION_DESCRIPTOR *,ATL::CElementTraits<APO_CONNECTION_DESCRIPTOR *>>::CallConstructors();
LABEL_5:
    v2 = a2;
LABEL_6:
    *(_QWORD *)(a1 + 8) = v2;
    return 1;
  }
  return 0;
}
