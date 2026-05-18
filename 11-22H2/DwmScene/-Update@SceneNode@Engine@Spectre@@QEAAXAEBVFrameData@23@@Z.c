/*
 * XREFs of ?Update@SceneNode@Engine@Spectre@@QEAAXAEBVFrameData@23@@Z @ 0x18003E0E0
 * Callers:
 *     ?Update@Scene@Engine@Spectre@@AEAAXAEBVFrameData@23@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x1800421F0 (-Update@Scene@Engine@Spectre@@AEAAXAEBVFrameData@23@AEBV-$shared_ptr@VSceneNode@Engine@Spectre@@.c)
 * Callees:
 *     ?VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2F0 (-VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::SceneNode::Update(
        Spectre::Engine::SceneNode *this,
        const struct Spectre::Engine::FrameData *a2)
{
  _QWORD *v4; // rdi
  _QWORD *i; // rbx

  Spectre::Engine::SceneNode::VerifyWriteAccess(this);
  v4 = (_QWORD *)*((_QWORD *)this + 48);
  for ( i = (_QWORD *)*((_QWORD *)this + 47); i != v4; i += 2 )
  {
    if ( *(_BYTE *)(*i + 72LL) )
      (*(void (__fastcall **)(_QWORD, const struct Spectre::Engine::FrameData *))(*(_QWORD *)*i + 40LL))(*i, a2);
  }
}
