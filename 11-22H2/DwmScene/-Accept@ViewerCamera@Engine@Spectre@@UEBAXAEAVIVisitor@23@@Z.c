/*
 * XREFs of ?Accept@ViewerCamera@Engine@Spectre@@UEBAXAEAVIVisitor@23@@Z @ 0x180092090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::ViewerCamera::Accept(
        Spectre::Engine::ViewerCamera *this,
        struct Spectre::Engine::IVisitor *a2)
{
  (*(void (__fastcall **)(struct Spectre::Engine::IVisitor *, Spectre::Engine::ViewerCamera *))(*(_QWORD *)a2 + 120LL))(
    a2,
    this);
}
