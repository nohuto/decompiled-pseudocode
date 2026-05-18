/*
 * XREFs of ?GetNextInTree@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@AEBV45@@Z @ 0x18003C170
 * Callers:
 *     ?SetParent@SceneNode@Engine@Spectre@@AEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003D484 (-SetParent@SceneNode@Engine@Spectre@@AEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?PostUpdate@ShadowMapCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x18008E390 (-PostUpdate@ShadowMapCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ?GetNextInTree@SceneNode@Engine@Spectre@@AEAAPEAV123@PEBV123@@Z @ 0x18003C050 (-GetNextInTree@SceneNode@Engine@Spectre@@AEAAPEAV123@PEBV123@@Z.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

_QWORD *__fastcall Spectre::Engine::SceneNode::GetNextInTree(
        Spectre::Engine::SceneNode *this,
        _QWORD *a2,
        const struct Spectre::Engine::SceneNode **a3)
{
  struct Spectre::Engine::SceneNode *NextInTree; // rax
  __int64 *v7; // rcx
  char v8; // bl
  __int64 v9; // rax
  __int64 v10; // rax
  char v12; // [rsp+28h] [rbp-30h] BYREF
  std::_Ref_count_base *v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+38h] [rbp-20h] BYREF
  std::_Ref_count_base *v15; // [rsp+40h] [rbp-18h]

  Spectre::Engine::SceneNode::VerifyReadAccess(this);
  NextInTree = Spectre::Engine::SceneNode::GetNextInTree(this, *a3);
  if ( NextInTree )
  {
    v7 = (__int64 *)std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this(
                      (__int64)NextInTree + 8,
                      &v14);
    v8 = 5;
    v9 = *v7;
  }
  else
  {
    v13 = 0LL;
    v7 = (__int64 *)&v12;
    v9 = 0LL;
    v8 = 6;
  }
  *v7 = 0LL;
  *a2 = v9;
  v10 = v7[1];
  v7[1] = 0LL;
  a2[1] = v10;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
  }
  if ( (v8 & 1) != 0 && v15 )
    std::_Ref_count_base::_Decref(v15);
  return a2;
}
