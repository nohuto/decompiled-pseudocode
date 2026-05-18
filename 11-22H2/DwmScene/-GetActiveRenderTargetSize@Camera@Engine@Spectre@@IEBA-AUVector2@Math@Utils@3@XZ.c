/*
 * XREFs of ?GetActiveRenderTargetSize@Camera@Engine@Spectre@@IEBA?AUVector2@Math@Utils@3@XZ @ 0x18005B994
 * Callers:
 *     ?Begin@Camera@Engine@Spectre@@MEBAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005A410 (-Begin@Camera@Engine@Spectre@@MEBAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV-$sh.c)
 * Callees:
 *     ?UpdateMatrixArray@Camera@Engine@Spectre@@IEBAXXZ @ 0x18005D910 (-UpdateMatrixArray@Camera@Engine@Spectre@@IEBAXXZ.c)
 *     ?UpdateViewportMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ @ 0x18005E0A4 (-UpdateViewportMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ.c)
 */

_QWORD *__fastcall Spectre::Engine::Camera::GetActiveRenderTargetSize(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  if ( Spectre::Engine::Camera::UpdateViewportMatrixStage((Spectre::Engine::Camera *)a1) )
    Spectre::Engine::Camera::UpdateMatrixArray((Spectre::Engine::Camera *)a1);
  result = a2;
  *a2 = *(_QWORD *)(a1 + 1604);
  return result;
}
