/*
 * XREFs of ?GetIndexCount@Mesh@Engine@Spectre@@QEBAIXZ @ 0x1800488F4
 * Callers:
 *     ?ComputeNormals@Mesh@Engine@Spectre@@IEAAXPEAV223@@Z @ 0x180047FEC (-ComputeNormals@Mesh@Engine@Spectre@@IEAAXPEAV223@@Z.c)
 *     ?ComputeNormalsAndTangents@Mesh@Engine@Spectre@@IEAAXPEAV223@_N@Z @ 0x1800481C0 (-ComputeNormalsAndTangents@Mesh@Engine@Spectre@@IEAAXPEAV223@_N@Z.c)
 *     ?ComputeTangents@Mesh@Engine@Spectre@@IEAAXPEAV223@_N@Z @ 0x180048514 (-ComputeTangents@Mesh@Engine@Spectre@@IEAAXPEAV223@_N@Z.c)
 *     ?LoadMesh@MeshInstance@Engine@Spectre@@AEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@PEAVRenderDevice@23@IV?$shared_ptr@VMesh@Engine@Spectre@@@5@IIPEBM22_N@Z @ 0x18004BD40 (-LoadMesh@MeshInstance@Engine@Spectre@@AEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::Mesh::GetIndexCount(Spectre::Engine::Mesh *this)
{
  return *((unsigned int *)this + 28);
}
