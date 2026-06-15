/*
 * XREFs of ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x140080D80
 * Callers:
 *     _Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged_::_1_::dtor$10 @ 0x140089357 (_Windows--Media--Devices--AudioDeviceModulesManager--OnModuleChanged_--_1_--dtor$10.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HString::~HString(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
}
