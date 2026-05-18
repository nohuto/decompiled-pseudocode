/*
 * XREFs of ?HasUV0@Mesh@Engine@Spectre@@QEBA_NXZ @ 0x180048A5C
 * Callers:
 *     ?OnMeshRender@BaseShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_K@Z @ 0x18009B340 (-OnMeshRender@BaseShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Engine::Mesh::HasUV0(Spectre::Engine::Mesh *this)
{
  return std::operator!=<Spectre::Engine::Scene>((_QWORD *)this + 30);
}
