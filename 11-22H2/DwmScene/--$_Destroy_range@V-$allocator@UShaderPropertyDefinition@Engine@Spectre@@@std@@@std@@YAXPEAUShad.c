/*
 * XREFs of ??$_Destroy_range@V?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std@@YAXPEAUShaderPropertyDefinition@Engine@Spectre@@QEAU123@AEAV?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@0@@Z @ 0x18005EE98
 * Callers:
 *     ?_Tidy@?$vector@UShaderPropertyDefinition@Engine@Spectre@@V?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x1800614E0 (-_Tidy@-$vector@UShaderPropertyDefinition@Engine@Spectre@@V-$allocator@UShaderPropertyDefinition.c)
 *     ??$_Uninitialized_copy@PEBUShaderPropertyDefinition@Engine@Spectre@@V?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std@@YAPEAUShaderPropertyDefinition@Engine@Spectre@@QEBU123@0PEAU123@AEAV?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@0@@Z @ 0x1800985C0 (--$_Uninitialized_copy@PEBUShaderPropertyDefinition@Engine@Spectre@@V-$allocator@UShaderProperty.c)
 *     ??1?$_Uninitialized_backout_al@V?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800989B0 (--1-$_Uninitialized_backout_al@V-$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std.c)
 * Callees:
 *     ??1ShaderPropertyDefinition@Engine@Spectre@@QEAA@XZ @ 0x1800451F0 (--1ShaderPropertyDefinition@Engine@Spectre@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<Spectre::Engine::ShaderPropertyDefinition>>(
        Spectre::Engine::ShaderPropertyDefinition *this,
        Spectre::Engine::ShaderPropertyDefinition *a2)
{
  Spectre::Engine::ShaderPropertyDefinition *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition(v3);
      v3 = (Spectre::Engine::ShaderPropertyDefinition *)((char *)v3 + 64);
    }
    while ( v3 != a2 );
  }
}
