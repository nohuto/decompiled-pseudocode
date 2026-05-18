/*
 * XREFs of ??_GTextureGeneric@Engine@Spectre@@UEAAPEAXI@Z @ 0x180052E20
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VTextureGeneric@Engine@Spectre@@@std@@EEAAXXZ @ 0x180053C00 (-_Destroy@-$_Ref_count_obj2@VTextureGeneric@Engine@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1DeviceTexture@Engine@Spectre@@UEAA@XZ @ 0x180055718 (--1DeviceTexture@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::TextureGeneric *__fastcall Spectre::Engine::TextureGeneric::`scalar deleting destructor'(
        Spectre::Engine::TextureGeneric *this,
        char a2)
{
  Spectre::Engine::DeviceTexture::~DeviceTexture(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
