/*
 * XREFs of ?Accept@DepthBufferGeneric@Engine@Spectre@@UEBAXAEAVIVisitor@23@@Z @ 0x180028160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::DepthBufferGeneric::Accept(
        Spectre::Engine::DepthBufferGeneric *this,
        struct Spectre::Engine::IVisitor *a2)
{
  (*(void (__fastcall **)(struct Spectre::Engine::IVisitor *, Spectre::Engine::DepthBufferGeneric *))(*(_QWORD *)a2 + 216LL))(
    a2,
    this);
}
