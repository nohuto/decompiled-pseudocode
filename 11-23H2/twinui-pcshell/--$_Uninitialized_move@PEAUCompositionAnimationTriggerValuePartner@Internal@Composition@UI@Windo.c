/*
 * XREFs of ??$_Uninitialized_move@PEAUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@YAPEAUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@QEAU123456@0PEAU123456@AEAV?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@0@@Z @ 0x18054BA4C
 * Callers:
 *     ??$_Emplace_reallocate@AEBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@QEAAPEAUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@QEAU234567@AEBU234567@@Z @ 0x18054B7C8 (--$_Emplace_reallocate@AEBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windo.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@YAXPEAUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@QEAU123456@AEAV?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@0@@Z @ 0x18054B790 (--$_Destroy_range@V-$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@.c)
 */

winrt::Windows::Internal::Shell::RegistrationData *__fastcall std::_Uninitialized_move<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner *>(
        __int64 *a1,
        __int64 *a2,
        winrt::Windows::Internal::Shell::RegistrationData *a3)
{
  __int64 v4; // r8

  while ( a1 != a2 )
  {
    v4 = *a1;
    *a1 = 0LL;
    *(_QWORD *)a3 = v4;
    a3 = (winrt::Windows::Internal::Shell::RegistrationData *)((char *)a3 + 8);
    ++a1;
  }
  std::_Destroy_range<std::allocator<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>(
    a3,
    a3);
  return a3;
}
