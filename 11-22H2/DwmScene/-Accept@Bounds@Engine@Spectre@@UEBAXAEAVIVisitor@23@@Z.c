/*
 * XREFs of ?Accept@Bounds@Engine@Spectre@@UEBAXAEAVIVisitor@23@@Z @ 0x18004A0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Bounds::Accept(Spectre::Engine::Bounds *this, struct Spectre::Engine::IVisitor *a2)
{
  (*(void (__fastcall **)(struct Spectre::Engine::IVisitor *, Spectre::Engine::Bounds *))(*(_QWORD *)a2 + 200LL))(
    a2,
    this);
}
