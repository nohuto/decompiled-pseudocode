/*
 * XREFs of ??_ETextureState@Engine@Spectre@@UEAAPEAXI@Z @ 0x18009E0D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1TextureState@Engine@Spectre@@UEAA@XZ @ 0x18009DFE8 (--1TextureState@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::TextureState *__fastcall Spectre::Engine::TextureState::`vector deleting destructor'(
        Spectre::Engine::TextureState *this,
        char a2)
{
  Spectre::Engine::TextureState::~TextureState(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
