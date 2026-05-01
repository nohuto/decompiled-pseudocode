/*
 * XREFs of ?_Change_array@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@AEAAXQEAUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@_K1@Z @ 0x180550734
 * Callers:
 *     ??$_Emplace_reallocate@AEBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@QEAAPEAUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@QEAU234567@AEBU234567@@Z @ 0x18054B7C8 (--$_Emplace_reallocate@AEBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windo.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@YAXPEAUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@QEAU123456@AEAV?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@0@@Z @ 0x18054B790 (--$_Destroy_range@V-$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@.c)
 */

__int64 __fastcall std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  winrt::Windows::Internal::Shell::RegistrationData *v6; // rcx
  __int64 result; // rax

  v6 = *(winrt::Windows::Internal::Shell::RegistrationData **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>(
      v6,
      *(winrt::Windows::Internal::Shell::RegistrationData **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
