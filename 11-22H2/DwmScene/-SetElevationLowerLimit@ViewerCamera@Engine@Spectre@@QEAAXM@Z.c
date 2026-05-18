/*
 * XREFs of ?SetElevationLowerLimit@ViewerCamera@Engine@Spectre@@QEAAXM@Z @ 0x180092FA0
 * Callers:
 *     ?UpdateCameraFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$unordered_set@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@5@@Z @ 0x180068DE8 (-UpdateCameraFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@.c)
 * Callees:
 *     ?Clamp@Math@Utils@Spectre@@YAMMMM@Z @ 0x18001112C (-Clamp@Math@Utils@Spectre@@YAMMMM@Z.c)
 */

void __fastcall Spectre::Engine::ViewerCamera::SetElevationLowerLimit(
        Spectre::Engine::ViewerCamera *this,
        float a2,
        __int64 a3,
        float a4)
{
  *((float *)this + 455) = Spectre::Utils::Math::Clamp(this, -1.5533431, 1.5533431, a4);
}
