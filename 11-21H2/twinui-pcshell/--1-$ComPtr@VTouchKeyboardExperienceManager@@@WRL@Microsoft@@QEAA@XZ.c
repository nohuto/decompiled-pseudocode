/*
 * XREFs of ??1?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18045AB8C
 * Callers:
 *     _TouchKeyboardExperienceManagerCF::CreateInstance_::_1_::dtor$0 @ 0x180223488 (_TouchKeyboardExperienceManagerCF--CreateInstance_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_TouchKeyboardExperienceManager_TouchKeyboardExperienceManager__::_1_::dtor$2 @ 0x1802234BD (_Microsoft--WRL--Details--MakeAndInitialize_TouchKeyboardExperienceManager_TouchKey_ea_1802234BD.c)
 *     _TouchKeyboardExperienceManager::AnimationGapTimerCallback_::_1_::dtor$0 @ 0x18045C79E (_TouchKeyboardExperienceManager--AnimationGapTimerCallback_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::RetryGettingInputAppIdTimerCallback_::_1_::dtor$0 @ 0x18046484D (_TouchKeyboardExperienceManager--RetryGettingInputAppIdTimerCallback_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::SizeOrModeChangeFadeOutAnimationTimerCallback_::_1_::dtor$0 @ 0x1804652C6 (_TouchKeyboardExperienceManager--SizeOrModeChangeFadeOutAnimationTimerCallback_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::~ComPtr<TouchKeyboardExperienceManager>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalRelease(a1);
}
