/*
 * XREFs of ?HasNormals@Mesh@Engine@Spectre@@QEBA_NXZ @ 0x180048A20
 * Callers:
 *     ?ComputeRequiredData@Mesh@Engine@Spectre@@QEAAXI@Z @ 0x1800483C0 (-ComputeRequiredData@Mesh@Engine@Spectre@@QEAAXI@Z.c)
 *     ?OnMeshRender@BaseShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_K@Z @ 0x18009B340 (-OnMeshRender@BaseShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Engine::Mesh::HasNormals(Spectre::Engine::Mesh *this)
{
  return std::operator!=<Spectre::Engine::Scene>((_QWORD *)this + 20);
}
