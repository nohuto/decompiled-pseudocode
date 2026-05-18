/*
 * XREFs of ??$GetEnum@W4EGeometryDebugDisplayMode@Engine@Spectre@@@IConfigurationManager@Utils@Spectre@@QEAA?AW4EGeometryDebugDisplayMode@Engine@2@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@W4342@@Z @ 0x180062AD4
 * Callers:
 *     ?ApplyImageProcessing@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180064B30 (-ApplyImageProcessing@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@.c)
 *     ?UpdateDebugConstants@ViewerEngine@Engine@Spectre@@AEAAXAEAVIRenderOutput@23@H@Z @ 0x180069CB0 (-UpdateDebugConstants@ViewerEngine@Engine@Spectre@@AEAAXAEAVIRenderOutput@23@H@Z.c)
 *     ?UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VScene@Engine@Spectre@@@5@@Z @ 0x18006BE30 (-UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Utils::IConfigurationManager::GetEnum<enum Spectre::Engine::EGeometryDebugDisplayMode>(
        __int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)a1 + 72LL))(
           a1,
           &Spectre::Engine::ConfigurationProperties::kRenderer_GeometryDisplayMode,
           0LL);
}
