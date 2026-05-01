/*
 * XREFs of ??1EM_PositionViewActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x180435574
 * Callers:
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x180438748 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     _CToastCenterExperienceManager::PositionView_::_1_::dtor$0 @ 0x180438E6F (_CToastCenterExperienceManager--PositionView_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180056B90 (-Destroy@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall ToastCenterTelemetry::EM_PositionViewActivity::~EM_PositionViewActivity(
        ToastCenterTelemetry::EM_PositionViewActivity *this)
{
  *(_QWORD *)this = &ToastCenterTelemetry::EM_PositionViewActivity::`vftable';
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
