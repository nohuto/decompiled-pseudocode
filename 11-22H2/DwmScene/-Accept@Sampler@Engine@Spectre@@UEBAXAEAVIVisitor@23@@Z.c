/*
 * XREFs of ?Accept@Sampler@Engine@Spectre@@UEBAXAEAVIVisitor@23@@Z @ 0x1800545E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Sampler::Accept(Spectre::Engine::Sampler *this, struct Spectre::Engine::IVisitor *a2)
{
  (*(void (__fastcall **)(struct Spectre::Engine::IVisitor *, Spectre::Engine::Sampler *))(*(_QWORD *)a2 + 40LL))(
    a2,
    this);
}
