/*
 * XREFs of ??$?9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@0@Z @ 0x180011DF0
 * Callers:
 *     ?SetParent@SpectreLightNode@@UEAAJPEAUISpectreNode@@@Z @ 0x180012AA0 (-SetParent@SpectreLightNode@@UEAAJPEAUISpectreNode@@@Z.c)
 *     ?SetParent@SpectreNode@@UEAAJPEAUISpectreNode@@@Z @ 0x180015190 (-SetParent@SpectreNode@@UEAAJPEAUISpectreNode@@@Z.c)
 *     ?EndCommandList@RenderDevice@Engine@Spectre@@UEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x180026440 (-EndCommandList@RenderDevice@Engine@Spectre@@UEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@.c)
 *     ?SetParent@SceneNode@Engine@Spectre@@AEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003D484 (-SetParent@SceneNode@Engine@Spectre@@AEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?SetNodeParent@Scene@Engine@Spectre@@QEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@0@Z @ 0x180041EB0 (-SetNodeParent@Scene@Engine@Spectre@@QEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@0@Z.c)
 *     ?AddCamera@Display@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@UVector2@Math@Utils@3@1W4EViewportMode@Camera@23@@Z @ 0x180057470 (-AddCamera@Display@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCamera@Engine@Spectre@@@std@@UVector2@.c)
 *     ?CompareInternal@Camera@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z @ 0x18005B360 (-CompareInternal@Camera@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z.c)
 *     ?SetDepthBuffer@Camera@Engine@Spectre@@QEAAXV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@@Z @ 0x18005D038 (-SetDepthBuffer@Camera@Engine@Spectre@@QEAAXV-$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@@Z.c)
 *     ?SetFrameBuffer@Camera@Engine@Spectre@@QEAAXV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@Z @ 0x18005D1EC (-SetFrameBuffer@Camera@Engine@Spectre@@QEAAXV-$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@Z.c)
 *     ?FlushImportedProperties@ShaderPropertyBlock@Engine@Spectre@@AEAAXXZ @ 0x180084EB0 (-FlushImportedProperties@ShaderPropertyBlock@Engine@Spectre@@AEAAXXZ.c)
 *     ?CompareInternal@ShadowMapCamera@Engine@Spectre@@EEBA_NAEBVComponent@23@@Z @ 0x18008DFE0 (-CompareInternal@ShadowMapCamera@Engine@Spectre@@EEBA_NAEBVComponent@23@@Z.c)
 *     ?CompareInternal@Aimer@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z @ 0x180096890 (-CompareInternal@Aimer@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z.c)
 *     ?Set@VertexLayoutState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009D910 (-Set@VertexLayoutState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 *     ?Set@ShaderState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009DAD0 (-Set@ShaderState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 *     ?Set@ConstantBufferState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009DDD0 (-Set@ConstantBufferState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 *     ?Set@TextureState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009E170 (-Set@TextureState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 *     ?Set@SamplerState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009E4C0 (-Set@SamplerState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 *     ?Set@VertexBufferState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009E900 (-Set@VertexBufferState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 *     ?Set@IndexBufferState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009ED70 (-Set@IndexBufferState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 *     ?Set@RenderTargetState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009F160 (-Set@RenderTargetState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 *     ?SetSpaceProvider@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VIHolographicSpaceProvider@Holographic@D3D11@Engine@Spectre@@@std@@@Z @ 0x1800D9840 (-SetSpaceProvider@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXAEBV-$shar.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::operator!=<Spectre::Engine::Scene,Spectre::Engine::Scene>(_QWORD *a1, _QWORD *a2)
{
  return *a1 != *a2;
}
