/*
 * XREFs of ??_EDepthBuffer@Engine@Spectre@@UEAAPEAXI@Z @ 0x18006F1E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1DepthBuffer@Engine@Spectre@@UEAA@XZ @ 0x18006F118 (--1DepthBuffer@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::DepthBuffer *__fastcall Spectre::Engine::DepthBuffer::`vector deleting destructor'(
        Spectre::Engine::DepthBuffer *this,
        char a2)
{
  Spectre::Engine::DepthBuffer::~DepthBuffer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
