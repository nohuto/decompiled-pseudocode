/*
 * XREFs of ??$make_shared@VGpuProfiler@Engine@Spectre@@AEAVRenderDevice@23@@std@@YA?AV?$shared_ptr@VGpuProfiler@Engine@Spectre@@@0@AEAVRenderDevice@Engine@Spectre@@@Z @ 0x18002B124
 * Callers:
 *     ??0RenderOutput@Engine@Spectre@@IEAA@UOutputDescription@12@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@5@@Z @ 0x18002B424 (--0RenderOutput@Engine@Spectre@@IEAA@UOutputDescription@12@V-$shared_ptr@VRenderDevice@Engine@Sp.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0GpuProfiler@Engine@Spectre@@QEAA@AEAVRenderDevice@12@@Z @ 0x1800A0B40 (--0GpuProfiler@Engine@Spectre@@QEAA@AEAVRenderDevice@12@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<Spectre::Engine::GpuProfiler,Spectre::Engine::RenderDevice &>(
        _QWORD *a1,
        struct Spectre::Engine::RenderDevice *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx

  v4 = operator new(0xD8uLL);
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::GpuProfiler>::`vftable';
    Spectre::Engine::GpuProfiler::GpuProfiler((Spectre::Engine::GpuProfiler *)(v4 + 4), a2);
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = v5 + 4;
  a1[1] = v5;
  return a1;
}
