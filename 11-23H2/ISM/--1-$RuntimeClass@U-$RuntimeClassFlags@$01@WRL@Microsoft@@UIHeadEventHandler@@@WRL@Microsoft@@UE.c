/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIHeadEventHandler@@@WRL@Microsoft@@UEAA@XZ @ 0x18009B900
 * Callers:
 *     _InputSiteHierarchyManager::InputSiteHierarchyManager_::_1_::dtor$0 @ 0x18006DBA5 (_InputSiteHierarchyManager--InputSiteHierarchyManager_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::Make_InputSite_gsl::span_InputSiteId__1__&_unsigned_long_&_InputSiteManager____::_1_::dtor$5 @ 0x18006EC40 (_Microsoft--WRL--Details--Make_InputSite_gsl--span_InputSiteId__1__-_unsigned_long__ea_18006EC40.c)
 *     _SpectrumListener::SpectrumListener_::_1_::dtor$0 @ 0x1800D02A7 (_SpectrumListener--SpectrumListener_--_1_--dtor$0.c)
 *     _ShellGesturesProcessor::Context::Context_::_1_::dtor$0 @ 0x18016E7CA (_ShellGesturesProcessor--Context--Context_--_1_--dtor$0.c)
 *     _MagnifierProcessor::DeviceState::DeviceState_::_1_::dtor$0 @ 0x1801CD7E7 (_MagnifierProcessor--DeviceState--DeviceState_--_1_--dtor$0.c)
 *     _MagnifierProcessor::MagnifierProcessor_::_1_::dtor$0 @ 0x1801CD94A (_MagnifierProcessor--MagnifierProcessor_--_1_--dtor$0.c)
 *     _VirtualHotKeyTracker::VirtualHotKeyTracker_::_1_::dtor$0 @ 0x1801D0882 (_VirtualHotKeyTracker--VirtualHotKeyTracker_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHeadEventHandler>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHeadEventHandler>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
}
