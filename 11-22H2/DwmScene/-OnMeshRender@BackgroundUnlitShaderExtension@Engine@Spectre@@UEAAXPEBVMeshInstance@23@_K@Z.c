/*
 * XREFs of ?OnMeshRender@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_K@Z @ 0x180080EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ?GetLocalToWorld@SceneNode@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18003BFCC (-GetLocalToWorld@SceneNode@Engine@Spectre@@QEBA-AUMatrix@Math@Utils@3@XZ.c)
 *     ?GetSceneNode@Component@Engine@Spectre@@QEBA?AV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@XZ @ 0x18004328C (-GetSceneNode@Component@Engine@Spectre@@QEBA-AV-$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@.c)
 *     ?GetMesh@MeshInstance@Engine@Spectre@@QEBA?AV?$shared_ptr@VMesh@Engine@Spectre@@@std@@XZ @ 0x18004BA7C (-GetMesh@MeshInstance@Engine@Spectre@@QEBA-AV-$shared_ptr@VMesh@Engine@Spectre@@@std@@XZ.c)
 *     ?GetShaderProperties@MeshInstance@Engine@Spectre@@QEBA?AV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@_KW4EShaderPropertyScope@23@@Z @ 0x18004BAA0 (-GetShaderProperties@MeshInstance@Engine@Spectre@@QEBA-AV-$shared_ptr@VShaderPropertyBlock@Engin.c)
 *     ?Transpose@Matrix@Math@Utils@Spectre@@QEBAXAEAU1234@@Z @ 0x18005D800 (-Transpose@Matrix@Math@Utils@Spectre@@QEBAXAEAU1234@@Z.c)
 *     ?SetMatrix@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUMatrix@Math@Utils@3@@Z @ 0x1800854E4 (-SetMatrix@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::BackgroundUnlitShaderExtension::OnMeshRender(
        Spectre::Engine::BackgroundUnlitShaderExtension *this,
        const struct Spectre::Engine::MeshInstance *a2)
{
  unsigned __int64 v3; // r9
  __int64 *SceneNode; // rax
  __int64 v5; // [rsp+20h] [rbp-59h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-51h]
  int v7; // [rsp+30h] [rbp-49h] BYREF
  __int128 v8; // [rsp+34h] [rbp-45h]
  int v9; // [rsp+44h] [rbp-35h]
  __int128 v10; // [rsp+48h] [rbp-31h]
  int v11; // [rsp+58h] [rbp-21h]
  __int128 v12; // [rsp+5Ch] [rbp-1Dh]
  int v13; // [rsp+6Ch] [rbp-Dh]
  __int64 v14; // [rsp+70h] [rbp-9h] BYREF
  std::_Ref_count_base *v15; // [rsp+78h] [rbp-1h]
  __int64 v16; // [rsp+80h] [rbp+7h] BYREF
  std::_Ref_count_base *v17; // [rsp+88h] [rbp+Fh]
  __m128 v18[4]; // [rsp+90h] [rbp+17h] BYREF

  Spectre::Engine::MeshInstance::GetMesh((__int64)a2, &v16);
  Spectre::Engine::MeshInstance::GetShaderProperties((__int64)a2, &v5, v3);
  if ( std::operator!=<Spectre::Engine::Scene>(&v5) )
  {
    SceneNode = Spectre::Engine::Component::GetSceneNode((__int64)a2, &v14);
    Spectre::Engine::SceneNode::GetLocalToWorld(*SceneNode, (__int64)v18);
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    v7 = 1065353216;
    v8 = 0LL;
    v9 = 1065353216;
    v10 = 0LL;
    v11 = 1065353216;
    v12 = 0LL;
    v13 = 1065353216;
    Spectre::Utils::Math::Matrix::Transpose(v18, (__m128 *)&v7);
    Spectre::Engine::ShaderPropertyBlock::SetMatrix(v5);
  }
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
}
