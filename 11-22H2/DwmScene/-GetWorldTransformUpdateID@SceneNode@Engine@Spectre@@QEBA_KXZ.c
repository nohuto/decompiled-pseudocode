/*
 * XREFs of ?GetWorldTransformUpdateID@SceneNode@Engine@Spectre@@QEBA_KXZ @ 0x18003C848
 * Callers:
 *     ?GetWorldTransformMatrix@SceneNode@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18003C6AC (-GetWorldTransformMatrix@SceneNode@Engine@Spectre@@QEBA-AUMatrix@Math@Utils@3@XZ.c)
 *     ?GetWorldTransformUpdateID@SceneNode@Engine@Spectre@@QEBA_KXZ @ 0x18003C848 (-GetWorldTransformUpdateID@SceneNode@Engine@Spectre@@QEBA_KXZ.c)
 *     ?NotifyNodeTransformChanged@Camera@Engine@Spectre@@QEAAXXZ @ 0x18005BE28 (-NotifyNodeTransformChanged@Camera@Engine@Spectre@@QEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ?GetParent@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ @ 0x180012624 (-GetParent@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ.c)
 *     ??B?$atomic@_K@std@@QEBA_KXZ @ 0x18003B59C (--B-$atomic@_K@std@@QEBA_KXZ.c)
 *     ?GetTransformUpdateID@SceneNode@Engine@Spectre@@QEBA_KXZ @ 0x18003C324 (-GetTransformUpdateID@SceneNode@Engine@Spectre@@QEBA_KXZ.c)
 *     ?GetWorldTransformUpdateID@SceneNode@Engine@Spectre@@QEBA_KXZ @ 0x18003C848 (-GetWorldTransformUpdateID@SceneNode@Engine@Spectre@@QEBA_KXZ.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall Spectre::Engine::SceneNode::GetWorldTransformUpdateID(Spectre::Engine::SceneNode *this)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 TransformUpdateID; // rbx
  Spectre::Engine::SceneNode *v6; // rcx
  unsigned __int64 WorldTransformUpdateID; // rax
  Spectre::Engine::SceneNode *v8; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-10h]

  Spectre::Engine::SceneNode::VerifyReadAccess(this);
  v2 = std::atomic<unsigned __int64>::operator unsigned __int64();
  if ( v3 == v2 )
    return v3;
  TransformUpdateID = Spectre::Engine::SceneNode::GetTransformUpdateID(this);
  Spectre::Engine::SceneNode::GetParent(v6, &v8);
  if ( std::operator!=<Spectre::Engine::Scene>(&v8) )
  {
    WorldTransformUpdateID = Spectre::Engine::SceneNode::GetWorldTransformUpdateID(v8);
    if ( TransformUpdateID < WorldTransformUpdateID )
      TransformUpdateID = WorldTransformUpdateID;
  }
  *((_QWORD *)this + 27) = TransformUpdateID;
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return TransformUpdateID;
}
