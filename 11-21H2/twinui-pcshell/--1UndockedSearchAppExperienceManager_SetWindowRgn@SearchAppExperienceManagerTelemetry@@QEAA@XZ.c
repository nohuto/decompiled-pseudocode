/*
 * XREFs of ??1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x18019BEE4
 * Callers:
 *     ?SetDrawingRegion@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@AEBUtagRECT@@1@Z @ 0x180023F40 (-SetDrawingRegion@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@AEBUtagRECT@@1@Z.c)
 *     _lambda_6e59436657fdc730ce46c13d2be9f9a3_::__lambda_6e59436657fdc730ce46c13d2be9f9a3_ @ 0x18019B8D8 (_lambda_6e59436657fdc730ce46c13d2be9f9a3_--__lambda_6e59436657fdc730ce46c13d2be9f9a3_.c)
 *     _lambda_b9b326c89cb8166a780ad4ef449f4933_::__lambda_b9b326c89cb8166a780ad4ef449f4933_ @ 0x18019B920 (_lambda_b9b326c89cb8166a780ad4ef449f4933_--__lambda_b9b326c89cb8166a780ad4ef449f4933_.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b9b326c89cb8166a780ad4ef449f4933___::_CTaskWrapper__lambda_b9b326c89cb8166a780ad4ef449f4933___ @ 0x18019BA7C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b9b326c89cb8166a780ad4ef449f4933___--_CTask.c)
 *     _lambda_6e59436657fdc730ce46c13d2be9f9a3_::operator() @ 0x18019C240 (_lambda_6e59436657fdc730ce46c13d2be9f9a3_--operator().c)
 *     _lambda_b9b326c89cb8166a780ad4ef449f4933_::operator() @ 0x18019C64C (_lambda_b9b326c89cb8166a780ad4ef449f4933_--operator().c)
 *     ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1801A10D4 (-SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@A.c)
 *     _CUndockedSearchAppExperienceManagerConfig::SetWindowRegionAsync_::_1_::dtor$0 @ 0x1801A1243 (_CUndockedSearchAppExperienceManagerConfig--SetWindowRegionAsync_--_1_--dtor$0.c)
 *     _CUndockedSearchAppExperienceManagerConfig::SetDrawingRegion_::_1_::dtor$0 @ 0x180214DCE (_CUndockedSearchAppExperienceManagerConfig--SetDrawingRegion_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800476A8 (-Destroy@-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::~UndockedSearchAppExperienceManager_SetWindowRgn(
        volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::`vftable';
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
}
