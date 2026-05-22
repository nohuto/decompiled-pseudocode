/*
 * XREFs of ?UpdateRoot@SceneNode@Scenes@Composition@UI@Windows@@QEAAXPEAV12345@@Z @ 0x1801447E8
 * Callers:
 *     ?UpdateRoot@SceneNode@Scenes@Composition@UI@Windows@@QEAAXPEAV12345@@Z @ 0x1801447E8 (-UpdateRoot@SceneNode@Scenes@Composition@UI@Windows@@QEAAXPEAV12345@@Z.c)
 *     ?PreAddItem@SceneNodeCollection@Scenes@Composition@UI@Windows@@UEAAJAEBV?$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@Z @ 0x1801926F0 (-PreAddItem@SceneNodeCollection@Scenes@Composition@UI@Windows@@UEAAJAEBV-$RefPtr@VSceneNode@Scen.c)
 *     ?PreRemoveItem@SceneNodeCollection@Scenes@Composition@UI@Windows@@UEAAXAEBV?$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@Z @ 0x1801927B0 (-PreRemoveItem@SceneNodeCollection@Scenes@Composition@UI@Windows@@UEAAXAEBV-$RefPtr@VSceneNode@S.c)
 * Callees:
 *     ??$_Construct_n@AEBQEAV?$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@AEBQEAV123@@?$vector@V?$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@AEAAX_KAEBQEAV?$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@1@Z @ 0x18014064C (--$_Construct_n@AEBQEAV-$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@AEBQE.c)
 *     ?UpdateRoot@SceneNode@Scenes@Composition@UI@Windows@@QEAAXPEAV12345@@Z @ 0x1801447E8 (-UpdateRoot@SceneNode@Scenes@Composition@UI@Windows@@QEAAXPEAV12345@@Z.c)
 *     ?_Tidy@?$vector@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180144878 (-_Tidy@-$vector@V-$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@V-$all.c)
 */

void __fastcall Windows::UI::Composition::Scenes::SceneNode::UpdateRoot(
        Windows::UI::Composition::Scenes::SceneNode *this,
        struct Windows::UI::Composition::Scenes::SceneNode *a2)
{
  __int64 v3; // r8
  Windows::UI::Composition::Scenes::SceneNode **i; // rbx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  if ( *((struct Windows::UI::Composition::Scenes::SceneNode **)this + 29) != a2 )
  {
    v3 = *((_QWORD *)this + 20);
    *((_QWORD *)this + 29) = a2;
    if ( v3 )
    {
      v6 = 0LL;
      v5 = 0LL;
      std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneNode>>::_Construct_n<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneNode> * const &,Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneNode> * const &>(
        (__int64)&v5,
        (__int64)(*(_QWORD *)(v3 + 144) - *(_QWORD *)(v3 + 136)) >> 3,
        (Microsoft::WRL2::NestableRuntimeClass ***)(v3 + 136),
        (Microsoft::WRL2::NestableRuntimeClass ***)(v3 + 144));
      for ( i = (Windows::UI::Composition::Scenes::SceneNode **)v5;
            i != *((Windows::UI::Composition::Scenes::SceneNode ***)&v5 + 1);
            ++i )
      {
        Windows::UI::Composition::Scenes::SceneNode::UpdateRoot(*i, a2);
      }
      std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneComponent>>::_Tidy(&v5);
    }
  }
}
