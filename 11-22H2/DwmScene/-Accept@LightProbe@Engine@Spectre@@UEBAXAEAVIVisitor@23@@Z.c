/*
 * XREFs of ?Accept@LightProbe@Engine@Spectre@@UEBAXAEAVIVisitor@23@@Z @ 0x180051660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::LightProbe::Accept(
        Spectre::Engine::LightProbe *this,
        struct Spectre::Engine::IVisitor *a2)
{
  (*(void (__fastcall **)(struct Spectre::Engine::IVisitor *, Spectre::Engine::LightProbe *))(*(_QWORD *)a2 + 160LL))(
    a2,
    this);
}
