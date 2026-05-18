/*
 * XREFs of ?MatrixIsFinite@Math@Utils@Spectre@@YA_NAEBUMatrix@123@@Z @ 0x18004C220
 * Callers:
 *     ?LoadMesh@MeshInstance@Engine@Spectre@@AEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@PEAVRenderDevice@23@IV?$shared_ptr@VMesh@Engine@Spectre@@@5@IIPEBM22_N@Z @ 0x18004BD40 (-LoadMesh@MeshInstance@Engine@Spectre@@AEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre.c)
 * Callees:
 *     _o__fdclass_0 @ 0x18000BF6A (_o__fdclass_0.c)
 */

bool __fastcall Spectre::Utils::Math::MatrixIsFinite(
        Spectre::Utils::Math *this,
        const struct Spectre::Utils::Math::Matrix *a2)
{
  float v2; // xmm0_4
  unsigned __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax

  v2 = *(float *)this;
  v3 = 1LL;
  v4 = 15LL;
  do
  {
    v5 = v3 >> 2;
    v6 = v3++ & 3;
    v2 = v2 + *((float *)this + 4 * v5 + v6);
    --v4;
  }
  while ( v4 );
  return o__fdclass_0(v2) <= 0;
}
