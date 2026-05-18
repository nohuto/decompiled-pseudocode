/*
 * XREFs of ?GetName@IShaderExtension@Engine@Spectre@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x180060A34
 * Callers:
 *     ?AddExtension@ShaderManager@Engine@Spectre@@QEAAXV?$shared_ptr@VIShaderExtension@Engine@Spectre@@@std@@@Z @ 0x18004EF08 (-AddExtension@ShaderManager@Engine@Spectre@@QEAAXV-$shared_ptr@VIShaderExtension@Engine@Spectre@.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall Spectre::Engine::IShaderExtension::GetName(__int64 a1, _QWORD *a2)
{
  std::string::string(a2, a1 + 24);
  return a2;
}
