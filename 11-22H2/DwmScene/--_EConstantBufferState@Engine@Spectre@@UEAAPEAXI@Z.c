/*
 * XREFs of ??_EConstantBufferState@Engine@Spectre@@UEAAPEAXI@Z @ 0x18009DD30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1ConstantBufferState@Engine@Spectre@@UEAA@XZ @ 0x18009DC40 (--1ConstantBufferState@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::ConstantBufferState *__fastcall Spectre::Engine::ConstantBufferState::`vector deleting destructor'(
        Spectre::Engine::ConstantBufferState *this,
        char a2)
{
  Spectre::Engine::ConstantBufferState::~ConstantBufferState(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
