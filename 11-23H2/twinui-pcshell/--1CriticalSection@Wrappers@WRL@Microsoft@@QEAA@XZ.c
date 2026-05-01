/*
 * XREFs of ??1CriticalSection@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1801BF0C4
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::InputSwitchingManager_::_1_::dtor$1 @ 0x1802B491E (_winrt--Windows--Internal--Shell--implementation--InputSwitchingManager--InputSwitchingManager_-.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$12 @ 0x1802B6C38 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$12.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$17 @ 0x1802B6CB5 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$17.c)
 *     _CMultitaskingViewManager::CMultitaskingViewManager_::_1_::dtor$1 @ 0x1802BC266 (_CMultitaskingViewManager--CMultitaskingViewManager_--_1_--dtor$1.c)
 *     _CDesktopPositioner::CDesktopPositioner_::_1_::dtor$1 @ 0x1802BC64E (_CDesktopPositioner--CDesktopPositioner_--_1_--dtor$1.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$16 @ 0x1802C50A9 (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$16.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Microsoft::WRL::Wrappers::CriticalSection::~CriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
