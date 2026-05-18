/*
 * XREFs of ?Accept@VertexBuffer@Engine@Spectre@@UEBAXAEAVIVisitor@23@@Z @ 0x180089630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::VertexBuffer::Accept(
        Spectre::Engine::VertexBuffer *this,
        struct Spectre::Engine::IVisitor *a2)
{
  (*(void (__fastcall **)(struct Spectre::Engine::IVisitor *, Spectre::Engine::VertexBuffer *))(*(_QWORD *)a2 + 16LL))(
    a2,
    this);
}
