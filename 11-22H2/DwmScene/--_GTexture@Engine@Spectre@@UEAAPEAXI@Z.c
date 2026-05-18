/*
 * XREFs of ??_GTexture@Engine@Spectre@@UEAAPEAXI@Z @ 0x180018210
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VTexture@Engine@Spectre@@@std@@EEAAXXZ @ 0x18001B780 (-_Destroy@-$_Ref_count_obj2@VTexture@Engine@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1Texture@Engine@Spectre@@UEAA@XZ @ 0x180055760 (--1Texture@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::Texture *__fastcall Spectre::Engine::Texture::`scalar deleting destructor'(
        Spectre::Engine::Texture *this,
        char a2)
{
  Spectre::Engine::Texture::~Texture(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
