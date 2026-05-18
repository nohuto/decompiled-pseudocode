/*
 * XREFs of ?Accept@FrameBuffer@Engine@Spectre@@UEBAXAEAVIVisitor@23@@Z @ 0x180028190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::FrameBuffer::Accept(
        Spectre::Engine::FrameBuffer *this,
        struct Spectre::Engine::IVisitor *a2)
{
  (*(void (__fastcall **)(struct Spectre::Engine::IVisitor *, Spectre::Engine::FrameBuffer *))(*(_QWORD *)a2 + 48LL))(
    a2,
    this);
}
