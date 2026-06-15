/*
 * XREFs of ?FindAPOInList@CAudioProcessor@@IEAAPEAVCAPONode@@AEAV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@PEAUIAudioProcessingObject@@AEAPEAU__POSITION@@@Z @ 0x14008205C
 * Callers:
 *     ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x14000CFA0 (-ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z.c)
 *     ?AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000E270 (-AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000E820 (-AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@AEAPEAU__POSITION@@@Z @ 0x140068C78 (-GetNext@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@AEAPEAU__POSITION@.c)
 */

__int64 __fastcall CAudioProcessor::FindAPOInList(__int64 a1, _QWORD *a2, __int64 a3, _QWORD **a4)
{
  _QWORD *v4; // rdi
  __int64 result; // rax

  v4 = (_QWORD *)*a2;
  for ( *a4 = (_QWORD *)*a2; ; v4 = *a4 )
  {
    if ( !v4 )
    {
      *a4 = 0LL;
      return 0LL;
    }
    result = *ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetNext(a1, a4);
    if ( *(_QWORD *)(result + 8) == a3 )
      break;
  }
  *a4 = v4;
  return result;
}
