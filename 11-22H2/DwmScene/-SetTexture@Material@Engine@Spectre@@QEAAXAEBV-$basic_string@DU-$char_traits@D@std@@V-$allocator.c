/*
 * XREFs of ?SetTexture@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@5@@Z @ 0x1800448BC
 * Callers:
 *     ?SetTexture@SpectreMaterial@@UEAAJV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAUISpectreTexture@@PEAUISpectreSampler@@@Z @ 0x180013890 (-SetTexture@SpectreMaterial@@UEAAJV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@.c)
 *     ?UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@_NM@Z @ 0x180067E30 (-UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?SetTexture@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VTexture@Engine@Spectre@@@5@@Z @ 0x180085600 (-SetTexture@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V.c)
 */

__int64 __fastcall Spectre::Engine::Material::SetTexture(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v7, a3);
  return Spectre::Engine::ShaderPropertyBlock::SetTexture(v4, v5, v3);
}
