/*
 * XREFs of ?Accept@IndexBuffer@Engine@Spectre@@UEBAXAEAVIVisitor@23@@Z @ 0x180089B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::IndexBuffer::Accept(
        Spectre::Engine::IndexBuffer *this,
        struct Spectre::Engine::IVisitor *a2)
{
  (*(void (__fastcall **)(struct Spectre::Engine::IVisitor *, Spectre::Engine::IndexBuffer *))(*(_QWORD *)a2 + 80LL))(
    a2,
    this);
}
