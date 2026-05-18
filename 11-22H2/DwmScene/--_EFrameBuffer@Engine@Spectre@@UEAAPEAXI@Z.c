/*
 * XREFs of ??_EFrameBuffer@Engine@Spectre@@UEAAPEAXI@Z @ 0x180028120
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1FrameBuffer@Engine@Spectre@@UEAA@XZ @ 0x180028058 (--1FrameBuffer@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::FrameBuffer *__fastcall Spectre::Engine::FrameBuffer::`vector deleting destructor'(
        Spectre::Engine::FrameBuffer *this,
        char a2)
{
  Spectre::Engine::FrameBuffer::~FrameBuffer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
