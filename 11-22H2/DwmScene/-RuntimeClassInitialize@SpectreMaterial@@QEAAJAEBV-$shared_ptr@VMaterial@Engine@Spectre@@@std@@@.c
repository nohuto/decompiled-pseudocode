/*
 * XREFs of ?RuntimeClassInitialize@SpectreMaterial@@QEAAJAEBV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z @ 0x180013510
 * Callers:
 *     ??$MakeAndInitialize@VSpectreMaterial@@V1@AEAV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVSpectreMaterial@@AEAV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z @ 0x180016570 (--$MakeAndInitialize@VSpectreMaterial@@V1@AEAV-$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Deta.c)
 * Callees:
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?SetInteger@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z @ 0x180044640 (-SetInteger@Material@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator.c)
 *     ?SetOption@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x180044658 (-SetOption@Material@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 */

__int64 __fastcall SpectreMaterial::RuntimeClassInitialize(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // r8
  __int64 v4; // rdx

  v2 = (_QWORD *)(a1 + 16);
  std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(a1 + 16), a2);
  LOBYTE(v3) = 1;
  *(_WORD *)(*v2 + 112LL) |= 0x10u;
  *(_WORD *)(*v2 + 112LL) &= ~2u;
  *(_WORD *)(*v2 + 112LL) |= 1u;
  Spectre::Engine::Material::SetOption(*v2, &Spectre::Engine::ShaderConstants::kOption_GLTFMaterial, v3);
  Spectre::Engine::Material::SetInteger(*v2, v4, 1LL);
  return 0LL;
}
