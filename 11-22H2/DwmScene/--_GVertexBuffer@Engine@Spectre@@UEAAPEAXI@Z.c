/*
 * XREFs of ??_GVertexBuffer@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800895B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1VertexBuffer@Engine@Spectre@@UEAA@XZ @ 0x180089544 (--1VertexBuffer@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::VertexBuffer *__fastcall Spectre::Engine::VertexBuffer::`scalar deleting destructor'(
        Spectre::Engine::VertexBuffer *this,
        char a2)
{
  Spectre::Engine::VertexBuffer::~VertexBuffer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
