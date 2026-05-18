/*
 * XREFs of ?Accept@Texture@Engine@Spectre@@UEBAXAEAVIVisitor@23@@Z @ 0x180055950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Texture::Accept(Spectre::Engine::Texture *this, struct Spectre::Engine::IVisitor *a2)
{
  (*(void (__fastcall **)(struct Spectre::Engine::IVisitor *, Spectre::Engine::Texture *))(*(_QWORD *)a2 + 24LL))(
    a2,
    this);
}
