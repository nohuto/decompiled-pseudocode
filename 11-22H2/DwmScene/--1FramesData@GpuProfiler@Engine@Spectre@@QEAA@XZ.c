/*
 * XREFs of ??1FramesData@GpuProfiler@Engine@Spectre@@QEAA@XZ @ 0x1800A0C9C
 * Callers:
 *     ??1GpuProfiler@Engine@Spectre@@QEAA@XZ @ 0x1800A0CE4 (--1GpuProfiler@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18000B4B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@_NU?$less@W4RenderDeviceID@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@_N@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x180027F84 (--1-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@_NU-$less@W4RenderDeviceID@Engine@Sp.c)
 *     ??1?$deque@_KV?$allocator@_K@std@@@std@@QEAA@XZ @ 0x1800A0BCC (--1-$deque@_KV-$allocator@_K@std@@@std@@QEAA@XZ.c)
 */

void __fastcall Spectre::Engine::GpuProfiler::FramesData::~FramesData(Spectre::Engine::GpuProfiler::FramesData *this)
{
  `eh vector destructor iterator'(
    (char *)this + 64,
    16LL,
    5LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::DeviceVertexLayout>::~shared_ptr<Spectre::Engine::DeviceVertexLayout>);
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,bool,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,bool>>,0>>::~_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,bool,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,bool>>,0>>((void **)this + 6);
  std::deque<unsigned __int64>::~deque<unsigned __int64>((__int64)this + 8);
  Spectre::Utils::SharedMutex::~SharedMutex(this);
}
