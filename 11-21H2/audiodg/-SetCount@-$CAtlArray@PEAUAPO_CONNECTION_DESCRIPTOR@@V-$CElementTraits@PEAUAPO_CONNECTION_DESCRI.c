/*
 * XREFs of ?SetCount@?$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V?$CElementTraits@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x1400825B0
 * Callers:
 *     ?InsertAt@?$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V?$CElementTraits@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@@ATL@@QEAAX_KAEBQEAUAPO_CONNECTION_DESCRIPTOR@@0@Z @ 0x14000D590 (-InsertAt@-$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V-$CElementTraits@PEAUAPO_CONNECTION_DESCRI.c)
 *     _ATL::CAtlArray_APO_CONNECTION_DESCRIPTOR___ATL::CElementTraits_APO_CONNECTION_DESCRIPTOR_____::InsertAt_::_1_::catch$0 @ 0x140037710 (_ATL--CAtlArray_APO_CONNECTION_DESCRIPTOR___ATL--CElementTraits_APO_CONNECTION_DESCRIPTOR_____--.c)
 * Callees:
 *     ?CallConstructors@?$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V?$CElementTraits@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@@ATL@@CAXPEAPEAUAPO_CONNECTION_DESCRIPTOR@@_K@Z @ 0x14000D6D8 (-CallConstructors@-$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V-$CElementTraits@PEAUAPO_CONNECTIO.c)
 *     ?GrowBuffer@?$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V?$CElementTraits@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@@ATL@@AEAA_N_K@Z @ 0x140082150 (-GrowBuffer@-$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V-$CElementTraits@PEAUAPO_CONNECTION_DESC.c)
 */

char __fastcall ATL::CAtlArray<APO_CONNECTION_DESCRIPTOR *,ATL::CElementTraits<APO_CONNECTION_DESCRIPTOR *>>::SetCount(
        __int64 a1,
        size_t a2)
{
  size_t v2; // rbx
  char result; // al

  v2 = 0LL;
  if ( !a2 )
  {
    if ( *(_QWORD *)a1 )
    {
      free(*(void **)a1);
      *(_QWORD *)a1 = 0LL;
    }
    *(_QWORD *)(a1 + 16) = 0LL;
    goto LABEL_9;
  }
  if ( a2 <= *(_QWORD *)(a1 + 16) )
  {
    if ( a2 <= *(_QWORD *)(a1 + 8) )
    {
LABEL_8:
      v2 = a2;
LABEL_9:
      *(_QWORD *)(a1 + 8) = v2;
      return 1;
    }
LABEL_7:
    ATL::CAtlArray<APO_CONNECTION_DESCRIPTOR *,ATL::CElementTraits<APO_CONNECTION_DESCRIPTOR *>>::CallConstructors();
    goto LABEL_8;
  }
  result = ATL::CAtlArray<APO_CONNECTION_DESCRIPTOR *,ATL::CElementTraits<APO_CONNECTION_DESCRIPTOR *>>::GrowBuffer(
             a1,
             a2);
  if ( result )
    goto LABEL_7;
  return result;
}
