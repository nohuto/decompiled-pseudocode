/*
 * XREFs of ??1?$map@IT_LARGE_INTEGER@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@@std@@QEAA@XZ @ 0x180031AE0
 * Callers:
 *     _Spectre::Engine::ResourceManager::ResourceManager_::_1_::dtor$3 @ 0x1800E8449 (_Spectre--Engine--ResourceManager--ResourceManager_--_1_--dtor$3.c)
 *     _Spectre::Engine::D3D11::RenderOutputD3D11::RenderOutputD3D11_::_1_::dtor$7 @ 0x1800F180A (_Spectre--Engine--D3D11--RenderOutputD3D11--RenderOutputD3D11_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::map<unsigned int,_LARGE_INTEGER>::~map<unsigned int,_LARGE_INTEGER>(void **a1)
{
  std::_Tree<std::_Tmap_traits<unsigned int,_LARGE_INTEGER,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,_LARGE_INTEGER>>,0>>::~_Tree<std::_Tmap_traits<unsigned int,_LARGE_INTEGER,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,_LARGE_INTEGER>>,0>>(a1);
}
