/*
 * XREFs of ?TryAttachToScene@SceneNode@Engine@Spectre@@AEAAXXZ @ 0x18003DF88
 * Callers:
 *     ??0SceneNode@Engine@Spectre@@AEAA@V?$shared_ptr@VScene@Engine@Spectre@@@std@@_K@Z @ 0x18003B028 (--0SceneNode@Engine@Spectre@@AEAA@V-$shared_ptr@VScene@Engine@Spectre@@@std@@_K@Z.c)
 *     ?SetParent@SceneNode@Engine@Spectre@@AEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003D484 (-SetParent@SceneNode@Engine@Spectre@@AEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ?GetScene@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x18001265C (-GetScene@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ?GetNextInTree@SceneNode@Engine@Spectre@@AEAAPEAV123@PEBV123@@Z @ 0x18003C050 (-GetNextInTree@SceneNode@Engine@Spectre@@AEAAPEAV123@PEBV123@@Z.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     ?VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2F0 (-VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::SceneNode::TryAttachToScene(Spectre::Engine::SceneNode *this)
{
  struct Spectre::Engine::SceneNode *i; // rbx
  _QWORD *v3; // rbp
  _QWORD *j; // rsi
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-10h]

  Spectre::Engine::SceneNode::VerifyWriteAccess(this);
  Spectre::Engine::SceneNode::GetScene((__int64)this, &v5);
  if ( std::operator!=<Spectre::Engine::Scene>(&v5) )
  {
    for ( i = this; i; i = Spectre::Engine::SceneNode::GetNextInTree(this, i) )
    {
      Spectre::Engine::SceneNode::VerifyReadAccess(i);
      v3 = (_QWORD *)*((_QWORD *)i + 48);
      for ( j = (_QWORD *)*((_QWORD *)i + 47); j != v3; j += 2 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*j + 120LL))(*j);
      *((_BYTE *)i + 104) = 1;
    }
  }
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
}
