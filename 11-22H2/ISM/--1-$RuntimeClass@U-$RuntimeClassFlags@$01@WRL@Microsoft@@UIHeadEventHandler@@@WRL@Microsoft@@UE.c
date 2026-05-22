/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIHeadEventHandler@@@WRL@Microsoft@@UEAA@XZ @ 0x1800ADE44
 * Callers:
 *     _GamepadInterceptionHelper::GamepadInterceptionHelper_::_1_::dtor$0 @ 0x180069F43 (_GamepadInterceptionHelper--GamepadInterceptionHelper_--_1_--dtor$0.c)
 *     _InputSiteHierarchyManager::InputSiteHierarchyManager_::_1_::dtor$0 @ 0x180080E72 (_InputSiteHierarchyManager--InputSiteHierarchyManager_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::Make_InputSite_gsl::span_InputSiteId__1__&_unsigned_long_&_InputSiteManager____::_1_::dtor$5 @ 0x180082630 (_Microsoft--WRL--Details--Make_InputSite_gsl--span_InputSiteId__1__-_unsigned_long__ea_180082630.c)
 *     _SpectrumListener::SpectrumListener_::_1_::dtor$0 @ 0x1800DF467 (_SpectrumListener--SpectrumListener_--_1_--dtor$0.c)
 *     _ShellGesturesProcessor::Context::Context_::_1_::dtor$0 @ 0x18017CA4A (_ShellGesturesProcessor--Context--Context_--_1_--dtor$0.c)
 *     _MagnifierProcessor::DeviceState::DeviceState_::_1_::dtor$0 @ 0x1801DB057 (_MagnifierProcessor--DeviceState--DeviceState_--_1_--dtor$0.c)
 *     _MagnifierProcessor::MagnifierProcessor_::_1_::dtor$0 @ 0x1801DB1BA (_MagnifierProcessor--MagnifierProcessor_--_1_--dtor$0.c)
 *     _VirtualHotKeyTracker::VirtualHotKeyTracker_::_1_::dtor$0 @ 0x1801DE0F2 (_VirtualHotKeyTracker--VirtualHotKeyTracker_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHeadEventHandler>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHeadEventHandler>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
}
