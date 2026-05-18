/*
 * XREFs of ??1?$_Uninitialized_backout_al@V?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800989B0
 * Callers:
 *     _std::_Uninitialized_copy_Spectre::Engine::ShaderPropertyDefinition_const___std::allocator_Spectre::Engine::ShaderPropertyDefinition____::_1_::dtor$0 @ 0x1800EAD0B (_std--_Uninitialized_copy_Spectre--Engine--ShaderPropertyDefinition_const___std--al_ea_1800EAD0B.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Uninitialized_backout_al<std::allocator<Spectre::Engine::ShaderPropertyDefinition>>::~_Uninitialized_backout_al<std::allocator<Spectre::Engine::ShaderPropertyDefinition>>(
        Spectre::Engine::ShaderPropertyDefinition **a1)
{
  std::_Destroy_range<std::allocator<Spectre::Engine::ShaderPropertyDefinition>>(*a1, a1[1]);
}
