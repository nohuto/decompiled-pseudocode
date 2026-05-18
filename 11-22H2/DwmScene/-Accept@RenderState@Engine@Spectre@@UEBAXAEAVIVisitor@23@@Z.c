/*
 * XREFs of ?Accept@RenderState@Engine@Spectre@@UEBAXAEAVIVisitor@23@@Z @ 0x180043EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::RenderState::Accept(
        Spectre::Engine::RenderState *this,
        struct Spectre::Engine::IVisitor *a2)
{
  (*(void (__fastcall **)(struct Spectre::Engine::IVisitor *, Spectre::Engine::RenderState *))(*(_QWORD *)a2 + 56LL))(
    a2,
    this);
}
