/*
 * XREFs of ??1WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18000BBE8
 * Callers:
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18000BC14 (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     _CSingleViewShellExperience::WaitForWindowReadyForPresentation_::_1_::dtor$0 @ 0x180212DE2 (_CSingleViewShellExperience--WaitForWindowReadyForPresentation_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180074D30 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflec.c)
 */

void __fastcall SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::~WaitForWindowReadyForPresentation(
        SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
}
