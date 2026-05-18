/*
 * XREFs of ?GetImportLayout@ShaderPropertyLayout@Engine@Spectre@@QEBA?AV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@XZ @ 0x180082F14
 * Callers:
 *     ?FlushImportedProperties@ShaderPropertyBlock@Engine@Spectre@@AEAAXXZ @ 0x180084EB0 (-FlushImportedProperties@ShaderPropertyBlock@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall Spectre::Engine::ShaderPropertyLayout::GetImportLayout(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8

  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    a2,
    (_QWORD *)(a1 + 1176));
  return v2;
}
