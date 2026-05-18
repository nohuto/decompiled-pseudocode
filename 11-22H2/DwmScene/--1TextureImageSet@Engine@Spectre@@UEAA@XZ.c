/*
 * XREFs of ??1TextureImageSet@Engine@Spectre@@UEAA@XZ @ 0x1800557C8
 * Callers:
 *     ??_ETextureImageSet@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800558C0 (--_ETextureImageSet@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@std@@@std@@QEAA@XZ @ 0x180025A6C (--1-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@std@@@std@@QEAA@XZ.c)
 */

void __fastcall Spectre::Engine::TextureImageSet::~TextureImageSet(void **this)
{
  std::unique_ptr<unsigned int [0]>::~unique_ptr<unsigned int [0]>(this + 7);
  std::vector<D3D11_INPUT_ELEMENT_DESC>::_Tidy((__int64)(this + 3));
}
