/*
 * XREFs of ??$_Uninitialized_copy@PEBUShaderPropertyDefinition@Engine@Spectre@@V?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std@@YAPEAUShaderPropertyDefinition@Engine@Spectre@@QEBU123@0PEAU123@AEAV?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@0@@Z @ 0x1800985C0
 * Callers:
 *     ??$_Construct_n@PEBUShaderPropertyDefinition@Engine@Spectre@@PEBU123@@?$vector@UShaderPropertyDefinition@Engine@Spectre@@V?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std@@AEAAX_K$$QEAPEBUShaderPropertyDefinition@Engine@Spectre@@1@Z @ 0x180098368 (--$_Construct_n@PEBUShaderPropertyDefinition@Engine@Spectre@@PEBU123@@-$vector@UShaderPropertyDe.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Destroy_range@V?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std@@YAXPEAUShaderPropertyDefinition@Engine@Spectre@@QEAU123@AEAV?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@0@@Z @ 0x18005EE98 (--$_Destroy_range@V-$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std@@YAXPEAUShad.c)
 *     ??0?$vector@MV?$allocator@M@std@@@std@@QEAA@AEBV01@@Z @ 0x180081D80 (--0-$vector@MV-$allocator@M@std@@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Uninitialized_copy<Spectre::Engine::ShaderPropertyDefinition const *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 64LL )
  {
    std::string::string((_QWORD *)a3, i);
    *(_DWORD *)(a3 + 32) = *(_DWORD *)(i + 32);
    std::vector<float>::vector<float>((char **)(a3 + 40), i + 40);
    a3 += 64LL;
  }
  std::_Destroy_range<std::allocator<Spectre::Engine::ShaderPropertyDefinition>>(
    (Spectre::Engine::ShaderPropertyDefinition *)a3,
    (Spectre::Engine::ShaderPropertyDefinition *)a3);
  return a3;
}
