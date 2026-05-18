/*
 * XREFs of ??1?$pair@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$shared_ptr@VMesh@Engine@Spectre@@@2@@std@@QEAA@XZ @ 0x180071F04
 * Callers:
 *     ??$_Destroy_range@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@YAXPEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@QEAU1234@AEAV?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@0@@Z @ 0x1800815D0 (--$_Destroy_range@V-$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@.c)
 *     ?AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@W4EShaderPropertyLinkage@23@@Z @ 0x180082518 (-AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA-AW4ShaderProperty@23@AEBUShaderPropertyDe.c)
 *     ?SetResources@ImageProcessingEffect@Engine@Spectre@@UEAAXV?$shared_ptr@VImageProcessingCamera@Engine@Spectre@@@std@@V?$shared_ptr@VSampler@Engine@Spectre@@@5@V?$shared_ptr@VDepthBuffer@Engine@Spectre@@@5@V?$function@$$A6A?AU?$pair@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$shared_ptr@VMesh@Engine@Spectre@@@2@@std@@XZ@5@V?$shared_ptr@VMaterial@Engine@Spectre@@@5@@Z @ 0x180097EB0 (-SetResources@ImageProcessingEffect@Engine@Spectre@@UEAAXV-$shared_ptr@VImageProcessingCamera@En.c)
 *     _Spectre::Engine::ShaderPropertyLayout::AddProperty_::_1_::dtor$13 @ 0x1800EA295 (_Spectre--Engine--ShaderPropertyLayout--AddProperty_--_1_--dtor$13.c)
 *     _Spectre::Engine::ImageProcessingEffect::SetResources_::_1_::dtor$10 @ 0x1800EACD5 (_Spectre--Engine--ImageProcessingEffect--SetResources_--_1_--dtor$10.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::pair<std::shared_ptr<Spectre::Engine::SceneNode>,std::shared_ptr<Spectre::Engine::Mesh>>::~pair<std::shared_ptr<Spectre::Engine::SceneNode>,std::shared_ptr<Spectre::Engine::Mesh>>(
        __int64 a1)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = *(std::_Ref_count_base **)(a1 + 24);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
