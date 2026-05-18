/*
 * XREFs of ?Accept@GpuQuery@Engine@Spectre@@UEBAXAEAVIVisitor@23@@Z @ 0x1800E3840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::GpuQuery::Accept(
        Spectre::Engine::GpuQuery *this,
        struct Spectre::Engine::IVisitor *a2)
{
  (*(void (__fastcall **)(struct Spectre::Engine::IVisitor *, Spectre::Engine::GpuQuery *))(*(_QWORD *)a2 + 104LL))(
    a2,
    this);
}
