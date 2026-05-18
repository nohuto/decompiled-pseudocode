/*
 * XREFs of ?OnMeshRender@BaseShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_K@Z @ 0x18009B340
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ?GetLocalToWorld@SceneNode@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18003BFCC (-GetLocalToWorld@SceneNode@Engine@Spectre@@QEBA-AUMatrix@Math@Utils@3@XZ.c)
 *     ?GetWorldTransformMatrixInverse@SceneNode@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18003C7D8 (-GetWorldTransformMatrixInverse@SceneNode@Engine@Spectre@@QEBA-AUMatrix@Math@Utils@3@XZ.c)
 *     ?GetSceneNode@Component@Engine@Spectre@@QEBA?AV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@XZ @ 0x18004328C (-GetSceneNode@Component@Engine@Spectre@@QEBA-AV-$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@.c)
 *     ?HasColours@Mesh@Engine@Spectre@@QEBA_NXZ @ 0x180048A0C (-HasColours@Mesh@Engine@Spectre@@QEBA_NXZ.c)
 *     ?HasNormals@Mesh@Engine@Spectre@@QEBA_NXZ @ 0x180048A20 (-HasNormals@Mesh@Engine@Spectre@@QEBA_NXZ.c)
 *     ?HasUV0@Mesh@Engine@Spectre@@QEBA_NXZ @ 0x180048A5C (-HasUV0@Mesh@Engine@Spectre@@QEBA_NXZ.c)
 *     ?GetMesh@MeshInstance@Engine@Spectre@@QEBA?AV?$shared_ptr@VMesh@Engine@Spectre@@@std@@XZ @ 0x18004BA7C (-GetMesh@MeshInstance@Engine@Spectre@@QEBA-AV-$shared_ptr@VMesh@Engine@Spectre@@@std@@XZ.c)
 *     ?GetShaderProperties@MeshInstance@Engine@Spectre@@QEBA?AV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@_KW4EShaderPropertyScope@23@@Z @ 0x18004BAA0 (-GetShaderProperties@MeshInstance@Engine@Spectre@@QEBA-AV-$shared_ptr@VShaderPropertyBlock@Engin.c)
 *     ?Transpose@Matrix@Math@Utils@Spectre@@QEBAXAEAU1234@@Z @ 0x18005D800 (-Transpose@Matrix@Math@Utils@Spectre@@QEBAXAEAU1234@@Z.c)
 *     ?SetMatrix@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUMatrix@Math@Utils@3@@Z @ 0x1800854E4 (-SetMatrix@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ?SetScalar@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z @ 0x180085588 (-SetScalar@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::BaseShaderExtension::OnMeshRender(
        Spectre::Engine::BaseShaderExtension *this,
        const struct Spectre::Engine::MeshInstance *a2)
{
  Spectre::Engine::Mesh *v3; // rdx
  Spectre::Engine::Mesh *v4; // rdx
  unsigned __int64 v5; // r9
  __int64 *SceneNode; // rax
  Spectre::Engine::SceneNode **v7; // rax
  __int64 v8; // rbx
  __int64 v9; // [rsp+28h] [rbp-E0h] BYREF
  std::_Ref_count_base *v10; // [rsp+30h] [rbp-D8h]
  __int64 v11; // [rsp+38h] [rbp-D0h] BYREF
  std::_Ref_count_base *v12; // [rsp+40h] [rbp-C8h]
  Spectre::Engine::Mesh *v13; // [rsp+48h] [rbp-C0h] BYREF
  std::_Ref_count_base *v14; // [rsp+50h] [rbp-B8h]
  int v15; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v16; // [rsp+5Ch] [rbp-ACh]
  int v17; // [rsp+6Ch] [rbp-9Ch]
  __int128 v18; // [rsp+70h] [rbp-98h]
  int v19; // [rsp+80h] [rbp-88h]
  __int128 v20; // [rsp+84h] [rbp-84h]
  int v21; // [rsp+94h] [rbp-74h]
  __m128 v22[4]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v23[112]; // [rsp+D8h] [rbp-30h] BYREF

  Spectre::Engine::MeshInstance::GetMesh((__int64)a2, &v13);
  Spectre::Engine::Mesh::HasColours(v13);
  Spectre::Engine::Mesh::HasNormals(v3);
  Spectre::Engine::Mesh::HasUV0(v4);
  Spectre::Engine::MeshInstance::GetShaderProperties((__int64)a2, &v9, v5);
  if ( std::operator!=<Spectre::Engine::Scene>(&v9) )
  {
    SceneNode = Spectre::Engine::Component::GetSceneNode((__int64)a2, &v11);
    Spectre::Engine::SceneNode::GetLocalToWorld(*SceneNode, (__int64)v22);
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    v7 = (Spectre::Engine::SceneNode **)Spectre::Engine::Component::GetSceneNode((__int64)a2, &v11);
    Spectre::Engine::SceneNode::GetWorldTransformMatrixInverse(*v7, (__int64)v23);
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    v15 = 1065353216;
    v16 = 0LL;
    v17 = 1065353216;
    v18 = 0LL;
    v19 = 1065353216;
    v20 = 0LL;
    v21 = 1065353216;
    Spectre::Utils::Math::Matrix::Transpose(v22, (__m128 *)&v15);
    v8 = v9;
    Spectre::Engine::ShaderPropertyBlock::SetMatrix(
      v9,
      Spectre::Engine::ShaderConstants::kObject_WorldMatrix,
      (__int64)&v15);
    Spectre::Engine::ShaderPropertyBlock::SetMatrix(
      v8,
      Spectre::Engine::ShaderConstants::kObject_WorldMatrixInverseTranspose,
      (__int64)v23);
    Spectre::Engine::ShaderPropertyBlock::SetScalar(v8, Spectre::Engine::ShaderConstants::kObject_HasUV);
    Spectre::Engine::ShaderPropertyBlock::SetScalar(v8, Spectre::Engine::ShaderConstants::kObject_HasColor);
    Spectre::Engine::ShaderPropertyBlock::SetScalar(v8, Spectre::Engine::ShaderConstants::kObject_HasNormal);
  }
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
}
