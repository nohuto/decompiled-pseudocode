/*
 * XREFs of ?SetOrthographicSize@Camera@Engine@Spectre@@QEAAXM@Z @ 0x18005D2BC
 * Callers:
 *     ?UpdateShadowingFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x18006DDB4 (-UpdateShadowingFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engi.c)
 * Callees:
 *     ?SetMatrixStagesChanged@Camera@Engine@Spectre@@IEBAXI@Z @ 0x18005D24C (-SetMatrixStagesChanged@Camera@Engine@Spectre@@IEBAXI@Z.c)
 */

void __fastcall Spectre::Engine::Camera::SetOrthographicSize(Spectre::Engine::Camera *this, float a2)
{
  if ( a2 != *((float *)this + 85) )
  {
    *((float *)this + 85) = a2;
    Spectre::Engine::Camera::SetMatrixStagesChanged(this, 2);
  }
}
