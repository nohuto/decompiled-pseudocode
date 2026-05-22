/*
 * XREFs of ?_Change_array@?$vector@V?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@AEAAXQEAV?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@_K1@Z @ 0x18018767C
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@@?$vector@V?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAAPEAV?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV234@AEBV234@@Z @ 0x1801867FC (--$_Emplace_reallocate@AEBV-$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Compositio.c)
 *     ??$_Emplace_reallocate@V?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@@?$vector@V?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAAPEAV?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x18019C258 (--$_Emplace_reallocate@V-$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Micros.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAXPEAV?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@AEAV?$allocator@V?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x180122454 (--$_Destroy_range@V-$allocator@V-$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  Microsoft::WRL2::NestableRuntimeClass **v6; // rcx
  __int64 result; // rax

  v6 = *(Microsoft::WRL2::NestableRuntimeClass ***)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::DebugPropertyRegistration>>>(
      v6,
      *(Microsoft::WRL2::NestableRuntimeClass ***)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
