/*
 * XREFs of ?GetProperties@Material@Engine@Spectre@@QEBA?AV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@XZ @ 0x180044344
 * Callers:
 *     ?FindProperty@Material@Engine@Spectre@@QEBA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800442D8 (-FindProperty@Material@Engine@Spectre@@QEBA-AW4ShaderProperty@23@AEBV-$basic_string@DU-$char_tra.c)
 *     ?GetPropertyName@Material@Engine@Spectre@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderProperty@23@@Z @ 0x180044368 (-GetPropertyName@Material@Engine@Spectre@@QEBAAEBV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     ?UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@_NM@Z @ 0x180067E30 (-UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall Spectre::Engine::Material::GetProperties(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8

  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    a2,
    (_QWORD *)(a1 + 120));
  return v2;
}
