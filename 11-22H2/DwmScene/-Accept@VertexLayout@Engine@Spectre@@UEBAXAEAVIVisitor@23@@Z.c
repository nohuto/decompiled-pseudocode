/*
 * XREFs of ?Accept@VertexLayout@Engine@Spectre@@UEBAXAEAVIVisitor@23@@Z @ 0x18008BE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::VertexLayout::Accept(
        Spectre::Engine::VertexLayout *this,
        struct Spectre::Engine::IVisitor *a2)
{
  (*(void (__fastcall **)(struct Spectre::Engine::IVisitor *, Spectre::Engine::VertexLayout *))(*(_QWORD *)a2 + 8LL))(
    a2,
    this);
}
