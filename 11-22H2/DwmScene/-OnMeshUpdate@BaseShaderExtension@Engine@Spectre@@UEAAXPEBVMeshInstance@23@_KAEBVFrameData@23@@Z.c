/*
 * XREFs of ?OnMeshUpdate@BaseShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_KAEBVFrameData@23@@Z @ 0x18009B520
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetRenderingModeActive@Material@Engine@Spectre@@QEBA?AW4ERenderingMode@23@XZ @ 0x1800443CC (-GetRenderingModeActive@Material@Engine@Spectre@@QEBA-AW4ERenderingMode@23@XZ.c)
 *     ?SetOption@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x180044658 (-SetOption@Material@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     ?SetSceneAttribute@Material@Engine@Spectre@@QEAAXW4ESceneAttribute@23@_N@Z @ 0x180044888 (-SetSceneAttribute@Material@Engine@Spectre@@QEAAXW4ESceneAttribute@23@_N@Z.c)
 *     ?GetMaterial@MeshInstance@Engine@Spectre@@QEBA?AV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@_K@Z @ 0x18004B988 (-GetMaterial@MeshInstance@Engine@Spectre@@QEBA-AV-$shared_ptr@VMaterial@Engine@Spectre@@@std@@_K.c)
 */

void __fastcall Spectre::Engine::BaseShaderExtension::OnMeshUpdate(
        Spectre::Engine::BaseShaderExtension *this,
        const struct Spectre::Engine::MeshInstance *a2,
        unsigned __int64 a3,
        const struct Spectre::Engine::FrameData *a4)
{
  int RenderingModeActive; // ebx
  char v5; // r8
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-10h]

  Spectre::Engine::MeshInstance::GetMaterial((__int64)a2, &v6, a3);
  RenderingModeActive = Spectre::Engine::Material::GetRenderingModeActive(v6);
  Spectre::Engine::Material::SetSceneAttribute(v6, 9, (unsigned int)(RenderingModeActive - 1) <= 1);
  Spectre::Engine::Material::SetSceneAttribute(v6, 8, (unsigned int)(RenderingModeActive - 2) <= 1);
  v5 = RenderingModeActive == 1 || RenderingModeActive == 2;
  Spectre::Engine::Material::SetOption(v6, (__int64)&Spectre::Engine::ShaderConstants::kOption_AlphaMask, v5);
  Spectre::Engine::Material::SetOption(
    v6,
    (__int64)&Spectre::Engine::ShaderConstants::kOption_AlphaBlend,
    (unsigned int)(RenderingModeActive - 2) <= 1);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
}
