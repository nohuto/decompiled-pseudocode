/*
 * XREFs of ?SetImportBlock@ShaderPropertyBlock@Engine@Spectre@@QEAAXV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@@Z @ 0x18008541C
 * Callers:
 *     ?CreateBlock@ShaderPropertyLayout@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@XZ @ 0x180082964 (-CreateBlock@ShaderPropertyLayout@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPropertyBlock@Engin.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?FlushImportedProperties@ShaderPropertyBlock@Engine@Spectre@@AEAAXXZ @ 0x180084EB0 (-FlushImportedProperties@ShaderPropertyBlock@Engine@Spectre@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::ShaderPropertyBlock::SetImportBlock(
        Spectre::Engine::ShaderPropertyBlock *this,
        _QWORD *a2)
{
  std::_Ref_count_base *v4; // rcx

  std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)this + 14, a2);
  *((_DWORD *)this + 26) = *(_DWORD *)(*a2 + 80LL) - 1;
  Spectre::Engine::ShaderPropertyBlock::FlushImportedProperties(this);
  v4 = (std::_Ref_count_base *)a2[1];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
}
