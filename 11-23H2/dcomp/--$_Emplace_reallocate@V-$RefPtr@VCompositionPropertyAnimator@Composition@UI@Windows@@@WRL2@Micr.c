/*
 * XREFs of ??$_Emplace_reallocate@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@@?$vector@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAAPEAV?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1801869EC
 * Callers:
 *     ?GenerateAnimators@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@AEAAJXZ @ 0x180186C5C (-GenerateAnimators@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@AEAAJXZ.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180045364 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@AEBA_K_K@Z @ 0x1800B8014 (-_Calculate_growth@-$vector@V-$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$_Uninitialized_move@PEAV?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAPEAV?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x180186B28 (--$_Uninitialized_move@PEAV-$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@M.c)
 *     ?_Change_array@?$vector@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@AEAAXQEAV?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@_K1@Z @ 0x1801876F0 (-_Change_array@-$vector@V-$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Mic.c)
 */

_QWORD *__fastcall std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertyAnimator>>::_Emplace_reallocate<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertyAnimator>>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rsi
  __int64 v6; // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // r12
  SIZE_T size_of; // rax
  __int64 v11; // rax
  __int64 v12; // r14
  _QWORD *v13; // rsi
  __int64 v14; // rdx
  _QWORD *v15; // r8
  __int64 v16; // rcx

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error((const char *)0x1FFFFFFFFFFFFFFFLL);
  v8 = v6 + 1;
  v9 = std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertyAnimator>>::_Calculate_growth(
         a1,
         v6 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = v11;
  v13 = (_QWORD *)(v11 + 8 * ((a2 - v3) >> 3));
  *v13 = 0LL;
  if ( v13 != a3 )
  {
    *v13 = *a3;
    *a3 = 0LL;
  }
  v14 = a1[1];
  v15 = (_QWORD *)v11;
  v16 = *a1;
  if ( a2 != v14 )
  {
    std::_Uninitialized_move<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertyAnimator> *,std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertyAnimator>>>(
      v16,
      a2,
      v11);
    v14 = a1[1];
    v15 = v13 + 1;
    v16 = a2;
  }
  std::_Uninitialized_move<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertyAnimator> *,std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertyAnimator>>>(
    v16,
    v14,
    v15);
  std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertyAnimator>>::_Change_array(
    a1,
    v12,
    v8,
    v9);
  return v13;
}
