/*
 * XREFs of ??_GIndexBufferState@Engine@Spectre@@UEAAPEAXI@Z @ 0x18009ED00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1IndexBufferState@Engine@Spectre@@UEAA@XZ @ 0x18009ECB4 (--1IndexBufferState@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::IndexBufferState *__fastcall Spectre::Engine::IndexBufferState::`scalar deleting destructor'(
        Spectre::Engine::IndexBufferState *this,
        char a2)
{
  Spectre::Engine::IndexBufferState::~IndexBufferState(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
