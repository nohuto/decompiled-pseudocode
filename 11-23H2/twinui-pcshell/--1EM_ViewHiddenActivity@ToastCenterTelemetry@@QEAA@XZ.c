/*
 * XREFs of ??1EM_ViewHiddenActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x180435700
 * Callers:
 *     ?OnViewHidden@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180438420 (-OnViewHidden@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CToastCenterExperienceManager::OnViewHidden_::_1_::dtor$0 @ 0x1804384A4 (_CToastCenterExperienceManager--OnViewHidden_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180056B90 (-Destroy@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall ToastCenterTelemetry::EM_ViewHiddenActivity::~EM_ViewHiddenActivity(
        ToastCenterTelemetry::EM_ViewHiddenActivity *this)
{
  *(_QWORD *)this = &ToastCenterTelemetry::EM_ViewHiddenActivity::`vftable';
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
