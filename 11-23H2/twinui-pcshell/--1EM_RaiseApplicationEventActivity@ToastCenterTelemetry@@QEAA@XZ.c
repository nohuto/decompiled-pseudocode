/*
 * XREFs of ??1EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1804355A0
 * Callers:
 *     _lambda_527ad20aa16d56b88e42a79a9a93120f_::operator() @ 0x180435784 (_lambda_527ad20aa16d56b88e42a79a9a93120f_--operator().c)
 *     __lambda_527ad20aa16d56b88e42a79a9a93120f_::operator()_::_1_::dtor$0 @ 0x180435887 (__lambda_527ad20aa16d56b88e42a79a9a93120f_--operator()_--_1_--dtor$0.c)
 *     ?RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180438FA8 (-RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     _CToastCenterExperienceManager::RaisePropertyChangedEvent_::_1_::dtor$0 @ 0x180439193 (_CToastCenterExperienceManager--RaisePropertyChangedEvent_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180056B90 (-Destroy@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall ToastCenterTelemetry::EM_RaiseApplicationEventActivity::~EM_RaiseApplicationEventActivity(
        ToastCenterTelemetry::EM_RaiseApplicationEventActivity *this)
{
  *(_QWORD *)this = &ToastCenterTelemetry::EM_RaiseApplicationEventActivity::`vftable';
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
