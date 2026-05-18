/*
 * XREFs of ?SetMaterial@MeshInstance@Engine@Spectre@@QEAAXV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z @ 0x18004C98C
 * Callers:
 *     ?SetMaterial@SpectreMeshComponent@@UEAAJPEAUISpectreMaterial@@@Z @ 0x1800144E0 (-SetMaterial@SpectreMeshComponent@@UEAAJPEAUISpectreMaterial@@@Z.c)
 *     ??RMaterialLoadedFnc@MeshInstance@Engine@Spectre@@UEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@V?$shared_ptr@VRendererResource@Engine@Spectre@@@5@@Z @ 0x18004AF60 (--RMaterialLoadedFnc@MeshInstance@Engine@Spectre@@UEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Ut.c)
 *     ?FillBackground@ViewerEngine@Engine@Spectre@@MEAAXAEAVShaderManager@23@AEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x1800666A0 (-FillBackground@ViewerEngine@Engine@Spectre@@MEAAXAEAVShaderManager@23@AEBV-$shared_ptr@VScene@E.c)
 *     ?Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z @ 0x180072750 (-Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z.c)
 *     ?Display@ImageProcessingManager@Engine@Spectre@@IEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@5@@Z @ 0x180072F50 (-Display@ImageProcessingManager@Engine@Spectre@@IEAAXAEBV-$shared_ptr@VIRenderOutput@Engine@Spec.c)
 *     ?ApplyBloom@ImageProcessingEffectBloom@Engine@Spectre@@MEAAXPEAVRenderDevice@23@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V?$shared_ptr@VTexture@Engine@Spectre@@@6@2@Z @ 0x180095DA0 (-ApplyBloom@ImageProcessingEffectBloom@Engine@Spectre@@MEAAXPEAVRenderDevice@23@AEBV-$shared_ptr.c)
 *     ?SetResources@ImageProcessingEffect@Engine@Spectre@@UEAAXV?$shared_ptr@VImageProcessingCamera@Engine@Spectre@@@std@@V?$shared_ptr@VSampler@Engine@Spectre@@@5@V?$shared_ptr@VDepthBuffer@Engine@Spectre@@@5@V?$function@$$A6A?AU?$pair@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$shared_ptr@VMesh@Engine@Spectre@@@2@@std@@XZ@5@V?$shared_ptr@VMaterial@Engine@Spectre@@@5@@Z @ 0x180097EB0 (-SetResources@ImageProcessingEffect@Engine@Spectre@@UEAAXV-$shared_ptr@VImageProcessingCamera@En.c)
 *     ?ApplyBlur@ImageProcessingEffectBlur@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@V?$shared_ptr@VTexture@Engine@Spectre@@@5@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@5@@Z @ 0x18009C150 (-ApplyBlur@ImageProcessingEffectBlur@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@.c)
 *     ?ApplyDownsample@ImageProcessingEffectBlur@Engine@Spectre@@MEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@V45@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@5@@Z @ 0x18009C400 (-ApplyDownsample@ImageProcessingEffectBlur@Engine@Spectre@@MEAA-AV-$shared_ptr@VTexture@Engine@S.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?SetMaterial@MeshInstance@Engine@Spectre@@QEAAX_KV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z @ 0x18004C9D0 (-SetMaterial@MeshInstance@Engine@Spectre@@QEAAX_KV-$shared_ptr@VMaterial@Engine@Spectre@@@std@@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::MeshInstance::SetMaterial(__int64 a1, _QWORD *a2)
{
  Spectre::Engine::Component *v3; // r9
  std::_Ref_count_base *v4; // rcx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v5, a2);
  Spectre::Engine::MeshInstance::SetMaterial(v3);
  v4 = (std::_Ref_count_base *)a2[1];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
}
