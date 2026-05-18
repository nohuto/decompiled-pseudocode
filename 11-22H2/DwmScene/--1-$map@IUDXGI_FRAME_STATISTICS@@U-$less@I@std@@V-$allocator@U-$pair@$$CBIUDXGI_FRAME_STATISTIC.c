/*
 * XREFs of ??1?$map@IUDXGI_FRAME_STATISTICS@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@@3@@std@@QEAA@XZ @ 0x1800C8F94
 * Callers:
 *     _Spectre::Engine::D3D11::RenderOutputD3D11::RenderOutputD3D11_::_1_::dtor$6 @ 0x1800F17F1 (_Spectre--Engine--D3D11--RenderOutputD3D11--RenderOutputD3D11_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::map<unsigned int,DXGI_FRAME_STATISTICS>::~map<unsigned int,DXGI_FRAME_STATISTICS>(void **a1)
{
  std::_Tree<std::_Tmap_traits<unsigned int,DXGI_FRAME_STATISTICS,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,DXGI_FRAME_STATISTICS>>,0>>::~_Tree<std::_Tmap_traits<unsigned int,DXGI_FRAME_STATISTICS,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,DXGI_FRAME_STATISTICS>>,0>>(a1);
}
