/*
 * XREFs of ??$_Uninitialized_move@PEAV?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAPEAV?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x180186ADC
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@@?$vector@V?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAAPEAV?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV234@AEBV234@@Z @ 0x1801867FC (--$_Emplace_reallocate@AEBV-$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Compositio.c)
 *     ??$_Emplace_reallocate@V?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@@?$vector@V?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAAPEAV?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x18019C258 (--$_Emplace_reallocate@V-$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Micros.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAXPEAV?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@AEAV?$allocator@V?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x180122454 (--$_Destroy_range@V-$allocator@V-$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall std::_Uninitialized_move<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner> *,std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        Microsoft::WRL2::NestableRuntimeClass **a2,
        Microsoft::WRL2::NestableRuntimeClass **a3)
{
  Microsoft::WRL2::NestableRuntimeClass **i; // rax

  for ( i = a1; i != a2; ++i )
  {
    *a3 = 0LL;
    if ( a3 != i )
    {
      *a3 = *i;
      *i = 0LL;
    }
    ++a3;
  }
  std::_Destroy_range<std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::DebugPropertyRegistration>>>(
    a3,
    a3);
  return a3;
}
