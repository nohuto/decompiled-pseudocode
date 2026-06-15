/*
 * XREFs of ?Find@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCAPONode@@PEAU3@@Z @ 0x1400201C4
 * Callers:
 *     ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x14000F760 (-ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z.c)
 *     ?DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z @ 0x140020030 (-DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z.c)
 *     sub_1400403E4 @ 0x1400403E4 (sub_1400403E4.c)
 *     wil::details::lambda_call__lambda_fbdce4dee2e6b7f17b380108274a8644___::_lambda_call__lambda_fbdce4dee2e6b7f17b380108274a8644___ @ 0x14008EC04 (wil--details--lambda_call__lambda_fbdce4dee2e6b7f17b380108274a8644___--_lambda_call__lambda_fbdc.c)
 *     ?CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14008EE60 (-CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ATL::CAtlList<CAPONode *,CAPONodeTraits>::Find(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r8

  v2 = (_QWORD *)*a1;
  if ( !*a1 )
    return 0LL;
  while ( *(_QWORD *)(v2[2] + 8LL) != *(_QWORD *)(*(_QWORD *)a2 + 8LL) )
  {
    v2 = (_QWORD *)*v2;
    if ( !v2 )
      return 0LL;
  }
  return v2;
}
