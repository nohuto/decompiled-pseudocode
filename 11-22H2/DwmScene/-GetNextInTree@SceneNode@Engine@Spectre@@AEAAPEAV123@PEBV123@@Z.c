/*
 * XREFs of ?GetNextInTree@SceneNode@Engine@Spectre@@AEAAPEAV123@PEBV123@@Z @ 0x18003C050
 * Callers:
 *     ?GetNextInTree@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@AEBV45@@Z @ 0x18003C170 (-GetNextInTree@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@AE.c)
 *     ?TryAttachToScene@SceneNode@Engine@Spectre@@AEAAXXZ @ 0x18003DF88 (-TryAttachToScene@SceneNode@Engine@Spectre@@AEAAXXZ.c)
 *     ?TryDetachFromScene@SceneNode@Engine@Spectre@@AEAAXXZ @ 0x18003E048 (-TryDetachFromScene@SceneNode@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ?GetParent@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ @ 0x180012624 (-GetParent@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ.c)
 *     ?GetChildFirst@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ @ 0x18003BF78 (-GetChildFirst@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ.c)
 *     ?GetNext@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ @ 0x18003C014 (-GetNext@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ.c)
 *     ?VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2F0 (-VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
struct Spectre::Engine::SceneNode *__fastcall Spectre::Engine::SceneNode::GetNextInTree(
        Spectre::Engine::SceneNode *this,
        const struct Spectre::Engine::SceneNode *a2)
{
  int v4; // ebx
  _QWORD *Next; // rax
  bool v7; // si
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  std::_Ref_count_base *v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+40h] [rbp-18h] BYREF
  std::_Ref_count_base *v13; // [rsp+48h] [rbp-10h]

  v4 = 0;
  Spectre::Engine::SceneNode::VerifyWriteAccess(this);
  Spectre::Engine::SceneNode::GetChildFirst(a2, &v8);
  if ( std::operator!=<Spectre::Engine::Scene>(&v8) )
  {
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    return (struct Spectre::Engine::SceneNode *)v8;
  }
  else
  {
    do
    {
      v7 = 0;
      if ( a2 != this )
      {
        Next = Spectre::Engine::SceneNode::GetNext(a2, &v10);
        v4 |= 1u;
        if ( std::operator==<Spectre::Engine::Scene>(Next) )
          v7 = 1;
      }
      if ( (v4 & 1) != 0 )
      {
        v4 &= ~1u;
        if ( v11 )
          std::_Ref_count_base::_Decref(v11);
      }
      if ( !v7 )
        break;
      a2 = (const struct Spectre::Engine::SceneNode *)*Spectre::Engine::SceneNode::GetParent(a2, &v12);
      if ( v13 )
        std::_Ref_count_base::_Decref(v13);
    }
    while ( a2 );
    if ( a2 )
    {
      LOBYTE(v4) = v4 | 2;
      a2 = (const struct Spectre::Engine::SceneNode *)*Spectre::Engine::SceneNode::GetNext(a2, &v10);
    }
    if ( (v4 & 2) != 0 && v11 )
      std::_Ref_count_base::_Decref(v11);
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    return a2;
  }
}
