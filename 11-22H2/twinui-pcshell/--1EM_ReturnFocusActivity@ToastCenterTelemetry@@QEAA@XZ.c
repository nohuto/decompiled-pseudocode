/*
 * XREFs of ??1EM_ReturnFocusActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1804355F8
 * Callers:
 *     ?ReturnFocus@CToastCenterExperienceManager@@AEAAJXZ @ 0x18043970C (-ReturnFocus@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     _CToastCenterExperienceManager::ReturnFocus_::_1_::dtor$0 @ 0x1804398D0 (_CToastCenterExperienceManager--ReturnFocus_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180056B90 (-Destroy@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall ToastCenterTelemetry::EM_ReturnFocusActivity::~EM_ReturnFocusActivity(
        ToastCenterTelemetry::EM_ReturnFocusActivity *this)
{
  *(_QWORD *)this = &ToastCenterTelemetry::EM_ReturnFocusActivity::`vftable';
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
