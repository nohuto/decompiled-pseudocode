/*
 * XREFs of ??1OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18000D8A8
 * Callers:
 *     ?OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x18000D7A0 (-OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowSta.c)
 *     _CSingleViewShellExperience::OnClientWindowReadyForPresentationChanged_::_1_::dtor$0 @ 0x180212ED6 (_CSingleViewShellExperience--OnClientWindowReadyForPresentationChanged_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180074D30 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflec.c)
 */

void __fastcall SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed::~OnClientWindowReadinessProcessed(
        SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
}
