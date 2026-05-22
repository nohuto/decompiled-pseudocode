/*
 * XREFs of ?FindFirstComponentOfType@SceneNode@Scenes@Composition@UI@Windows@@QEAAPEAVSceneComponent@2345@W4SceneComponentType@2345@@Z @ 0x1801423F0
 * Callers:
 *     ?FindFirstComponentOfType@Api@SceneNode@Scenes@Composition@UI@Windows@@UEAAJW4SceneComponentType@3456@PEAPEAUISceneComponent@3456@@Z @ 0x1801422F0 (-FindFirstComponentOfType@Api@SceneNode@Scenes@Composition@UI@Windows@@UEAAJW4SceneComponentType.c)
 * Callees:
 *     ??$_Construct_n@AEBQEAV?$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@AEBQEAV123@@?$vector@V?$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@AEAAX_KAEBQEAV?$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@1@Z @ 0x18014064C (--$_Construct_n@AEBQEAV-$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@AEBQE.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL2::RefPtr_Windows::UI::Composition::Scenes::SceneComponent_________lambda_824693ca3fcc8c3901698088de6a4959___ @ 0x180140F08 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL2--RefPtr_W.c)
 *     ?_Tidy@?$vector@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180144878 (-_Tidy@-$vector@V-$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@V-$all.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneNode::FindFirstComponentOfType(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v4; // rbx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  __int64 *v8; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 168);
  if ( v2 )
  {
    v7 = 0LL;
    v6 = 0LL;
    std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneNode>>::_Construct_n<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneNode> * const &,Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneNode> * const &>(
      (__int64)&v6,
      (__int64)(*(_QWORD *)(v2 + 144) - *(_QWORD *)(v2 + 136)) >> 3,
      (Microsoft::WRL2::NestableRuntimeClass ***)(v2 + 136),
      (Microsoft::WRL2::NestableRuntimeClass ***)(v2 + 144));
    std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL2::RefPtr_Windows::UI::Composition::Scenes::SceneComponent_________lambda_824693ca3fcc8c3901698088de6a4959___(
      &v8,
      (_QWORD *)v6,
      *((_QWORD **)&v6 + 1),
      a2);
    if ( v8 != *((__int64 **)&v6 + 1) )
    {
      v4 = *v8;
      std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneComponent>>::_Tidy(&v6);
      return v4;
    }
    std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneComponent>>::_Tidy(&v6);
  }
  return 0LL;
}
