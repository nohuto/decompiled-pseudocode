/*
 * XREFs of ?Accept@SceneNode@Engine@Spectre@@UEBAXAEAVIVisitor@23@@Z @ 0x18003B660
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

void __fastcall Spectre::Engine::SceneNode::Accept(
        Spectre::Engine::SceneNode *this,
        struct Spectre::Engine::IVisitor *a2)
{
  Spectre::Engine::SceneNode::VerifyReadAccess(this);
  (*(void (__fastcall **)(struct Spectre::Engine::IVisitor *, Spectre::Engine::SceneNode *))(*(_QWORD *)a2 + 208LL))(
    a2,
    this);
}
