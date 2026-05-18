/*
 * XREFs of ?Accept@Light@Engine@Spectre@@UEBAXAEAVIVisitor@23@@Z @ 0x180042FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Light::Accept(Spectre::Engine::Light *this, struct Spectre::Engine::IVisitor *a2)
{
  (*(void (__fastcall **)(struct Spectre::Engine::IVisitor *, Spectre::Engine::Light *))(*(_QWORD *)a2 + 168LL))(
    a2,
    this);
}
