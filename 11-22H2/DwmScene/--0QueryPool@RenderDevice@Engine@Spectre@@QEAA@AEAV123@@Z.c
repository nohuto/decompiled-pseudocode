/*
 * XREFs of ??0QueryPool@RenderDevice@Engine@Spectre@@QEAA@AEAV123@@Z @ 0x1800254A4
 * Callers:
 *     ??0RenderDevice@Engine@Spectre@@IEAA@PEAV112@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@@Z @ 0x180025518 (--0RenderDevice@Engine@Spectre@@IEAA@PEAV112@V-$shared_ptr@VPerformanceLogger@Utils@Spectre@@@st.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0SharedMutex@Utils@Spectre@@QEAA@XZ @ 0x1800E0CE0 (--0SharedMutex@Utils@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
Spectre::Engine::RenderDevice::QueryPool *__fastcall Spectre::Engine::RenderDevice::QueryPool::QueryPool(
        Spectre::Engine::RenderDevice::QueryPool *this,
        struct Spectre::Engine::RenderDevice *a2)
{
  _QWORD *v4; // rax

  *(_QWORD *)this = &Spectre::Engine::RenderDevice::QueryPool::`vftable';
  Spectre::Utils::SharedMutex::SharedMutex((Spectre::Engine::RenderDevice::QueryPool *)((char *)this + 8));
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *((_QWORD *)this + 3) = v4;
  return this;
}
