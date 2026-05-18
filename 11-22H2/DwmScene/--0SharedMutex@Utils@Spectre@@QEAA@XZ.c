/*
 * XREFs of ??0SharedMutex@Utils@Spectre@@QEAA@XZ @ 0x1800E0CE0
 * Callers:
 *     ??0QueryPool@RenderDevice@Engine@Spectre@@QEAA@AEAV123@@Z @ 0x1800254A4 (--0QueryPool@RenderDevice@Engine@Spectre@@QEAA@AEAV123@@Z.c)
 *     ??0Lockable@Engine@Spectre@@QEAA@W4ThreadingMode@012@@Z @ 0x180029EDC (--0Lockable@Engine@Spectre@@QEAA@W4ThreadingMode@012@@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@VCpuProfiler@Engine@Spectre@@@std@@QEAA@XZ @ 0x18002D564 (--$-0$$V@-$_Ref_count_obj2@VCpuProfiler@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ??0Scene@Engine@Spectre@@AEAA@PEAV112@@Z @ 0x18003FB60 (--0Scene@Engine@Spectre@@AEAA@PEAV112@@Z.c)
 *     ??0Scene@Engine@Spectre@@AEAA@PEAV112@W4ThreadingMode@Lockable@12@@Z @ 0x18003FC0C (--0Scene@Engine@Spectre@@AEAA@PEAV112@W4ThreadingMode@Lockable@12@@Z.c)
 *     ??0ShaderFamily@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VShaderManager@Engine@Spectre@@@4@V?$shared_ptr@VIShaderExtension@Engine@Spectre@@@4@@Z @ 0x18005F804 (--0ShaderFamily@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@st.c)
 *     ??0FramesData@GpuProfiler@Engine@Spectre@@QEAA@AEAVRenderDevice@23@@Z @ 0x1800A0A04 (--0FramesData@GpuProfiler@Engine@Spectre@@QEAA@AEAVRenderDevice@23@@Z.c)
 *     ??0MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@$$QEAV0123@@Z @ 0x1800A2640 (--0MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@$$QEAV0123@@Z.c)
 *     ??0MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@W4MarkerType@123@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@1AEAVRenderDevice@23@@Z @ 0x1800A2708 (--0MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@W4MarkerType@123@V-$shared_ptr@VCommand.c)
 * Callees:
 *     ??$make_unique@Vimpl@SharedMutex@Utils@Spectre@@$$V$0A@@std@@YA?AV?$unique_ptr@Vimpl@SharedMutex@Utils@Spectre@@U?$default_delete@Vimpl@SharedMutex@Utils@Spectre@@@std@@@0@XZ @ 0x1800E0C50 (--$make_unique@Vimpl@SharedMutex@Utils@Spectre@@$$V$0A@@std@@YA-AV-$unique_ptr@Vimpl@SharedMutex.c)
 */

Spectre::Utils::SharedMutex *__fastcall Spectre::Utils::SharedMutex::SharedMutex(Spectre::Utils::SharedMutex *this)
{
  std::make_unique<Spectre::Utils::SharedMutex::impl,,0>(this);
  return this;
}
