/*
 * XREFs of ?SetMesh@MeshInstance@Engine@Spectre@@QEAAXV?$shared_ptr@VMesh@Engine@Spectre@@@std@@@Z @ 0x180014620
 * Callers:
 *     ?Initialize@SpectreMeshComponent@@IEAAXXZ @ 0x1800143FC (-Initialize@SpectreMeshComponent@@IEAAXXZ.c)
 *     ?SetMesh@SpectreMeshComponent@@UEAAJPEAUISpectreMesh@@@Z @ 0x180014650 (-SetMesh@SpectreMeshComponent@@UEAAJPEAUISpectreMesh@@@Z.c)
 *     ?Shutdown@MeshInstance@Engine@Spectre@@UEAAXXZ @ 0x18004CB30 (-Shutdown@MeshInstance@Engine@Spectre@@UEAAXXZ.c)
 *     ?FillBackground@ViewerEngine@Engine@Spectre@@MEAAXAEAVShaderManager@23@AEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x1800666A0 (-FillBackground@ViewerEngine@Engine@Spectre@@MEAAXAEAVShaderManager@23@AEBV-$shared_ptr@VScene@E.c)
 *     ?Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z @ 0x180072750 (-Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z.c)
 *     ?SetResources@ImageProcessingEffect@Engine@Spectre@@UEAAXV?$shared_ptr@VImageProcessingCamera@Engine@Spectre@@@std@@V?$shared_ptr@VSampler@Engine@Spectre@@@5@V?$shared_ptr@VDepthBuffer@Engine@Spectre@@@5@V?$function@$$A6A?AU?$pair@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$shared_ptr@VMesh@Engine@Spectre@@@2@@std@@XZ@5@V?$shared_ptr@VMaterial@Engine@Spectre@@@5@@Z @ 0x180097EB0 (-SetResources@ImageProcessingEffect@Engine@Spectre@@UEAAXV-$shared_ptr@VImageProcessingCamera@En.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

void __fastcall Spectre::Engine::MeshInstance::SetMesh(__int64 a1, _QWORD *a2)
{
  std::_Ref_count_base *v3; // rcx

  std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(a1 + 88), a2);
  v3 = (std::_Ref_count_base *)a2[1];
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
