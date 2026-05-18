/*
 * XREFs of ??_ETextureImageSetView@Engine@Spectre@@UEAAPEAXI@Z @ 0x180055900
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@UD3D11_INPUT_ELEMENT_DESC@@V?$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@std@@AEAAXXZ @ 0x180051E80 (-_Tidy@-$vector@UD3D11_INPUT_ELEMENT_DESC@@V-$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@std@@A.c)
 */

Spectre::Engine::TextureImageSetView *__fastcall Spectre::Engine::TextureImageSetView::`vector deleting destructor'(
        Spectre::Engine::TextureImageSetView *this,
        char a2)
{
  std::vector<D3D11_INPUT_ELEMENT_DESC>::_Tidy((__int64)this + 24);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
