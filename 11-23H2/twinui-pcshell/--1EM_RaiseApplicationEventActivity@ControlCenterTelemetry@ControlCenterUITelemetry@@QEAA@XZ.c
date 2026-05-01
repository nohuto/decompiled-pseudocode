/*
 * XREFs of ??1EM_RaiseApplicationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041DF64
 * Callers:
 *     ?RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180422598 (-RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     _CControlCenterExperienceManager::RaisePropertyChangedEvent_::_1_::dtor$0 @ 0x18042278D (_CControlCenterExperienceManager--RaisePropertyChangedEvent_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18041EA48 (-Destroy@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 */

void __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseApplicationEventActivity::~EM_RaiseApplicationEventActivity(
        ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseApplicationEventActivity *this)
{
  *(_QWORD *)this = &ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseApplicationEventActivity::`vftable';
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
