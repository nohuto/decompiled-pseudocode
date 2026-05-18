/*
 * XREFs of ?AlignBuffer@ShaderPropertyLayout@Engine@Spectre@@AEAAXXZ @ 0x18008292C
 * Callers:
 *     ?AddArrayProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderPropertyType@23@I@Z @ 0x1800820CC (-AddArrayProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA-AW4ShaderProperty@23@AEBV-$basic_str.c)
 *     ?AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@W4EShaderPropertyLinkage@23@@Z @ 0x180082518 (-AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA-AW4ShaderProperty@23@AEBUShaderPropertyDe.c)
 *     ?EndDeclaration@ShaderPropertyLayout@Engine@Spectre@@QEAAXXZ @ 0x180082AB0 (-EndDeclaration@ShaderPropertyLayout@Engine@Spectre@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::ShaderPropertyLayout::AlignBuffer(Spectre::Engine::ShaderPropertyLayout *this)
{
  unsigned __int64 v1; // rdx

  v1 = (__int64)(*((_QWORD *)this + 11) - *((_QWORD *)this + 10)) >> 2;
  if ( *((_DWORD *)this + 293) )
    v1 = ~(*((unsigned int *)this + 293) - 1LL) & (*((unsigned int *)this + 293) + v1 - 1);
  std::vector<Spectre::Engine::ShaderPropertyLayout::ValueElement>::_Resize<std::_Value_init_tag>(
    (__int64 *)this + 10,
    v1);
}
