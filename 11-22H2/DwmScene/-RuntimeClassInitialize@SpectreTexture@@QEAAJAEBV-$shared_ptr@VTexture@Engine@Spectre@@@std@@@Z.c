/*
 * XREFs of ?RuntimeClassInitialize@SpectreTexture@@QEAAJAEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@@Z @ 0x18001B8CC
 * Callers:
 *     ??$MakeAndInitialize@VSpectreSampler@@V1@AEAV?$shared_ptr@VSampler@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVSpectreSampler@@AEAV?$shared_ptr@VSampler@Engine@Spectre@@@std@@@Z @ 0x180016800 (--$MakeAndInitialize@VSpectreSampler@@V1@AEAV-$shared_ptr@VSampler@Engine@Spectre@@@std@@@Detail.c)
 *     ??$MakeAndInitialize@VSpectreTexture@@V1@AEAV?$shared_ptr@VTexture@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVSpectreTexture@@AEAV?$shared_ptr@VTexture@Engine@Spectre@@@std@@@Z @ 0x18001693C (--$MakeAndInitialize@VSpectreTexture@@V1@AEAV-$shared_ptr@VTexture@Engine@Spectre@@@std@@@Detail.c)
 * Callees:
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall SpectreTexture::RuntimeClassInitialize(__int64 a1, _QWORD *a2)
{
  std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(a1 + 16), a2);
  return 0LL;
}
