/*
 * XREFs of ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18001C138
 * Callers:
 *     ??$MakeAndInitialize@VSpectreRenderer@@V1@AEBUDwmSceneRendererDesc@@@Details@WRL@Microsoft@@YAJPEAPEAVSpectreRenderer@@AEBUDwmSceneRendererDesc@@@Z @ 0x18000FFF0 (--$MakeAndInitialize@VSpectreRenderer@@V1@AEBUDwmSceneRendererDesc@@@Details@WRL@Microsoft@@YAJP.c)
 *     ??$MakeAndInitialize@VSpectreNode@@V1@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVSpectreNode@@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x1800149F4 (--$MakeAndInitialize@VSpectreNode@@V1@AEAV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Details.c)
 *     ??$MakeAndInitialize@VSpectreLightNode@@V1@AEAW4Dwm3DLightType@@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVSpectreLightNode@@AEAW4Dwm3DLightType@@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x1800163F0 (--$MakeAndInitialize@VSpectreLightNode@@V1@AEAW4Dwm3DLightType@@AEAV-$shared_ptr@VSceneNode@Engi.c)
 *     ??$MakeAndInitialize@VSpectreMaterial@@V1@AEAV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVSpectreMaterial@@AEAV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z @ 0x180016570 (--$MakeAndInitialize@VSpectreMaterial@@V1@AEAV-$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Deta.c)
 *     ??$MakeAndInitialize@VSpectreMesh@@V1@AEAV?$shared_ptr@VMesh@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVSpectreMesh@@AEAV?$shared_ptr@VMesh@Engine@Spectre@@@std@@@Z @ 0x1800166AC (--$MakeAndInitialize@VSpectreMesh@@V1@AEAV-$shared_ptr@VMesh@Engine@Spectre@@@std@@@Details@WRL@.c)
 *     ??$MakeAndInitialize@VSpectreSampler@@V1@AEAV?$shared_ptr@VSampler@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVSpectreSampler@@AEAV?$shared_ptr@VSampler@Engine@Spectre@@@std@@@Z @ 0x180016800 (--$MakeAndInitialize@VSpectreSampler@@V1@AEAV-$shared_ptr@VSampler@Engine@Spectre@@@std@@@Detail.c)
 *     ??$MakeAndInitialize@VSpectreTexture@@V1@AEAV?$shared_ptr@VTexture@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVSpectreTexture@@AEAV?$shared_ptr@VTexture@Engine@Spectre@@@std@@@Z @ 0x18001693C (--$MakeAndInitialize@VSpectreTexture@@V1@AEAV-$shared_ptr@VTexture@Engine@Spectre@@@std@@@Detail.c)
 *     ??$MakeAndInitialize@VSpectreWorld@@V1@AEAV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVSpectreWorld@@AEAV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180016A78 (--$MakeAndInitialize@VSpectreWorld@@V1@AEAV-$shared_ptr@VScene@Engine@Spectre@@@std@@@Details@WR.c)
 *     ??$MakeAndInitialize@VSpectreNode@@V1@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVSpectreNode@@$$QEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18001BA00 (--$MakeAndInitialize@VSpectreNode@@V1@V-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Details@WR.c)
 *     ??$_Get_temporary_buffer@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@YA?AU?$pair@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@_J@0@_J@Z @ 0x18003A430 (--$_Get_temporary_buffer@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@YA.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__fastcall operator new(unsigned __int64 a1, const struct std::nothrow_t *a2)
{
  return DefaultHeap::Alloc(a1);
}
