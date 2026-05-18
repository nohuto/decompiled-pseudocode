/*
 * XREFs of ??1ResourceFactory@Engine@Spectre@@QEAA@XZ @ 0x180025CD0
 * Callers:
 *     ??1RenderDevice@Engine@Spectre@@UEAA@XZ @ 0x180025BA0 (--1RenderDevice@Engine@Spectre@@UEAA@XZ.c)
 *     _Spectre::Engine::RenderDevice::RenderDevice_::_1_::dtor$11 @ 0x1800E4C93 (_Spectre--Engine--RenderDevice--RenderDevice_--_1_--dtor$11.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::ResourceFactory::~ResourceFactory(void **this)
{
  _Mtx_destroy_in_situ((_Mtx_t)(this + 2));
  std::_Tree<std::_Tmap_traits<unsigned __int64,std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>>>,0>>::~_Tree<std::_Tmap_traits<unsigned __int64,std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>>>,0>>(this);
}
