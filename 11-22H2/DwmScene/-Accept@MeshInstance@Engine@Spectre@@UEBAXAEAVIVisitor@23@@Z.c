/*
 * XREFs of ?Accept@MeshInstance@Engine@Spectre@@UEBAXAEAVIVisitor@23@@Z @ 0x18004B0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::MeshInstance::Accept(
        Spectre::Engine::MeshInstance *this,
        struct Spectre::Engine::IVisitor *a2)
{
  (*(void (__fastcall **)(struct Spectre::Engine::IVisitor *, Spectre::Engine::MeshInstance *))(*(_QWORD *)a2 + 152LL))(
    a2,
    this);
}
