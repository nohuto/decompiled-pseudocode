/*
 * XREFs of ?SetVertexCount@Mesh@Engine@Spectre@@QEAAXI@Z @ 0x180049D14
 * Callers:
 *     ?SetData@SpectreMesh@@UEAAJAEBUDataParameters@ISpectreMesh@@@Z @ 0x180013AF0 (-SetData@SpectreMesh@@UEAAJAEBUDataParameters@ISpectreMesh@@@Z.c)
 *     ?CreateFullscreenQuad@MeshHelper@Engine@Spectre@@SA?AV?$shared_ptr@VMesh@Engine@Spectre@@@std@@PEAV223@@Z @ 0x18008CD80 (-CreateFullscreenQuad@MeshHelper@Engine@Spectre@@SA-AV-$shared_ptr@VMesh@Engine@Spectre@@@std@@P.c)
 *     Spectre::Engine::_anonymous_namespace_::CreateMesh @ 0x18008CF38 (Spectre--Engine--_anonymous_namespace_--CreateMesh.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Mesh::SetVertexCount(Spectre::Engine::Mesh *this, int a2)
{
  if ( !*((_DWORD *)this + 31) )
    *((_DWORD *)this + 31) = a2;
  *((_DWORD *)this + 30) = a2;
}
