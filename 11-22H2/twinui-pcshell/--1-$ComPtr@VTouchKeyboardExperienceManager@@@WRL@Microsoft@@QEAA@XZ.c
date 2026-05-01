/*
 * XREFs of ??1?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18050BFDC
 * Callers:
 *     _TouchKeyboardExperienceManagerCF::CreateInstance_::_1_::dtor$0 @ 0x1802BD553 (_TouchKeyboardExperienceManagerCF--CreateInstance_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_TouchKeyboardExperienceManager_TouchKeyboardExperienceManager__::_1_::dtor$2 @ 0x1802BD588 (_Microsoft--WRL--Details--MakeAndInitialize_TouchKeyboardExperienceManager_TouchKey_ea_1802BD588.c)
 *     _TouchKeyboardExperienceManager::AnimationGapTimerCallback_::_1_::dtor$0 @ 0x18050E330 (_TouchKeyboardExperienceManager--AnimationGapTimerCallback_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::RetryGettingInputAppIdTimerCallback_::_1_::dtor$0 @ 0x180515D0D (_TouchKeyboardExperienceManager--RetryGettingInputAppIdTimerCallback_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::SizeOrModeChangeFadeOutAnimationTimerCallback_::_1_::dtor$1 @ 0x18051704B (_TouchKeyboardExperienceManager--SizeOrModeChangeFadeOutAnimationTimerCallback_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::~ComPtr<TouchKeyboardExperienceManager>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalRelease(a1);
}
