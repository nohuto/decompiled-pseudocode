/*
 * XREFs of ??1ExternalDragHandoff@MultitaskingViewTelemetry@@QEAA@XZ @ 0x180576C3C
 * Callers:
 *     ?_StartTabletModeWindowArrangement@CMultitaskingViewControllerBase@@IEAAJPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z @ 0x180577AA0 (-_StartTabletModeWindowArrangement@CMultitaskingViewControllerBase@@IEAAJPEAUISwitchItem@@PEAUIE.c)
 *     _CMultitaskingViewControllerBase::_StartTabletModeWindowArrangement_::_1_::dtor$0 @ 0x180577DAE (_CMultitaskingViewControllerBase--_StartTabletModeWindowArrangement_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801101BC (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall MultitaskingViewTelemetry::ExternalDragHandoff::~ExternalDragHandoff(
        MultitaskingViewTelemetry::ExternalDragHandoff *this)
{
  *(_QWORD *)this = &MultitaskingViewTelemetry::ExternalDragHandoff::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
