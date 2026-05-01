/*
 * XREFs of ??1OnViewVisibilityRevokedChangedBase@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1802EBC1C
 * Callers:
 *     ?OnViewVisibilityRevokedChangedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x1807479CC (-OnViewVisibilityRevokedChangedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 *     _CSingleViewShellExperience::OnViewVisibilityRevokedChangedBase_::_1_::dtor$0 @ 0x180747ACB (_CSingleViewShellExperience--OnViewVisibilityRevokedChangedBase_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B9164 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 */

void __fastcall SingleViewExperienceTelemetry::OnViewVisibilityRevokedChangedBase::~OnViewVisibilityRevokedChangedBase(
        SingleViewExperienceTelemetry::OnViewVisibilityRevokedChangedBase *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::OnViewVisibilityRevokedChangedBase::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
