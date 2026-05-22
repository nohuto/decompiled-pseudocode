/*
 * XREFs of ??$_Emplace_reallocate@V?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@@?$vector@V?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAAPEAV?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x18019C258
 * Callers:
 *     ?RememberRegistrationToken@CompObjectDiagnosticsPrincipal@@QEAAXPEAVDebugPropertyRegistration@Composition@UI@Windows@@@Z @ 0x18019E2C4 (-RememberRegistrationToken@CompObjectDiagnosticsPrincipal@@QEAAXPEAVDebugPropertyRegistration@Co.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180045364 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$_Uninitialized_move@PEAV?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAPEAV?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x180186ADC (--$_Uninitialized_move@PEAV-$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Compositio.c)
 *     ?_Change_array@?$vector@V?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@AEAAXQEAV?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@_K1@Z @ 0x18018767C (-_Change_array@-$vector@V-$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::DebugPropertyRegistration>>::_Emplace_reallocate<Microsoft::WRL2::RefPtr<Windows::UI::Composition::DebugPropertyRegistration>>(
        __int64 a1,
        Microsoft::WRL2::NestableRuntimeClass **a2,
        Microsoft::WRL2::NestableRuntimeClass **a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // rsi
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  Microsoft::WRL2::NestableRuntimeClass **v13; // rax
  __int64 v14; // r14
  Microsoft::WRL2::NestableRuntimeClass **v15; // rsi
  Microsoft::WRL2::NestableRuntimeClass **v16; // rdx
  Microsoft::WRL2::NestableRuntimeClass **v17; // r8
  Microsoft::WRL2::NestableRuntimeClass **v18; // rcx

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = ((__int64)a2 - *(_QWORD *)a1) >> 3;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error((const char *)a1);
  v9 = v7 + 1;
  v10 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v13 = (Microsoft::WRL2::NestableRuntimeClass **)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (__int64)v13;
  v15 = &v13[v5];
  *v15 = 0LL;
  if ( v15 != a3 )
  {
    *v15 = *a3;
    *a3 = 0LL;
  }
  v16 = *(Microsoft::WRL2::NestableRuntimeClass ***)(a1 + 8);
  v17 = v13;
  v18 = *(Microsoft::WRL2::NestableRuntimeClass ***)a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner> *,std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>>(
      v18,
      a2,
      v13);
    v16 = *(Microsoft::WRL2::NestableRuntimeClass ***)(a1 + 8);
    v17 = v15 + 1;
    v18 = a2;
  }
  std::_Uninitialized_move<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner> *,std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>>(
    v18,
    v16,
    v17);
  std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>::_Change_array(
    a1,
    v14,
    v9,
    v3);
  return v15;
}
