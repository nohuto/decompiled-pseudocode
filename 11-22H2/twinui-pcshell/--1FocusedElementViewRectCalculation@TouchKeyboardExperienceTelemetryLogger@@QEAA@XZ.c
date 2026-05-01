/*
 * XREFs of ??1FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180536828
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x180536860 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 *     _KeyboardHosting::ViewRectProvider::GetViewRectFromPositionAndSizeRequest_::_1_::dtor$0 @ 0x1805372B2 (_KeyboardHosting--ViewRectProvider--GetViewRectFromPositionAndSizeRequest_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802DACD4 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_T.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::~FocusedElementViewRectCalculation(
        TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
