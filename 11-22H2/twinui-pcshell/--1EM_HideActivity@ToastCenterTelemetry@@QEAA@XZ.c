/*
 * XREFs of ??1EM_HideActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x180056970
 * Callers:
 *     ?Hide@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800568DC (-Hide@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     _CToastCenterExperienceManager::Hide_::_1_::dtor$0 @ 0x1802BFFC2 (_CToastCenterExperienceManager--Hide_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180056B90 (-Destroy@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall ToastCenterTelemetry::EM_HideActivity::~EM_HideActivity(ToastCenterTelemetry::EM_HideActivity *this)
{
  *(_QWORD *)this = &ToastCenterTelemetry::EM_HideActivity::`vftable';
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
