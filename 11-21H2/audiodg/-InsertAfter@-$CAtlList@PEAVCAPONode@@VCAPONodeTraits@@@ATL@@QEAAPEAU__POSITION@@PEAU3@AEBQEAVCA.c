/*
 * XREFs of ?InsertAfter@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCAPONode@@@Z @ 0x14008226C
 * Callers:
 *     ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x14000CFA0 (-ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z.c)
 * Callees:
 *     ?NewNode@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCAPONode@@PEAV312@1@Z @ 0x140068CA8 (-NewNode@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCAPONode@@PEAV3.c)
 *     ?AddTail@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z @ 0x140081A38 (-AddTail@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z.c)
 */

__int64 *__fastcall ATL::CAtlList<CAPONode *,CAPONodeTraits>::InsertAfter(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *result; // rax

  if ( !a2 )
    return ATL::CAtlList<CAPONode *,CAPONodeTraits>::AddTail((__int64 **)a1, a3);
  result = ATL::CAtlList<CAPONode *,CAPONodeTraits>::NewNode(a1, a3, (__int64)a2, *a2);
  if ( *a2 )
    *(_QWORD *)(*a2 + 8) = result;
  else
    *(_QWORD *)(a1 + 8) = result;
  *a2 = (__int64)result;
  return result;
}
