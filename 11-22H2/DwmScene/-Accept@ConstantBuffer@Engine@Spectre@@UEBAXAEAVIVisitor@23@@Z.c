/*
 * XREFs of ?Accept@ConstantBuffer@Engine@Spectre@@UEBAXAEAVIVisitor@23@@Z @ 0x18009BC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::ConstantBuffer::Accept(
        Spectre::Engine::ConstantBuffer *this,
        struct Spectre::Engine::IVisitor *a2)
{
  (*(void (__fastcall **)(struct Spectre::Engine::IVisitor *, Spectre::Engine::ConstantBuffer *))(*(_QWORD *)a2 + 96LL))(
    a2,
    this);
}
