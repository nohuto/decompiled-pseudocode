/*
 * XREFs of ??1ResourceManager@Engine@Spectre@@QEAA@XZ @ 0x1800700C4
 * Callers:
 *     ??1RenderDevice@Engine@Spectre@@UEAA@XZ @ 0x180025BA0 (--1RenderDevice@Engine@Spectre@@UEAA@XZ.c)
 *     _Spectre::Engine::RenderDevice::RenderDevice_::_1_::dtor$13 @ 0x1800E4CC5 (_Spectre--Engine--RenderDevice--RenderDevice_--_1_--dtor$13.c)
 *     _Spectre::Engine::RenderDevice::RenderDevice_::_1_::dtor$14 @ 0x1800E4CDE (_Spectre--Engine--RenderDevice--RenderDevice_--_1_--dtor$14.c)
 *     _Spectre::Engine::RenderDevice::RenderDevice_::_1_::dtor$15 @ 0x1800E4CF7 (_Spectre--Engine--RenderDevice--RenderDevice_--_1_--dtor$15.c)
 * Callees:
 *     ??1?$_Tree@V?$_Tmap_traits@IT_LARGE_INTEGER@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x18003189C (--1-$_Tree@V-$_Tmap_traits@IT_LARGE_INTEGER@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIT_LARGE_IN.c)
 */

void __fastcall Spectre::Engine::ResourceManager::~ResourceManager(void **this)
{
  std::_Tree<std::_Tmap_traits<unsigned int,_LARGE_INTEGER,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,_LARGE_INTEGER>>,0>>::~_Tree<std::_Tmap_traits<unsigned int,_LARGE_INTEGER,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,_LARGE_INTEGER>>,0>>(this + 25);
  std::_Tree<std::_Tmap_traits<unsigned int,_LARGE_INTEGER,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,_LARGE_INTEGER>>,0>>::~_Tree<std::_Tmap_traits<unsigned int,_LARGE_INTEGER,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,_LARGE_INTEGER>>,0>>(this + 23);
  _Mtx_destroy_in_situ((_Mtx_t)(this + 13));
  _Mtx_destroy_in_situ((_Mtx_t)(this + 3));
  std::vector<Spectre::Engine::ResourceData>::_Tidy(this);
}
