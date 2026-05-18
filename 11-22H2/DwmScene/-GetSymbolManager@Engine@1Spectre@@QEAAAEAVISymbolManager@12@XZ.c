/*
 * XREFs of ?GetSymbolManager@Engine@1Spectre@@QEAAAEAVISymbolManager@12@XZ @ 0x180034800
 * Callers:
 *     ?UpdateGpuProfiler@RenderOutput@Engine@Spectre@@UEAAXH@Z @ 0x18002CDC0 (-UpdateGpuProfiler@RenderOutput@Engine@Spectre@@UEAAXH@Z.c)
 *     ?BeginCpuProfilerFrame@Engine@1Spectre@@IEAAXXZ @ 0x1800329B4 (-BeginCpuProfilerFrame@Engine@1Spectre@@IEAAXXZ.c)
 *     ?RenderPerformanceStats@Engine@1Spectre@@IEAAXXZ @ 0x180036478 (-RenderPerformanceStats@Engine@1Spectre@@IEAAXXZ.c)
 *     ?UpdateFrameTime@Engine@1Spectre@@IEAAXXZ @ 0x180036FD0 (-UpdateFrameTime@Engine@1Spectre@@IEAAXXZ.c)
 *     ?RenderSymbols@SceneNode@Engine@Spectre@@AEBAX_KAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18003D310 (-RenderSymbols@SceneNode@Engine@Spectre@@AEBAX_KAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@s.c)
 *     ?RenderSymbols@Light@Engine@Spectre@@MEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x180043300 (-RenderSymbols@Light@Engine@Spectre@@MEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K.c)
 *     ?RenderScene@Camera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005C210 (-RenderScene@Camera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AE.c)
 *     ?Render@GpuProfilingGrapher@Engine@Spectre@@UEAAXPEAVRenderDevice@23@W4GraphingOptions@IGpuProfilingGrapher@23@@Z @ 0x180074270 (-Render@GpuProfilingGrapher@Engine@Spectre@@UEAAXPEAVRenderDevice@23@W4GraphingOptions@IGpuProfi.c)
 *     ?RenderSymbolLine3D@Component@Engine@Spectre@@IEBAXUVector3@Math@Utils@3@0UColor@563@1M@Z @ 0x1800814B8 (-RenderSymbolLine3D@Component@Engine@Spectre@@IEBAXUVector3@Math@Utils@3@0UColor@563@1M@Z.c)
 *     ?RenderSymbols@Aimer@Engine@Spectre@@MEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x1800969C0 (-RenderSymbols@Aimer@Engine@Spectre@@MEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall __noreturn Spectre::Engine::Engine::GetSymbolManager(Spectre::Engine::Engine *this)
{
  unsigned int v1; // eax
  int v2; // r8d
  _QWORD v3[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v4[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  std::string::string(v4, (__int64)"SymbolManager not supported.");
  v1 = (unsigned int)std::string::string(
                       v3,
                       (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\so"
                                "urce\\engine\\engine.cpp");
  Spectre::Engine::EngineException::EngineException((unsigned int)pExceptionObject, v1, v2, (unsigned int)v4, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
