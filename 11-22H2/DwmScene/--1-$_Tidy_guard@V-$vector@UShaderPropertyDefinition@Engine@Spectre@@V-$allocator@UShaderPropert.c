/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@UShaderPropertyDefinition@Engine@Spectre@@V?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std@@@std@@QEAA@XZ @ 0x180098990
 * Callers:
 *     ??$_Construct_n@PEBUShaderPropertyDefinition@Engine@Spectre@@PEBU123@@?$vector@UShaderPropertyDefinition@Engine@Spectre@@V?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std@@AEAAX_K$$QEAPEBUShaderPropertyDefinition@Engine@Spectre@@1@Z @ 0x180098368 (--$_Construct_n@PEBUShaderPropertyDefinition@Engine@Spectre@@PEBU123@@-$vector@UShaderPropertyDe.c)
 *     _std::vector_Spectre::Engine::ShaderPropertyDefinition_std::allocator_Spectre::Engine::ShaderPropertyDefinition___::_Construct_n_Spectre::Engine::ShaderPropertyDefinition_const___Spectre::Engine::ShaderPropertyDefinition_const____::_1_::dtor$0 @ 0x1800EACF9 (_std--vector_Spectre--Engine--ShaderPropertyDefinition_std--allocator_Spectre--Engine--ShaderPro.c)
 * Callees:
 *     ?_Tidy@?$vector@UShaderPropertyDefinition@Engine@Spectre@@V?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x1800614E0 (-_Tidy@-$vector@UShaderPropertyDefinition@Engine@Spectre@@V-$allocator@UShaderPropertyDefinition.c)
 */

void __fastcall std::_Tidy_guard<std::vector<Spectre::Engine::ShaderPropertyDefinition>>::~_Tidy_guard<std::vector<Spectre::Engine::ShaderPropertyDefinition>>(
        __int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::vector<Spectre::Engine::ShaderPropertyDefinition>::_Tidy(v1);
}
