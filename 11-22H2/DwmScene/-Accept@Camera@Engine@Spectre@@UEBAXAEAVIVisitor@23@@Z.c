/*
 * XREFs of ?Accept@Camera@Engine@Spectre@@UEBAXAEAVIVisitor@23@@Z @ 0x180059D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Camera::Accept(Spectre::Engine::Camera *this, struct Spectre::Engine::IVisitor *a2)
{
  (*(void (__fastcall **)(struct Spectre::Engine::IVisitor *, Spectre::Engine::Camera *))(*(_QWORD *)a2 + 192LL))(
    a2,
    this);
}
