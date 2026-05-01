/*
 * XREFs of ??1UndockedSearchAppExperienceManager_ResetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1800504E4
 * Callers:
 *     ?ResetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@@Z @ 0x180050350 (-ResetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@@Z.c)
 *     _lambda_224ca2662a1dba27bb7ec196acbc4aa2_::__lambda_224ca2662a1dba27bb7ec196acbc4aa2_ @ 0x1801E8600 (_lambda_224ca2662a1dba27bb7ec196acbc4aa2_--__lambda_224ca2662a1dba27bb7ec196acbc4aa2_.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_224ca2662a1dba27bb7ec196acbc4aa2___::_CTaskWrapper__lambda_224ca2662a1dba27bb7ec196acbc4aa2___ @ 0x1801E872C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_224ca2662a1dba27bb7ec196acbc4aa2___--_CTask.c)
 *     _lambda_224ca2662a1dba27bb7ec196acbc4aa2_::operator() @ 0x1801E8FDC (_lambda_224ca2662a1dba27bb7ec196acbc4aa2_--operator().c)
 *     _CUndockedSearchAppExperienceManagerConfig::ResetWindowRegionAsync_::_1_::dtor$0 @ 0x1802BFA79 (_CUndockedSearchAppExperienceManagerConfig--ResetWindowRegionAsync_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800BB118 (-Destroy@-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn::~UndockedSearchAppExperienceManager_ResetWindowRgn(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn *this)
{
  *(_QWORD *)this = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn::`vftable';
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
}
