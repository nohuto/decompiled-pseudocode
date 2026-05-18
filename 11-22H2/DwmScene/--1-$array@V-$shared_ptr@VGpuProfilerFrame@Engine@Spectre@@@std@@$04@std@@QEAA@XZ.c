/*
 * XREFs of ??1?$array@V?$shared_ptr@VGpuProfilerFrame@Engine@Spectre@@@std@@$04@std@@QEAA@XZ @ 0x1800A0BA4
 * Callers:
 *     _Spectre::Engine::GpuProfiler::FramesData::FramesData_::_1_::dtor$3 @ 0x1800EB22F (_Spectre--Engine--GpuProfiler--FramesData--FramesData_--_1_--dtor$3.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18000B4B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall std::array<std::shared_ptr<Spectre::Engine::GpuProfilerFrame>,5>::~array<std::shared_ptr<Spectre::Engine::GpuProfilerFrame>,5>(
        char *a1)
{
  `eh vector destructor iterator'(
    a1,
    16LL,
    5LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::DeviceVertexLayout>::~shared_ptr<Spectre::Engine::DeviceVertexLayout>);
}
