/*
 * XREFs of ??1?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800512B0
 * Callers:
 *     _Spectre::Engine::TextureImageSet::TextureImageSet_::_1_::dtor$1 @ 0x1800E752A (_Spectre--Engine--TextureImageSet--TextureImageSet_--_1_--dtor$1.c)
 *     _Spectre::Engine::D3D11::_anonymous_namespace_::CreateDescription_::_1_::dtor$8 @ 0x1800E753C (_Spectre--Engine--D3D11--_anonymous_namespace_--CreateDescription_--_1_--dtor$8.c)
 *     _Spectre::Engine::TextureImageSetView::TextureImageSetView_::_1_::dtor$1 @ 0x1800E754E (_Spectre--Engine--TextureImageSetView--TextureImageSetView_--_1_--dtor$1.c)
 *     _Spectre::Engine::CreateDefaultImageDescriptors_::_1_::dtor$0 @ 0x1800E759A (_Spectre--Engine--CreateDefaultImageDescriptors_--_1_--dtor$0.c)
 *     _Spectre::Engine::D3D11::_anonymous_namespace_::CreateDescription_::_1_::dtor$0_0 @ 0x1800F1A78 (_Spectre--Engine--D3D11--_anonymous_namespace_--CreateDescription_--_1_--dtor$0_0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 std::vector<Spectre::Engine::TextureImageDesc>::~vector<Spectre::Engine::TextureImageDesc>()
{
  return std::vector<D3D11_INPUT_ELEMENT_DESC>::_Tidy();
}
