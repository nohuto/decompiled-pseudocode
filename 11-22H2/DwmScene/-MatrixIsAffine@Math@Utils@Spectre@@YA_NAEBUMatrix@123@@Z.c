/*
 * XREFs of ?MatrixIsAffine@Math@Utils@Spectre@@YA_NAEBUMatrix@123@@Z @ 0x18004C1D8
 * Callers:
 *     ?LoadMesh@MeshInstance@Engine@Spectre@@AEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@PEAVRenderDevice@23@IV?$shared_ptr@VMesh@Engine@Spectre@@@5@IIPEBM22_N@Z @ 0x18004BD40 (-LoadMesh@MeshInstance@Engine@Spectre@@AEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre.c)
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Utils::Math::MatrixIsAffine(
        Spectre::Utils::Math *this,
        const struct Spectre::Utils::Math::Matrix *a2)
{
  return *((float *)this + 3) == 0.0
      && *((float *)this + 7) == 0.0
      && *((float *)this + 11) == 0.0
      && *((float *)this + 15) == 1.0;
}
