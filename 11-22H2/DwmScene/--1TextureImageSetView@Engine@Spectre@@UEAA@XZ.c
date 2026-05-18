/*
 * XREFs of ??1TextureImageSetView@Engine@Spectre@@UEAA@XZ @ 0x180051324
 * Callers:
 *     _Spectre::Engine::DeviceTexture::Create_::_1_::dtor$0 @ 0x1800E7564 (_Spectre--Engine--DeviceTexture--Create_--_1_--dtor$0.c)
 *     _Spectre::Engine::Texture::Create_::_1_::dtor$4 @ 0x1800E7576 (_Spectre--Engine--Texture--Create_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::TextureImageSetView::~TextureImageSetView(Spectre::Engine::TextureImageSetView *this)
{
  std::vector<D3D11_INPUT_ELEMENT_DESC>::_Tidy((char *)this + 24);
}
