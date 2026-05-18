/*
 * XREFs of ?Accept@Material@Engine@Spectre@@UEBAXAEAVIVisitor@23@@Z @ 0x180043EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Material::Accept(
        Spectre::Engine::Material *this,
        struct Spectre::Engine::IVisitor *a2)
{
  (*(void (__fastcall **)(struct Spectre::Engine::IVisitor *, Spectre::Engine::Material *))(*(_QWORD *)a2 + 72LL))(
    a2,
    this);
}
