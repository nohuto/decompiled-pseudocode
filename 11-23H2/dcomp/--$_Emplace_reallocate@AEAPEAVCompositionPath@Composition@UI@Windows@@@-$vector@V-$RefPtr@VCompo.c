/*
 * XREFs of ??$_Emplace_reallocate@AEAPEAVCompositionPath@Composition@UI@Windows@@@?$vector@V?$RefPtr@VCompositionPath@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionPath@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAAPEAV?$RefPtr@VCompositionPath@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV234@AEAPEAVCompositionPath@Composition@UI@Windows@@@Z @ 0x180177DC8
 * Callers:
 *     ??$emplace_back@AEAPEAVCompositionPath@Composition@UI@Windows@@@?$vector@V?$RefPtr@VCompositionPath@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionPath@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAA?A_TAEAPEAVCompositionPath@Composition@UI@Windows@@@Z @ 0x180178298 (--$emplace_back@AEAPEAVCompositionPath@Composition@UI@Windows@@@-$vector@V-$RefPtr@VCompositionP.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180045364 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAPEAV?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x1800B7010 (--$_Uninitialized_move@PEAV-$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@.c)
 *     ?_Change_array@?$vector@V?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@AEAAXQEAV?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@_K1@Z @ 0x1800B710C (-_Change_array@-$vector@V-$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Mi.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPath>>::_Emplace_reallocate<Windows::UI::Composition::CompositionPath * &>(
        __int64 a1,
        _QWORD *a2,
        Microsoft::WRL2::NestableRuntimeClass **a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rax
  Microsoft::WRL2::NestableRuntimeClass *v14; // rcx
  _QWORD *v15; // rsi
  Microsoft::WRL2::NestableRuntimeClass **v16; // r14
  _QWORD *v17; // rdx
  _QWORD *v18; // r8
  _QWORD *v19; // rcx

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
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = *a3;
  v15 = (_QWORD *)v13;
  v16 = (Microsoft::WRL2::NestableRuntimeClass **)(v13 + 8 * v5);
  *v16 = *a3;
  if ( v14 )
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v14);
  v17 = *(_QWORD **)(a1 + 8);
  v18 = v15;
  v19 = *(_QWORD **)a1;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionColorGradientStop> *,std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionColorGradientStop>>>(
      v19,
      a2,
      v15);
    v17 = *(_QWORD **)(a1 + 8);
    v18 = v16 + 1;
    v19 = a2;
  }
  std::_Uninitialized_move<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionColorGradientStop> *,std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionColorGradientStop>>>(
    v19,
    v17,
    v18);
  std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionColorGradientStop>>::_Change_array(
    a1,
    (__int64)v15,
    v9,
    v3);
  return v16;
}
