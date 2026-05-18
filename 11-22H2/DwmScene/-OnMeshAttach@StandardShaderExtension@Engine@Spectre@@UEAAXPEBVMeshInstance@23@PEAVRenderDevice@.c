/*
 * XREFs of ?OnMeshAttach@StandardShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@PEAVRenderDevice@23@@Z @ 0x18007E3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ?TextureExists@Material@Engine@Spectre@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180044AAC (-TextureExists@Material@Engine@Spectre@@QEBA_NAEBV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     ?ComputeRequiredData@Mesh@Engine@Spectre@@QEAAXI@Z @ 0x1800483C0 (-ComputeRequiredData@Mesh@Engine@Spectre@@QEAAXI@Z.c)
 *     ?GetMaterial@MeshInstance@Engine@Spectre@@QEBA?AV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@XZ @ 0x18004B964 (-GetMaterial@MeshInstance@Engine@Spectre@@QEBA-AV-$shared_ptr@VMaterial@Engine@Spectre@@@std@@XZ.c)
 *     ?GetMesh@MeshInstance@Engine@Spectre@@QEBA?AV?$shared_ptr@VMesh@Engine@Spectre@@@std@@XZ @ 0x18004BA7C (-GetMesh@MeshInstance@Engine@Spectre@@QEBA-AV-$shared_ptr@VMesh@Engine@Spectre@@@std@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::StandardShaderExtension::OnMeshAttach(
        Spectre::Engine::StandardShaderExtension *this,
        const struct Spectre::Engine::MeshInstance *a2,
        struct Spectre::Engine::RenderDevice *a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  Spectre::Engine::Engine *Engine; // rax
  struct Spectre::Utils::IConfigurationManager *Configuration; // rax
  Spectre::Engine::Mesh **Mesh; // rax
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v13; // [rsp+38h] [rbp-10h]

  Spectre::Engine::MeshInstance::GetMaterial((__int64)a2, (__int64)&v10);
  if ( (unsigned __int8)Spectre::Engine::Material::TextureExists(v10, v5, v6) )
  {
    Engine = Spectre::Engine::RenderDevice::GetEngine(a3);
    Configuration = Spectre::Engine::Engine::GetConfiguration(Engine, 1);
    (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration
                                                                                           + 64LL))(
      Configuration,
      &Spectre::Engine::ConfigurationProperties::kRenderer_CompatibilityGLTFComplianceEnabled,
      0LL);
  }
  Mesh = (Spectre::Engine::Mesh **)Spectre::Engine::MeshInstance::GetMesh((__int64)a2, &v12);
  Spectre::Engine::Mesh::ComputeRequiredData(*Mesh);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
}
