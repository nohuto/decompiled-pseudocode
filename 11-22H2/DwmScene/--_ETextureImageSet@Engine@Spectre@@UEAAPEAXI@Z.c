/*
 * XREFs of ??_ETextureImageSet@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800558C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1TextureImageSet@Engine@Spectre@@UEAA@XZ @ 0x1800557C8 (--1TextureImageSet@Engine@Spectre@@UEAA@XZ.c)
 */

void **__fastcall Spectre::Engine::TextureImageSet::`vector deleting destructor'(void **this, char a2)
{
  Spectre::Engine::TextureImageSet::~TextureImageSet(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
