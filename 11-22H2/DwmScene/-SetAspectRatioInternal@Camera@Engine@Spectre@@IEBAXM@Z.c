/*
 * XREFs of ?SetAspectRatioInternal@Camera@Engine@Spectre@@IEBAXM@Z @ 0x18005CFD0
 * Callers:
 *     ?UpdateAspectRatioAutomatic@Camera@Engine@Spectre@@IEBAXXZ @ 0x18005D88C (-UpdateAspectRatioAutomatic@Camera@Engine@Spectre@@IEBAXXZ.c)
 *     ?UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@IAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18006D03C (-UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre.c)
 * Callees:
 *     ?SetMatrixStagesChanged@Camera@Engine@Spectre@@IEBAXI@Z @ 0x18005D24C (-SetMatrixStagesChanged@Camera@Engine@Spectre@@IEBAXI@Z.c)
 */

void __fastcall Spectre::Engine::Camera::SetAspectRatioInternal(Spectre::Engine::Camera *this, float a2)
{
  if ( a2 != *((float *)this + 83) )
  {
    *((float *)this + 83) = a2;
    Spectre::Engine::Camera::SetMatrixStagesChanged(this, 2u);
  }
}
