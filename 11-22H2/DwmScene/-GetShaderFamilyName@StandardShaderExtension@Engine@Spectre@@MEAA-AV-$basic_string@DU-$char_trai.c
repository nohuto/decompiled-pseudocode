/*
 * XREFs of ?GetShaderFamilyName@StandardShaderExtension@Engine@Spectre@@MEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x18007DEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall Spectre::Engine::StandardShaderExtension::GetShaderFamilyName(__int64 a1, _QWORD *a2)
{
  std::string::string(a2, (__int64)&Spectre::Engine::StandardShaderExtension::kShaderFamilyName);
  return a2;
}
