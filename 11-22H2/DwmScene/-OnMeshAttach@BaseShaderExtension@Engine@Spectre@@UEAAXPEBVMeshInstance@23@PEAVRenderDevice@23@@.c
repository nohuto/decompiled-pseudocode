/*
 * XREFs of ?OnMeshAttach@BaseShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@PEAVRenderDevice@23@@Z @ 0x18009B300
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ComputeRequiredData@Mesh@Engine@Spectre@@QEAAXI@Z @ 0x1800483C0 (-ComputeRequiredData@Mesh@Engine@Spectre@@QEAAXI@Z.c)
 *     ?GetMesh@MeshInstance@Engine@Spectre@@QEBA?AV?$shared_ptr@VMesh@Engine@Spectre@@@std@@XZ @ 0x18004BA7C (-GetMesh@MeshInstance@Engine@Spectre@@QEBA-AV-$shared_ptr@VMesh@Engine@Spectre@@@std@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::BaseShaderExtension::OnMeshAttach(
        Spectre::Engine::BaseShaderExtension *this,
        const struct Spectre::Engine::MeshInstance *a2,
        struct Spectre::Engine::RenderDevice *a3)
{
  Spectre::Engine::Mesh **Mesh; // rax
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v5; // [rsp+28h] [rbp-10h]

  Mesh = (Spectre::Engine::Mesh **)Spectre::Engine::MeshInstance::GetMesh((__int64)a2, &v4);
  Spectre::Engine::Mesh::ComputeRequiredData(*Mesh);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
}
