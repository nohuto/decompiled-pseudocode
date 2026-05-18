/*
 * XREFs of ?Accept@ColorTransform@Engine@Spectre@@UEBAXAEAVIVisitor@23@@Z @ 0x18008F620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::ColorTransform::Accept(
        Spectre::Engine::ColorTransform *this,
        struct Spectre::Engine::IVisitor *a2)
{
  (*(void (__fastcall **)(struct Spectre::Engine::IVisitor *, Spectre::Engine::ColorTransform *))(*(_QWORD *)a2 + 184LL))(
    a2,
    this);
}
