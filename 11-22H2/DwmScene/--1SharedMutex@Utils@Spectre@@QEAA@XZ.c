/*
 * XREFs of ??1SharedMutex@Utils@Spectre@@QEAA@XZ @ 0x1800E0D30
 * Callers:
 *     ??1Lockable@Engine@Spectre@@QEAA@XZ @ 0x180025B30 (--1Lockable@Engine@Spectre@@QEAA@XZ.c)
 *     ??1Mutex@Engine@Spectre@@QEAA@XZ @ 0x180025B60 (--1Mutex@Engine@Spectre@@QEAA@XZ.c)
 *     ??1QueryPool@RenderDevice@Engine@Spectre@@UEAA@XZ @ 0x180025B6C (--1QueryPool@RenderDevice@Engine@Spectre@@UEAA@XZ.c)
 *     ??1CpuProfiler@Engine@Spectre@@QEAA@XZ @ 0x180031C30 (--1CpuProfiler@Engine@Spectre@@QEAA@XZ.c)
 *     ??1Scene@Engine@Spectre@@QEAA@XZ @ 0x18003FFBC (--1Scene@Engine@Spectre@@QEAA@XZ.c)
 *     ??1ShaderFamily@Engine@Spectre@@QEAA@XZ @ 0x18005FC40 (--1ShaderFamily@Engine@Spectre@@QEAA@XZ.c)
 *     ??1FramesData@GpuProfiler@Engine@Spectre@@QEAA@XZ @ 0x1800A0C9C (--1FramesData@GpuProfiler@Engine@Spectre@@QEAA@XZ.c)
 *     ??1MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@XZ @ 0x1800A0D94 (--1MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Spectre::Utils::SharedMutex::~SharedMutex(std::shared_timed_mutex **this)
{
  std::unique_ptr<Spectre::Utils::SharedMutex::impl>::~unique_ptr<Spectre::Utils::SharedMutex::impl>(this);
}
