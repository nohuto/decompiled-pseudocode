/*
 * XREFs of ?RemoveAt@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000EC34
 * Callers:
 *     ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x14000F760 (-ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z.c)
 *     ?ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z @ 0x14001FED0 (-ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z.c)
 *     ?DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z @ 0x140020030 (-DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z.c)
 *     sub_1400403E4 @ 0x1400403E4 (sub_1400403E4.c)
 *     wil::details::lambda_call__lambda_fbdce4dee2e6b7f17b380108274a8644___::_lambda_call__lambda_fbdce4dee2e6b7f17b380108274a8644___ @ 0x14008EC04 (wil--details--lambda_call__lambda_fbdce4dee2e6b7f17b380108274a8644___--_lambda_call__lambda_fbdc.c)
 *     ?CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14008EE60 (-CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B99C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAt(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // rax

  v2 = a1;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  if ( a2 != (_QWORD *)*a1 )
    a1 = (_QWORD *)a2[1];
  *a1 = *a2;
  v3 = a2[1];
  if ( a2 == (_QWORD *)v2[1] )
    v2[1] = v3;
  else
    *(_QWORD *)(*a2 + 8LL) = v3;
  return ATL::CAtlList<CAPONode *,CAPONodeTraits>::FreeNode(v2);
}
