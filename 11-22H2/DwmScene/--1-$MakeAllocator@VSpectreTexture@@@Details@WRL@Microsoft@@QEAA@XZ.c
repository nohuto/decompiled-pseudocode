/*
 * XREFs of ??1?$MakeAllocator@VSpectreTexture@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180010214
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
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpectreWorld_SpectreWorld_std::shared_ptr_Spectre::Engine::Scene__&__::_1_::dtor$0 @ 0x1800E3AD3 (_Microsoft--WRL--Details--MakeAndInitialize_SpectreWorld_SpectreWorld_std--shared_ptr_Spectre--E.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpectreLightNode_SpectreLightNode_enum_Dwm3DLightType_&_std::shared_ptr_Spectre::Engine::SceneNode__&__::_1_::dtor$0 @ 0x1800E4533 (_Microsoft--WRL--Details--MakeAndInitialize_SpectreLightNode_SpectreLightNode_enum_Dwm3DLightTyp.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<SpectreTexture>::~MakeAllocator<SpectreTexture>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
