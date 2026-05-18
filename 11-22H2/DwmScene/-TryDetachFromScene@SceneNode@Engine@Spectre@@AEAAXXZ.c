/*
 * XREFs of ?TryDetachFromScene@SceneNode@Engine@Spectre@@AEAAXXZ @ 0x18003E048
 * Callers:
 *     ??1SceneNode@Engine@Spectre@@UEAA@XZ @ 0x18003B364 (--1SceneNode@Engine@Spectre@@UEAA@XZ.c)
 *     ?SetParent@SceneNode@Engine@Spectre@@AEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003D484 (-SetParent@SceneNode@Engine@Spectre@@AEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ?GetNextInTree@SceneNode@Engine@Spectre@@AEAAPEAV123@PEBV123@@Z @ 0x18003C050 (-GetNextInTree@SceneNode@Engine@Spectre@@AEAAPEAV123@PEBV123@@Z.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     ?VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2F0 (-VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::SceneNode::TryDetachFromScene(Spectre::Engine::SceneNode *this)
{
  struct Spectre::Engine::SceneNode *NextInTree; // rbx
  _QWORD *v3; // rbp
  _QWORD *i; // rsi

  Spectre::Engine::SceneNode::VerifyWriteAccess(this);
  if ( *((_BYTE *)this + 104) )
  {
    NextInTree = this;
    do
    {
      Spectre::Engine::SceneNode::VerifyReadAccess(NextInTree);
      v3 = (_QWORD *)*((_QWORD *)NextInTree + 48);
      for ( i = (_QWORD *)*((_QWORD *)NextInTree + 47); i != v3; i += 2 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 128LL))(*i);
      *((_BYTE *)NextInTree + 104) = 0;
      NextInTree = Spectre::Engine::SceneNode::GetNextInTree(this, NextInTree);
    }
    while ( NextInTree );
  }
}
