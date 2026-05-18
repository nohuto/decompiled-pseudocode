/*
 * XREFs of ??_GSamplerState@Engine@Spectre@@UEAAPEAXI@Z @ 0x18009E420
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1SamplerState@Engine@Spectre@@UEAA@XZ @ 0x18009E394 (--1SamplerState@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::SamplerState *__fastcall Spectre::Engine::SamplerState::`scalar deleting destructor'(
        Spectre::Engine::SamplerState *this,
        char a2)
{
  Spectre::Engine::SamplerState::~SamplerState(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
