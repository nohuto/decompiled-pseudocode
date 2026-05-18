/*
 * XREFs of ?GetViewportActive@Camera@Engine@Spectre@@IEBA?AU?$ViewportBounds@UVector3@Math@Utils@Spectre@@@123@XZ @ 0x18005BBC0
 * Callers:
 *     ?Begin@Camera@Engine@Spectre@@MEBAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005A410 (-Begin@Camera@Engine@Spectre@@MEBAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV-$sh.c)
 *     ?UpdateAspectRatioAutomatic@Camera@Engine@Spectre@@IEBAXXZ @ 0x18005D88C (-UpdateAspectRatioAutomatic@Camera@Engine@Spectre@@IEBAXXZ.c)
 * Callees:
 *     ?UpdateMatrixArray@Camera@Engine@Spectre@@IEBAXXZ @ 0x18005D910 (-UpdateMatrixArray@Camera@Engine@Spectre@@IEBAXXZ.c)
 *     ?UpdateViewportMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ @ 0x18005E0A4 (-UpdateViewportMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ.c)
 */

__int64 __fastcall Spectre::Engine::Camera::GetViewportActive(Spectre::Engine::Camera *this, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // xmm1_8

  if ( Spectre::Engine::Camera::UpdateViewportMatrixStage(this) )
    Spectre::Engine::Camera::UpdateMatrixArray(this);
  result = a2;
  v5 = *(_QWORD *)((char *)this + 1588);
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 1572);
  *(_QWORD *)(a2 + 16) = v5;
  return result;
}
