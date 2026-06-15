/*
 * XREFs of ?AddHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z @ 0x140068A98
 * Callers:
 *     ?DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z @ 0x14000C9F0 (-DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z.c)
 *     ?CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x140081B40 (-CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 *     ?InsertBefore@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCAPONode@@@Z @ 0x1400822C4 (-InsertBefore@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVC.c)
 * Callees:
 *     ?NewNode@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCAPONode@@PEAV312@1@Z @ 0x140068CA8 (-NewNode@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCAPONode@@PEAV3.c)
 */

__int64 __fastcall ATL::CAtlList<CAPONode *,CAPONodeTraits>::AddHead(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  result = ATL::CAtlList<CAPONode *,CAPONodeTraits>::NewNode(a1, a2, 0LL, *a1);
  if ( *a1 )
    *(_QWORD *)(*a1 + 8) = result;
  else
    a1[1] = result;
  *a1 = result;
  return result;
}
