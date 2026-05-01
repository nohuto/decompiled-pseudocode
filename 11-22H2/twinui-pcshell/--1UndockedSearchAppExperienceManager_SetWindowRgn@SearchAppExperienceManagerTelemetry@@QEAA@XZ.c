/*
 * XREFs of ??1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1800BB0EC
 * Callers:
 *     ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800B9030 (-SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@A.c)
 *     _lambda_0190d4b48233ee3d7e5c167dfa5e03d8_::__lambda_0190d4b48233ee3d7e5c167dfa5e03d8_ @ 0x1801E85F0 (_lambda_0190d4b48233ee3d7e5c167dfa5e03d8_--__lambda_0190d4b48233ee3d7e5c167dfa5e03d8_.c)
 *     _lambda_2b1190aa71c35694843c2dd3124163c4_::__lambda_2b1190aa71c35694843c2dd3124163c4_ @ 0x1801E8610 (_lambda_2b1190aa71c35694843c2dd3124163c4_--__lambda_2b1190aa71c35694843c2dd3124163c4_.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0190d4b48233ee3d7e5c167dfa5e03d8___::_CTaskWrapper__lambda_0190d4b48233ee3d7e5c167dfa5e03d8___ @ 0x1801E8704 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0190d4b48233ee3d7e5c167dfa5e03d8___--_CTask.c)
 *     _lambda_0190d4b48233ee3d7e5c167dfa5e03d8_::operator() @ 0x1801E8E4C (_lambda_0190d4b48233ee3d7e5c167dfa5e03d8_--operator().c)
 *     _lambda_2b1190aa71c35694843c2dd3124163c4_::operator() @ 0x1801E90D8 (_lambda_2b1190aa71c35694843c2dd3124163c4_--operator().c)
 *     _CUndockedSearchAppExperienceManagerConfig::SetWindowRegionAsync_::_1_::dtor$0 @ 0x1802B9A3E (_CUndockedSearchAppExperienceManagerConfig--SetWindowRegionAsync_--_1_--dtor$0.c)
 *     ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@1@Z @ 0x18046A530 (-SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@1.c)
 *     _CUndockedSearchAppExperienceManagerConfig::SetWindowRegionAsync_::_1_::dtor$0_0 @ 0x18046A607 (_CUndockedSearchAppExperienceManagerConfig--SetWindowRegionAsync_--_1_--dtor$0_0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800BB118 (-Destroy@-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::~UndockedSearchAppExperienceManager_SetWindowRgn(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *this)
{
  *(_QWORD *)this = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::`vftable';
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
