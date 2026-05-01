/*
 * XREFs of ??1CriticalSection@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180181BE4
 * Callers:
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$12 @ 0x180217A6A (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$12.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$17 @ 0x180217AE7 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$17.c)
 *     _winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::InputSwitchingManager_::_1_::dtor$1 @ 0x18021C8A0 (_winrt--Windows--Internal--Shell--implementation--InputSwitchingManager--InputSwitchingManager_-.c)
 *     _CMultitaskingViewManager::CMultitaskingViewManager_::_1_::dtor$1 @ 0x18021EAD0 (_CMultitaskingViewManager--CMultitaskingViewManager_--_1_--dtor$1.c)
 *     _CDesktopPositioner::CDesktopPositioner_::_1_::dtor$1 @ 0x18021EDC1 (_CDesktopPositioner--CDesktopPositioner_--_1_--dtor$1.c)
 *     _TwinUI::Lighting::AssistantLightManager::AssistantLightManager_::_1_::dtor$0 @ 0x18021FC1D (_TwinUI--Lighting--AssistantLightManager--AssistantLightManager_--_1_--dtor$0.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$14 @ 0x18022175A (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$14.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Microsoft::WRL::Wrappers::CriticalSection::~CriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
