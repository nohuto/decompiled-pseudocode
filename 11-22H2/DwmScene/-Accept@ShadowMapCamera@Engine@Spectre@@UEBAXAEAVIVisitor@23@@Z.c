/*
 * XREFs of ?Accept@ShadowMapCamera@Engine@Spectre@@UEBAXAEAVIVisitor@23@@Z @ 0x18008DB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::ShadowMapCamera::Accept(
        Spectre::Engine::ShadowMapCamera *this,
        struct Spectre::Engine::IVisitor *a2)
{
  (*(void (__fastcall **)(struct Spectre::Engine::IVisitor *, Spectre::Engine::ShadowMapCamera *))(*(_QWORD *)a2 + 144LL))(
    a2,
    this);
}
