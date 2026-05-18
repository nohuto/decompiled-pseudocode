/*
 * XREFs of ??1QueryPool@RenderDevice@Engine@Spectre@@UEAA@XZ @ 0x180025B6C
 * Callers:
 *     ??1RenderDevice@Engine@Spectre@@UEAA@XZ @ 0x180025BA0 (--1RenderDevice@Engine@Spectre@@UEAA@XZ.c)
 *     ??_EQueryPool@RenderDevice@Engine@Spectre@@UEAAPEAXI@Z @ 0x180025E30 (--_EQueryPool@RenderDevice@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$_Tree@V?$_Tmap_traits@W4QueryType@GpuQuery@Engine@Spectre@@V?$stack@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@@2@@2@@std@@U?$less@W4QueryType@GpuQuery@Engine@Spectre@@@6@V?$allocator@U?$pair@$$CBW4QueryType@GpuQuery@Engine@Spectre@@V?$stack@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@@2@@2@@std@@@std@@@6@$0A@@std@@@std@@QEAA@XZ @ 0x180025998 (--1-$_Tree@V-$_Tmap_traits@W4QueryType@GpuQuery@Engine@Spectre@@V-$stack@V-$shared_ptr@VGpuQuery.c)
 *     ??1SharedMutex@Utils@Spectre@@QEAA@XZ @ 0x1800E0D30 (--1SharedMutex@Utils@Spectre@@QEAA@XZ.c)
 */

void __fastcall Spectre::Engine::RenderDevice::QueryPool::~QueryPool(void **this)
{
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::GpuQuery::QueryType,std::stack<std::shared_ptr<Spectre::Engine::GpuQuery>,std::vector<std::shared_ptr<Spectre::Engine::GpuQuery>>>,std::less<enum Spectre::Engine::GpuQuery::QueryType>,std::allocator<std::pair<enum Spectre::Engine::GpuQuery::QueryType const,std::stack<std::shared_ptr<Spectre::Engine::GpuQuery>,std::vector<std::shared_ptr<Spectre::Engine::GpuQuery>>>>>,0>>::~_Tree<std::_Tmap_traits<enum Spectre::Engine::GpuQuery::QueryType,std::stack<std::shared_ptr<Spectre::Engine::GpuQuery>,std::vector<std::shared_ptr<Spectre::Engine::GpuQuery>>>,std::less<enum Spectre::Engine::GpuQuery::QueryType>,std::allocator<std::pair<enum Spectre::Engine::GpuQuery::QueryType const,std::stack<std::shared_ptr<Spectre::Engine::GpuQuery>,std::vector<std::shared_ptr<Spectre::Engine::GpuQuery>>>>>,0>>(this + 3);
  Spectre::Utils::SharedMutex::~SharedMutex((Spectre::Utils::SharedMutex *)(this + 1));
  *this = &Spectre::Engine::IGpuQueryPool::`vftable';
}
