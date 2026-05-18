/*
 * XREFs of ?Instance@PerformanceManager@Engine@Spectre@@SAAEAV123@XZ @ 0x180070B14
 * Callers:
 *     ?GetStatistics@RenderDevice@Engine@Spectre@@UEAAXAEAUStatistics@23@@Z @ 0x180026870 (-GetStatistics@RenderDevice@Engine@Spectre@@UEAAXAEAUStatistics@23@@Z.c)
 *     ?UpdateFrameRate@RenderDevice@Engine@Spectre@@IEAAXM@Z @ 0x1800271CC (-UpdateFrameRate@RenderDevice@Engine@Spectre@@IEAAXM@Z.c)
 *     ??0MemoryBlock@PerformanceManager@Engine@Spectre@@QEAA@W4Category@123@_J@Z @ 0x180029158 (--0MemoryBlock@PerformanceManager@Engine@Spectre@@QEAA@W4Category@123@_J@Z.c)
 *     ??0RendererResource@Engine@Spectre@@QEAA@W4EType@012@W4Category@PerformanceManager@12@@Z @ 0x18002918C (--0RendererResource@Engine@Spectre@@QEAA@W4EType@012@W4Category@PerformanceManager@12@@Z.c)
 *     ??1MemoryBlock@PerformanceManager@Engine@Spectre@@QEAA@XZ @ 0x1800292BC (--1MemoryBlock@PerformanceManager@Engine@Spectre@@QEAA@XZ.c)
 *     ??1RendererResource@Engine@Spectre@@UEAA@XZ @ 0x1800292E8 (--1RendererResource@Engine@Spectre@@UEAA@XZ.c)
 *     ?SetMemoryTrackingData@RendererResource@Engine@Spectre@@IEAAX_KW4Category@PerformanceManager@23@@Z @ 0x180029730 (-SetMemoryTrackingData@RendererResource@Engine@Spectre@@IEAAX_KW4Category@PerformanceManager@23@.c)
 *     ?LogInstanceCounts@Engine@1Spectre@@AEBAXXZ @ 0x180034F18 (-LogInstanceCounts@Engine@1Spectre@@AEBAXXZ.c)
 *     ?UpdateStatistics@Engine@1Spectre@@IEAAXXZ @ 0x180037D40 (-UpdateStatistics@Engine@1Spectre@@IEAAXXZ.c)
 *     ?Render@Mesh@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K@Z @ 0x180048C04 (-Render@Mesh@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K@Z.c)
 *     ?SubmitRenderState@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderState@Engine@Spectre@@@std@@IUVector4@Math@Utils@4@E@Z @ 0x1800D1480 (-SubmitRenderState@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderState@Eng.c)
 *     ?SubmitShaderTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXW4EShaderType@34@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@I@Z @ 0x1800D2530 (-SubmitShaderTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXW4EShaderType@34@AEBV-$shared_p.c)
 *     ?SubmitUpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VArrayBuffer@Engine@Spectre@@@std@@PEBXI@Z @ 0x1800D27D0 (-SubmitUpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VArrayBuffer@En.c)
 *     ?SubmitUpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VConstantBuffer@Engine@Spectre@@@std@@PEBXI@Z @ 0x1800D2900 (-SubmitUpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VConstantBuffer.c)
 * Callees:
 *     <none>
 */

struct Spectre::Engine::PerformanceManager *Spectre::Engine::PerformanceManager::Instance(void)
{
  return (struct Spectre::Engine::PerformanceManager *)&unk_1801D3428;
}
