/*
 * XREFs of ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1802E00B0
 * Callers:
 *     _CApplicationViewManager::GetViewForAppUserModelId_::_1_::dtor$0 @ 0x180215998 (_CApplicationViewManager--GetViewForAppUserModelId_--_1_--dtor$0.c)
 *     _CApplicationViewManager::WindowOccludedChanged_::_1_::dtor$0 @ 0x180216430 (_CApplicationViewManager--WindowOccludedChanged_--_1_--dtor$0.c)
 *     _CApplicationViewManager::GetViewForApplication_::_1_::dtor$0 @ 0x1802187E0 (_CApplicationViewManager--GetViewForApplication_--_1_--dtor$0.c)
 *     _CApplicationManager::_AnalyzeShellNotification_::_1_::dtor$2 @ 0x1802189F0 (_CApplicationManager--_AnalyzeShellNotification_--_1_--dtor$2.c)
 *     _CImmersiveApp::GetUniqueId_::_1_::dtor$0 @ 0x1802190CB (_CImmersiveApp--GetUniqueId_--_1_--dtor$0.c)
 *     _CApplicationViewManager::GetViews_::_1_::dtor$1 @ 0x18021D366 (_CApplicationViewManager--GetViews_--_1_--dtor$1.c)
 *     _CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition_::_1_::dtor$2 @ 0x18021D9BD (_CApplicationManager--_HandleViewCreation_SynchronizeInitialPosition_--_1_--dtor$2.c)
 *     _CApplicationManager::GetApplicationByWindow_::_1_::dtor$0 @ 0x18021DB72 (_CApplicationManager--GetApplicationByWindow_--_1_--dtor$0.c)
 *     _CApplicationViewManager::GetApplicationViewsById_::_1_::dtor$1 @ 0x180220518 (_CApplicationViewManager--GetApplicationViewsById_--_1_--dtor$1.c)
 *     _CApplicationManager::GetAllApplicationsByAppID_::_1_::dtor$0 @ 0x1802E2F55 (_CApplicationManager--GetAllApplicationsByAppID_--_1_--dtor$0.c)
 *     _CApplicationManager::GetApplication_::_1_::dtor$0 @ 0x1802E30CE (_CApplicationManager--GetApplication_--_1_--dtor$0.c)
 *     _CApplicationManager::GetRunningApplicationsFromPackageId_::_1_::dtor$0 @ 0x1802E3F68 (_CApplicationManager--GetRunningApplicationsFromPackageId_--_1_--dtor$0.c)
 *     _CApplicationManager::HandleFrameWindowGhosted_::_1_::dtor$2 @ 0x1802E4776 (_CApplicationManager--HandleFrameWindowGhosted_--_1_--dtor$2.c)
 *     _CApplicationManager::QueryObjectForWindow_::_1_::dtor$0 @ 0x1802E67F3 (_CApplicationManager--QueryObjectForWindow_--_1_--dtor$0.c)
 *     _CImmersiveApp::IsApplicationWindowPresented_::_1_::dtor$0 @ 0x180306532 (_CImmersiveApp--IsApplicationWindowPresented_--_1_--dtor$0.c)
 *     _CImmersiveApp::ShouldShowBackButton_::_1_::dtor$0 @ 0x18030847C (_CImmersiveApp--ShouldShowBackButton_--_1_--dtor$0.c)
 *     __lambda_0965d95f79f373d2b304802bd170b353_::operator()_::_1_::dtor$0 @ 0x18030FDB3 (__lambda_0965d95f79f373d2b304802bd170b353_--operator()_--_1_--dtor$0.c)
 *     _CApplicationViewManager::GetViewsByZOrder_::_1_::dtor$1 @ 0x180310612 (_CApplicationViewManager--GetViewsByZOrder_--_1_--dtor$1.c)
 *     _CApplicationViewManager::HandleWindowReplaced_::_1_::dtor$0 @ 0x1803107AA (_CApplicationViewManager--HandleWindowReplaced_--_1_--dtor$0.c)
 *     _CApplicationViewManager::ProcessEntepriseIdChanged_::_1_::dtor$0 @ 0x180310973 (_CApplicationViewManager--ProcessEntepriseIdChanged_--_1_--dtor$0.c)
 *     _ApplicationViewManagerVisibilityDebouncer::GetViewForHwnd_::_1_::dtor$0 @ 0x1803113D3 (_ApplicationViewManagerVisibilityDebouncer--GetViewForHwnd_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoSRWSharedLock::~CAutoSRWSharedLock(RTL_SRWLOCK **this)
{
  RTL_SRWLOCK *v1; // rcx

  v1 = *this;
  if ( v1 )
    ReleaseSRWLockShared(v1);
}
