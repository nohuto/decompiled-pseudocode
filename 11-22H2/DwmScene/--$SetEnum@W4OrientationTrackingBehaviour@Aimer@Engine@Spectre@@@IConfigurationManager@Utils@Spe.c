/*
 * XREFs of ??$SetEnum@W4OrientationTrackingBehaviour@Aimer@Engine@Spectre@@@IConfigurationManager@Utils@Spectre@@QEAAXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@W4OrientationTrackingBehaviour@Aimer@Engine@2@@Z @ 0x180016C00
 * Callers:
 *     ?RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z @ 0x1800195D8 (-RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Spectre::Utils::IConfigurationManager::SetEnum<enum Spectre::Engine::Aimer::OrientationTrackingBehaviour>(
        __int64 a1,
        __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a1 + 152LL))(a1, a2, 0LL, 1LL);
}
