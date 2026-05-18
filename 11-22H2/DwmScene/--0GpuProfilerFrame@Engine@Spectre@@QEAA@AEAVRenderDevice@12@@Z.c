/*
 * XREFs of ??0GpuProfilerFrame@Engine@Spectre@@QEAA@AEAVRenderDevice@12@@Z @ 0x1800A2574
 * Callers:
 *     ??0FramesData@GpuProfiler@Engine@Spectre@@QEAA@AEAVRenderDevice@23@@Z @ 0x1800A0A04 (--0FramesData@GpuProfiler@Engine@Spectre@@QEAA@AEAVRenderDevice@23@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0Result@GpuProfilerFrame@Engine@Spectre@@QEAA@XZ @ 0x18002B740 (--0Result@GpuProfilerFrame@Engine@Spectre@@QEAA@XZ.c)
 *     ??0RenderDeviceQuery@Engine@Spectre@@QEAA@XZ @ 0x1800A1B5C (--0RenderDeviceQuery@Engine@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=7
Spectre::Engine::GpuProfilerFrame *__fastcall Spectre::Engine::GpuProfilerFrame::GpuProfilerFrame(
        Spectre::Engine::GpuProfilerFrame *this,
        struct Spectre::Engine::RenderDevice *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax

  Spectre::Engine::RenderDeviceQuery::RenderDeviceQuery(this);
  Spectre::Engine::RenderDeviceQuery::RenderDeviceQuery((Spectre::Engine::RenderDeviceQuery *)(v4 + 176));
  Spectre::Engine::RenderDeviceQuery::RenderDeviceQuery((Spectre::Engine::GpuProfilerFrame *)((char *)this + 352));
  Spectre::Engine::RenderDeviceQuery::RenderDeviceQuery((Spectre::Engine::GpuProfilerFrame *)((char *)this + 528));
  Spectre::Engine::RenderDeviceQuery::RenderDeviceQuery((Spectre::Engine::GpuProfilerFrame *)((char *)this + 704));
  *((_QWORD *)this + 110) = 0LL;
  *((_QWORD *)this + 111) = 0LL;
  v5 = operator new(0x1D0uLL);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *((_QWORD *)this + 110) = v5;
  *((_QWORD *)this + 112) = 0LL;
  *((_QWORD *)this + 113) = 0LL;
  *((_QWORD *)this + 114) = a2;
  Spectre::Engine::GpuProfilerFrame::Result::Result((Spectre::Engine::GpuProfilerFrame *)((char *)this + 928));
  *((_DWORD *)this + 230) = 0;
  return this;
}
