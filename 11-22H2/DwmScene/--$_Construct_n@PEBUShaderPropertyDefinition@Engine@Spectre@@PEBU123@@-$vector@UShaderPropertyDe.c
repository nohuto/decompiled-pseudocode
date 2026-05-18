/*
 * XREFs of ??$_Construct_n@PEBUShaderPropertyDefinition@Engine@Spectre@@PEBU123@@?$vector@UShaderPropertyDefinition@Engine@Spectre@@V?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std@@AEAAX_K$$QEAPEBUShaderPropertyDefinition@Engine@Spectre@@1@Z @ 0x180098368
 * Callers:
 *     ?GetSerializableProperties@BaseShaderExtension@Engine@Spectre@@UEBA?AV?$vector@UShaderPropertyDefinition@Engine@Spectre@@V?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std@@XZ @ 0x18009A3B0 (-GetSerializableProperties@BaseShaderExtension@Engine@Spectre@@UEBA-AV-$vector@UShaderPropertyDe.c)
 * Callees:
 *     ??$_Uninitialized_copy@PEBUShaderPropertyDefinition@Engine@Spectre@@V?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std@@YAPEAUShaderPropertyDefinition@Engine@Spectre@@QEBU123@0PEAU123@AEAV?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@0@@Z @ 0x1800985C0 (--$_Uninitialized_copy@PEBUShaderPropertyDefinition@Engine@Spectre@@V-$allocator@UShaderProperty.c)
 *     ??1?$_Tidy_guard@V?$vector@UShaderPropertyDefinition@Engine@Spectre@@V?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std@@@std@@QEAA@XZ @ 0x180098990 (--1-$_Tidy_guard@V-$vector@UShaderPropertyDefinition@Engine@Spectre@@V-$allocator@UShaderPropert.c)
 *     ?_Buy_nonzero@?$vector@UShaderPropertyDefinition@Engine@Spectre@@V?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18009B6A0 (-_Buy_nonzero@-$vector@UShaderPropertyDefinition@Engine@Spectre@@V-$allocator@UShaderPropertyDef.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::vector<Spectre::Engine::ShaderPropertyDefinition>::_Construct_n<Spectre::Engine::ShaderPropertyDefinition const *,Spectre::Engine::ShaderPropertyDefinition const *>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    std::vector<Spectre::Engine::ShaderPropertyDefinition>::_Buy_nonzero();
    v7 = a1;
    a1[1] = std::_Uninitialized_copy<Spectre::Engine::ShaderPropertyDefinition const *>(*a3, *a4, *a1, a1);
    v7 = 0LL;
    std::_Tidy_guard<std::vector<Spectre::Engine::ShaderPropertyDefinition>>::~_Tidy_guard<std::vector<Spectre::Engine::ShaderPropertyDefinition>>(&v7);
  }
}
