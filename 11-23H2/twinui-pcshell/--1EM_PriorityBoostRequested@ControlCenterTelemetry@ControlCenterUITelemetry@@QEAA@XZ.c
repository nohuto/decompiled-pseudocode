/*
 * XREFs of ??1EM_PriorityBoostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041DF0C
 * Callers:
 *     ?OnPriorityBoostRequested@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1802D42D0 (-OnPriorityBoostRequested@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@.c)
 *     _CControlCenterExperienceManager::OnPriorityBoostRequested_::_1_::dtor$0 @ 0x1802D4371 (_CControlCenterExperienceManager--OnPriorityBoostRequested_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18041EA48 (-Destroy@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 */

void __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::EM_PriorityBoostRequested::~EM_PriorityBoostRequested(
        ControlCenterUITelemetry::ControlCenterTelemetry::EM_PriorityBoostRequested *this)
{
  *(_QWORD *)this = &ControlCenterUITelemetry::ControlCenterTelemetry::EM_PriorityBoostRequested::`vftable';
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
