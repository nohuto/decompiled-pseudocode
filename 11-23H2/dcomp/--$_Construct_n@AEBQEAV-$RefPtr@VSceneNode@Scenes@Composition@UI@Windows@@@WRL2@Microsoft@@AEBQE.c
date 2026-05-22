/*
 * XREFs of ??$_Construct_n@AEBQEAV?$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@AEBQEAV123@@?$vector@V?$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@AEAAX_KAEBQEAV?$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@1@Z @ 0x18014064C
 * Callers:
 *     ?FindFirstComponentOfType@SceneNode@Scenes@Composition@UI@Windows@@QEAAPEAVSceneComponent@2345@W4SceneComponentType@2345@@Z @ 0x1801423F0 (-FindFirstComponentOfType@SceneNode@Scenes@Composition@UI@Windows@@QEAAPEAVSceneComponent@2345@W.c)
 *     ?UpdateRoot@SceneNode@Scenes@Composition@UI@Windows@@QEAAXPEAV12345@@Z @ 0x1801447E8 (-UpdateRoot@SceneNode@Scenes@Composition@UI@Windows@@QEAAXPEAV12345@@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAXPEAV?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@AEAV?$allocator@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x1800089CC (--$_Destroy_range@V-$allocator@V-$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Mi.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180045364 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneNode>>::_Construct_n<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneNode> * const &,Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneNode> * const &>(
        __int64 a1,
        unsigned __int64 a2,
        Microsoft::WRL2::NestableRuntimeClass ***a3,
        Microsoft::WRL2::NestableRuntimeClass ***a4)
{
  SIZE_T size_of; // rax
  __int64 v9; // rax
  _QWORD *v10; // rbx
  Microsoft::WRL2::NestableRuntimeClass **v11; // rbp
  Microsoft::WRL2::NestableRuntimeClass **i; // rdi
  Microsoft::WRL2::NestableRuntimeClass *v13; // rcx

  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Dwm_Xlength_error((const char *)a1);
    size_of = std::_Get_size_of_n<8>(a2);
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *(_QWORD *)a1 = v9;
    v10 = (_QWORD *)v9;
    *(_QWORD *)(a1 + 8) = v9;
    *(_QWORD *)(a1 + 16) = v9 + 8 * a2;
    v11 = *a4;
    for ( i = *a3; i != v11; ++i )
    {
      v13 = *i;
      *v10 = *i;
      if ( v13 )
        Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v13);
      ++v10;
    }
    std::_Destroy_range<std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneComponent>>>(
      (__int64)v10,
      (__int64)v10);
    *(_QWORD *)(a1 + 8) = v10;
  }
}
