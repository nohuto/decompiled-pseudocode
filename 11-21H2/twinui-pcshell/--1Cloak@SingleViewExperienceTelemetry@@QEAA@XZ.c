/*
 * XREFs of ??1Cloak@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18002BA98
 * Callers:
 *     ?Cloak@CSingleViewShellExperience@@QEAAJXZ @ 0x18002B9A8 (-Cloak@CSingleViewShellExperience@@QEAAJXZ.c)
 *     _CSingleViewShellExperience::Cloak_::_1_::dtor$0 @ 0x18021578E (_CSingleViewShellExperience--Cloak_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180074D30 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflec.c)
 */

void __fastcall SingleViewExperienceTelemetry::Cloak::~Cloak(SingleViewExperienceTelemetry::Cloak *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::Cloak::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
}
