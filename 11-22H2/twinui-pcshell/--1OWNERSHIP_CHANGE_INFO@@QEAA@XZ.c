/*
 * XREFs of ??1OWNERSHIP_CHANGE_INFO@@QEAA@XZ @ 0x180396280
 * Callers:
 *     _CApplicationManager::_HandleWindowChangedOwner_::_1_::dtor$0 @ 0x1802BF0BC (_CApplicationManager--_HandleWindowChangedOwner_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleWindowBecameOwned_::_1_::dtor$0 @ 0x1802BFD2C (_CApplicationManager--_HandleWindowBecameOwned_--_1_--dtor$0.c)
 *     _CImmersiveWindowManager::Set_::_1_::dtor$1 @ 0x1802C4B6E (_CImmersiveWindowManager--Set_--_1_--dtor$1.c)
 *     _CApplicationManager::GetRunningApplicationsFromPackageId_::_1_::dtor$2 @ 0x18039BE10 (_CApplicationManager--GetRunningApplicationsFromPackageId_--_1_--dtor$2.c)
 *     _CApplicationManager::_HandleWindowBecameUnowned_::_1_::dtor$0 @ 0x1803A36C2 (_CApplicationManager--_HandleWindowBecameUnowned_--_1_--dtor$0.c)
 *     _WindowingEnvironmentSettings::AddWindowingEnvironmentSettings_::_1_::dtor$0 @ 0x1804BE0D2 (_WindowingEnvironmentSettings--AddWindowingEnvironmentSettings_--_1_--dtor$0.c)
 *     _WindowingEnvironmentSettings::AddWindowingEnvironmentSettings_::_1_::dtor$1 @ 0x1804BE0DE (_WindowingEnvironmentSettings--AddWindowingEnvironmentSettings_--_1_--dtor$1.c)
 *     _UwpWindowingEnvironmentSettings::AddWindowingEnvironmentSettings_::_1_::dtor$0 @ 0x1804CFC22 (_UwpWindowingEnvironmentSettings--AddWindowingEnvironmentSettings_--_1_--dtor$0.c)
 *     _UwpWindowingEnvironmentSettings::AddWindowingEnvironmentSettings_::_1_::dtor$1 @ 0x1804CFC2E (_UwpWindowingEnvironmentSettings--AddWindowingEnvironmentSettings_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall OWNERSHIP_CHANGE_INFO::~OWNERSHIP_CHANGE_INFO(OWNERSHIP_CHANGE_INFO *this)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 2);
}
