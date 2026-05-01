/*
 * XREFs of ??1Cloak@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180056758
 * Callers:
 *     ?Cloak@CSingleViewShellExperience@@QEAAJXZ @ 0x180056668 (-Cloak@CSingleViewShellExperience@@QEAAJXZ.c)
 *     _CSingleViewShellExperience::Cloak_::_1_::dtor$0 @ 0x1802BFFB0 (_CSingleViewShellExperience--Cloak_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B959C (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflec.c)
 */

void __fastcall SingleViewExperienceTelemetry::Cloak::~Cloak(SingleViewExperienceTelemetry::Cloak *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::Cloak::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
}
