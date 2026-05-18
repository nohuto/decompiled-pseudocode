/*
 * XREFs of ??1VertexBuffer@Engine@Spectre@@UEAA@XZ @ 0x180089544
 * Callers:
 *     ??_GVertexBuffer@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800895B0 (--_GVertexBuffer@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::VertexBuffer::~VertexBuffer(Spectre::Engine::VertexBuffer *this)
{
  *(_QWORD *)this = &Spectre::Engine::VertexBuffer::`vftable';
  Spectre::Engine::ArrayBuffer::~ArrayBuffer(this);
}
