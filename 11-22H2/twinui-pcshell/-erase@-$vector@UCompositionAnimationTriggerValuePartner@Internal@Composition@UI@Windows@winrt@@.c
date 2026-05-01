/*
 * XREFs of ?erase@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@@2@@Z @ 0x180550B6C
 * Callers:
 *     ?RemoveAt@?$vector_base@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@3@@winrt@@QEAAXI@Z @ 0x18054F9B0 (-RemoveAt@-$vector_base@U-$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composi.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??_GRegistrationData@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z @ 0x1802EA000 (--_GRegistrationData@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  winrt::Windows::Foundation::IUnknown *v3; // rbp
  winrt::Windows::Foundation::IUnknown *i; // rdi
  _QWORD *result; // rax

  v3 = *(winrt::Windows::Foundation::IUnknown **)(a1 + 8);
  for ( i = (winrt::Windows::Foundation::IUnknown *)(a3 + 8);
        i != v3;
        i = (winrt::Windows::Foundation::IUnknown *)((char *)i + 8) )
  {
    winrt::Windows::Foundation::IUnknown::operator=((winrt::Windows::Foundation::IUnknown *)((char *)i - 8), i);
  }
  winrt::Windows::Internal::Shell::RegistrationData::`scalar deleting destructor'((winrt::Windows::Internal::Shell::RegistrationData *)(*(_QWORD *)(a1 + 8) - 8LL));
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
