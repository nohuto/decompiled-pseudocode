/*
 * XREFs of IsQueryWin32SubsystemHostPresent @ 0x18018D45C
 * Callers:
 *     ?EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ @ 0x180062B98 (-EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ.c)
 *     ??0XamlLauncher@@QEAA@XZ @ 0x1800650F8 (--0XamlLauncher@@QEAA@XZ.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800B8C50 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800BDAC0 (-SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?ComputeMaskAndFeaturesForScenarios@ViewPresentationMediator@@CA?AUBehaviorMaskAndFeatures@1@W4WINDOW_MANAGEMENT_BEHAVIOR_SCENARIO@@@Z @ 0x18014E2EC (-ComputeMaskAndFeaturesForScenarios@ViewPresentationMediator@@CA-AUBehaviorMaskAndFeatures@1@W4W.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18018EEA0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsQueryWin32SubsystemHostPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1807B3238 == 1 )
    return 1;
  if ( dword_1807B3238 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"FH", &v1) < 0 )
    return 0;
  result = v1;
  dword_1807B3238 = 2 - (v1 != 0);
  return result;
}
