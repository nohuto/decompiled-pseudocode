/*
 * XREFs of ?Update@Scene@Engine@Spectre@@AEAAXAEBVFrameData@23@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x1800421F0
 * Callers:
 *     ?Update@Scene@Engine@Spectre@@AEAAXAEBVFrameData@23@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x1800421F0 (-Update@Scene@Engine@Spectre@@AEAAXAEBVFrameData@23@AEBV-$shared_ptr@VSceneNode@Engine@Spectre@@.c)
 *     ?Update@Scene@Engine@Spectre@@QEAAXAEBVFrameData@23@@Z @ 0x18004226C (-Update@Scene@Engine@Spectre@@QEAAXAEBVFrameData@23@@Z.c)
 * Callees:
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ?Update@SceneNode@Engine@Spectre@@QEAAXAEBVFrameData@23@@Z @ 0x18003E0E0 (-Update@SceneNode@Engine@Spectre@@QEAAXAEBVFrameData@23@@Z.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     ?Update@Scene@Engine@Spectre@@AEAAXAEBVFrameData@23@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x1800421F0 (-Update@Scene@Engine@Spectre@@AEAAXAEBVFrameData@23@AEBV-$shared_ptr@VSceneNode@Engine@Spectre@@.c)
 */

void __fastcall Spectre::Engine::Scene::Update(__int64 a1, __int64 a2, Spectre::Engine::SceneNode **a3)
{
  const struct Spectre::Engine::FrameData *v6; // rdx
  Spectre::Engine::SceneNode **v7; // r8
  Spectre::Engine::SceneNode *v8; // rbx
  __int64 v9; // rsi
  __int64 i; // rbx

  if ( !std::operator==<Spectre::Engine::Scene>(a3) )
  {
    Spectre::Engine::SceneNode::Update(*v7, v6);
    v8 = *a3;
    Spectre::Engine::SceneNode::VerifyReadAccess(v8);
    v9 = *((_QWORD *)v8 + 5);
    for ( i = *((_QWORD *)v8 + 4); i != v9; i += 16LL )
      Spectre::Engine::Scene::Update(a1, a2, i);
  }
}
