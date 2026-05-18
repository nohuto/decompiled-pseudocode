/*
 * XREFs of ?RuntimeClassInitialize@SpectreNode@@QEAAJAEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18001506C
 * Callers:
 *     ??$MakeAndInitialize@VSpectreNode@@V1@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVSpectreNode@@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x1800149F4 (--$MakeAndInitialize@VSpectreNode@@V1@AEAV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Details.c)
 *     ??$MakeAndInitialize@VSpectreNode@@V1@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVSpectreNode@@$$QEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18001BA00 (--$MakeAndInitialize@VSpectreNode@@V1@V-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Details@WR.c)
 * Callees:
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall SpectreNode::RuntimeClassInitialize(__int64 a1, _QWORD *a2)
{
  std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(a1 + 32), a2);
  return 0LL;
}
