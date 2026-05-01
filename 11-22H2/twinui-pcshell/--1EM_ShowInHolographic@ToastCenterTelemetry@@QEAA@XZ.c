/*
 * XREFs of ??1EM_ShowInHolographic@ToastCenterTelemetry@@QEAA@XZ @ 0x180435650
 * Callers:
 *     ?ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x180439DCC (-ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     _CToastCenterExperienceManager::ShowInHolographic_::_1_::dtor$0 @ 0x180439F70 (_CToastCenterExperienceManager--ShowInHolographic_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180435C6C (-Destroy@-$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall ToastCenterTelemetry::EM_ShowInHolographic::~EM_ShowInHolographic(
        ToastCenterTelemetry::EM_ShowInHolographic *this)
{
  *(_QWORD *)this = &ToastCenterTelemetry::EM_ShowInHolographic::`vftable';
  wil::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
