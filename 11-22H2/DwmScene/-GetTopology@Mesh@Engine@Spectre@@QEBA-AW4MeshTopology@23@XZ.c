/*
 * XREFs of ?GetTopology@Mesh@Engine@Spectre@@QEBA?AW4MeshTopology@23@XZ @ 0x1800489B8
 * Callers:
 *     ?ComputeNormals@Mesh@Engine@Spectre@@IEAAXPEAV223@@Z @ 0x180047FEC (-ComputeNormals@Mesh@Engine@Spectre@@IEAAXPEAV223@@Z.c)
 *     ?ComputeNormalsAndTangents@Mesh@Engine@Spectre@@IEAAXPEAV223@_N@Z @ 0x1800481C0 (-ComputeNormalsAndTangents@Mesh@Engine@Spectre@@IEAAXPEAV223@_N@Z.c)
 *     ?ComputeTangents@Mesh@Engine@Spectre@@IEAAXPEAV223@_N@Z @ 0x180048514 (-ComputeTangents@Mesh@Engine@Spectre@@IEAAXPEAV223@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::Mesh::GetTopology(__int64 a1)
{
  return *(unsigned int *)(a1 + 300);
}
