/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@@?$vector@V?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAAPEAV?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV234@AEBV234@@Z @ 0x18000E370
 * Callers:
 *     ?AddReceiver@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJPEAVCompositionProjectedShadowReceiver@234@@Z @ 0x180006A80 (-AddReceiver@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJPEAVCompositionProjectedSha.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAXPEAV?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@AEAV?$allocator@V?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x180006F18 (--$_Destroy_range@V-$allocator@V-$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Wind.c)
 *     ??$_Uninitialized_move@PEAV?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAPEAV?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x18000E478 (--$_Uninitialized_move@PEAV-$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180045364 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionProjectedShadowReceiver>>::_Emplace_reallocate<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionProjectedShadowReceiver> const &>(
        char *a1,
        __int64 a2,
        Microsoft::WRL2::NestableRuntimeClass **a3)
{
  __int64 v3; // rsi
  __int64 v5; // r15
  __int64 v7; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rax
  Microsoft::WRL2::NestableRuntimeClass *v14; // rcx
  __int64 v15; // rdi
  Microsoft::WRL2::NestableRuntimeClass **v16; // r15
  __int64 v17; // rdx
  _QWORD *v18; // r8
  __int64 v19; // rcx
  Microsoft::WRL2::NestableRuntimeClass **result; // rax

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - *(_QWORD *)a1) >> 3;
  v7 = (__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error(a1);
  v9 = v7 + 1;
  v10 = (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 3;
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
  v15 = v13;
  v16 = (Microsoft::WRL2::NestableRuntimeClass **)(v13 + 8 * v5);
  *v16 = *a3;
  if ( v14 )
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v14);
  v17 = *((_QWORD *)a1 + 1);
  v18 = (_QWORD *)v15;
  v19 = *(_QWORD *)a1;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionProjectedShadowReceiver> *,std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionProjectedShadowReceiver>>>(
      v19,
      a2,
      v15);
    v17 = *((_QWORD *)a1 + 1);
    v18 = v16 + 1;
    v19 = a2;
  }
  std::_Uninitialized_move<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionProjectedShadowReceiver> *,std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionProjectedShadowReceiver>>>(
    v19,
    v17,
    v18);
  if ( *(_QWORD *)a1 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionProjectedShadowReceiver>>>(
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 1));
    std::_Deallocate<16,0>(*(_QWORD *)a1, (*((_QWORD *)a1 + 2) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)a1 = v15;
  result = v16;
  *((_QWORD *)a1 + 1) = v15 + 8 * v9;
  *((_QWORD *)a1 + 2) = v15 + 8 * v3;
  return result;
}
