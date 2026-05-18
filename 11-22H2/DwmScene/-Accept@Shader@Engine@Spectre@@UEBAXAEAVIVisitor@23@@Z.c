/*
 * XREFs of ?Accept@Shader@Engine@Spectre@@UEBAXAEAVIVisitor@23@@Z @ 0x18004EEE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Shader::Accept(Spectre::Engine::Shader *this, struct Spectre::Engine::IVisitor *a2)
{
  (*(void (__fastcall **)(struct Spectre::Engine::IVisitor *, Spectre::Engine::Shader *))(*(_QWORD *)a2 + 32LL))(
    a2,
    this);
}
