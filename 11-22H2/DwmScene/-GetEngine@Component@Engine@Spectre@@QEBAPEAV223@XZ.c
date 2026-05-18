/*
 * XREFs of ?GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ @ 0x18008139C
 * Callers:
 *     ?RenderSymbols@Light@Engine@Spectre@@MEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x180043300 (-RenderSymbols@Light@Engine@Spectre@@MEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K.c)
 *     ?LoadFromStream@MeshInstance@Engine@Spectre@@UEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@PEAVRenderDevice@23@PEBXII@Z @ 0x18004BC20 (-LoadFromStream@MeshInstance@Engine@Spectre@@UEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@S.c)
 *     ??0LightProbe@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x1800510A8 (--0LightProbe@Engine@Spectre@@QEAA@AEBV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?CreateResources@LightProbe@Engine@Spectre@@UEAAXXZ @ 0x180051A50 (-CreateResources@LightProbe@Engine@Spectre@@UEAAXXZ.c)
 *     ?Begin@Camera@Engine@Spectre@@MEBAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005A410 (-Begin@Camera@Engine@Spectre@@MEBAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV-$sh.c)
 *     ?FlushShaderProperties@Camera@Engine@Spectre@@IEBAXH@Z @ 0x18005B90C (-FlushShaderProperties@Camera@Engine@Spectre@@IEBAXH@Z.c)
 *     ?RenderScene@Camera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005C210 (-RenderScene@Camera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AE.c)
 *     ?ResolveReadableDepth@Camera@Engine@Spectre@@IEBA_NAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x18005CD30 (-ResolveReadableDepth@Camera@Engine@Spectre@@IEBA_NAEBV-$shared_ptr@VCommandList@Engine@Spectre@.c)
 *     ?AttachDevices@Component@Engine@Spectre@@QEAAXXZ @ 0x1800810A0 (-AttachDevices@Component@Engine@Spectre@@QEAAXXZ.c)
 *     ?RenderSymbolLine3D@Component@Engine@Spectre@@IEBAXUVector3@Math@Utils@3@0UColor@563@1M@Z @ 0x1800814B8 (-RenderSymbolLine3D@Component@Engine@Spectre@@IEBAXUVector3@Math@Utils@3@0UColor@563@1M@Z.c)
 *     ??0ShadowMapCamera@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@I@Z @ 0x18008D604 (--0ShadowMapCamera@Engine@Spectre@@QEAA@AEBV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@I@Z.c)
 *     ?CreateResources@ShadowMapCamera@Engine@Spectre@@UEAAXXZ @ 0x18008E0E0 (-CreateResources@ShadowMapCamera@Engine@Spectre@@UEAAXXZ.c)
 *     ?RecreateColorFrameBuffer@ShadowMapCamera@Engine@Spectre@@AEAAXW4Format@23@@Z @ 0x18008E728 (-RecreateColorFrameBuffer@ShadowMapCamera@Engine@Spectre@@AEAAXW4Format@23@@Z.c)
 *     ?RecreateDepthBuffer@ShadowMapCamera@Engine@Spectre@@AEAAXXZ @ 0x18008E838 (-RecreateDepthBuffer@ShadowMapCamera@Engine@Spectre@@AEAAXXZ.c)
 *     ?RecreateDepthSampler@ShadowMapCamera@Engine@Spectre@@AEAAXXZ @ 0x18008E8DC (-RecreateDepthSampler@ShadowMapCamera@Engine@Spectre@@AEAAXXZ.c)
 *     ?RenderScene@ShadowMapCamera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18008E9C0 (-RenderScene@ShadowMapCamera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@.c)
 *     ?CreateTexture@ColorTransform@Engine@Spectre@@AEAAXXZ @ 0x18008F910 (-CreateTexture@ColorTransform@Engine@Spectre@@AEAAXXZ.c)
 *     ?StartIdleRotation@ViewerCamera@Engine@Spectre@@MEAAXXZ @ 0x180093110 (-StartIdleRotation@ViewerCamera@Engine@Spectre@@MEAAXXZ.c)
 *     ?StartReturnToDefaultElevation@ViewerCamera@Engine@Spectre@@UEAAXXZ @ 0x180093290 (-StartReturnToDefaultElevation@ViewerCamera@Engine@Spectre@@UEAAXXZ.c)
 *     ?RenderSymbols@Aimer@Engine@Spectre@@MEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x1800969C0 (-RenderSymbols@Aimer@Engine@Spectre@@MEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetEngine@SceneNode@Engine@Spectre@@QEBAPEAV223@XZ @ 0x18003BFC0 (-GetEngine@SceneNode@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?GetSceneNode@Component@Engine@Spectre@@QEBA?AV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@XZ @ 0x18004328C (-GetSceneNode@Component@Engine@Spectre@@QEBA-AV-$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@.c)
 */

struct Spectre::Engine::Engine *__fastcall Spectre::Engine::Component::GetEngine(Spectre::Engine::Component *this)
{
  Spectre::Engine::SceneNode **SceneNode; // rax
  struct Spectre::Engine::Engine *Engine; // rbx
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v5; // [rsp+28h] [rbp-10h]

  SceneNode = (Spectre::Engine::SceneNode **)Spectre::Engine::Component::GetSceneNode((__int64)this, &v4);
  Engine = Spectre::Engine::SceneNode::GetEngine(*SceneNode);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return Engine;
}
