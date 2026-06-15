/*
 * XREFs of ?InsertBefore@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCAPONode@@@Z @ 0x1400822C4
 * Callers:
 *     ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x14000CFA0 (-ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z.c)
 * Callees:
 *     ?AddHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z @ 0x140068A98 (-AddHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCAPONode@@PEAV312@1@Z @ 0x140068CA8 (-NewNode@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCAPONode@@PEAV3.c)
 */

__int64 *__fastcall ATL::CAtlList<CAPONode *,CAPONodeTraits>::InsertBefore(__int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 *result; // rax
  __int64 **v6; // rcx

  if ( !a2 )
    return (__int64 *)ATL::CAtlList<CAPONode *,CAPONodeTraits>::AddHead(a1, (__int64)a3);
  result = ATL::CAtlList<CAPONode *,CAPONodeTraits>::NewNode((__int64)a1, a3, *(_QWORD *)(a2 + 8), a2);
  v6 = *(__int64 ***)(a2 + 8);
  if ( v6 )
    *v6 = result;
  else
    *a1 = (__int64)result;
  *(_QWORD *)(a2 + 8) = result;
  return result;
}
