/*
 * XREFs of ?_Tidy@?$vector@UShaderPropertyDefinition@Engine@Spectre@@V?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x1800614E0
 * Callers:
 *     ??1?$vector@UShaderPropertyDefinition@Engine@Spectre@@V?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x18005FBE4 (--1-$vector@UShaderPropertyDefinition@Engine@Spectre@@V-$allocator@UShaderPropertyDefinition@Eng.c)
 *     ??1?$_Tidy_guard@V?$vector@UShaderPropertyDefinition@Engine@Spectre@@V?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std@@@std@@QEAA@XZ @ 0x180098990 (--1-$_Tidy_guard@V-$vector@UShaderPropertyDefinition@Engine@Spectre@@V-$allocator@UShaderPropert.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std@@YAXPEAUShaderPropertyDefinition@Engine@Spectre@@QEAU123@AEAV?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@0@@Z @ 0x18005EE98 (--$_Destroy_range@V-$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std@@YAXPEAUShad.c)
 */

void __fastcall std::vector<Spectre::Engine::ShaderPropertyDefinition>::_Tidy(__int64 a1)
{
  Spectre::Engine::ShaderPropertyDefinition *v2; // rcx

  v2 = *(Spectre::Engine::ShaderPropertyDefinition **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Spectre::Engine::ShaderPropertyDefinition>>(
      v2,
      *(Spectre::Engine::ShaderPropertyDefinition **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
