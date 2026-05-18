/*
 * XREFs of ??$GetEnum@W4EGeometryNormalDisplayMode@Engine@Spectre@@@IConfigurationManager@Utils@Spectre@@QEAA?AW4EGeometryNormalDisplayMode@Engine@2@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@W4342@@Z @ 0x180062AFC
 * Callers:
 *     ?UpdateDebugConstants@ViewerEngine@Engine@Spectre@@AEAAXAEAVIRenderOutput@23@H@Z @ 0x180069CB0 (-UpdateDebugConstants@ViewerEngine@Engine@Spectre@@AEAAXAEAVIRenderOutput@23@H@Z.c)
 *     ?UpdateKeyboardInput@ViewerEngine@Engine@Spectre@@AEAA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBVInput@23@@Z @ 0x18006AF64 (-UpdateKeyboardInput@ViewerEngine@Engine@Spectre@@AEAA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Utils::IConfigurationManager::GetEnum<enum Spectre::Engine::EGeometryNormalDisplayMode>(
        __int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)a1 + 72LL))(
           a1,
           &Spectre::Engine::ConfigurationProperties::kRenderer_GeometryNormalMode);
}
