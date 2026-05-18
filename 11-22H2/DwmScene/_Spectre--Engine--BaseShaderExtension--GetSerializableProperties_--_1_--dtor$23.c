/*
 * XREFs of _Spectre::Engine::BaseShaderExtension::GetSerializableProperties_::_1_::dtor$23 @ 0x1800EB02D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@UShaderPropertyDefinition@Engine@Spectre@@V?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x18005FBE4 (--1-$vector@UShaderPropertyDefinition@Engine@Spectre@@V-$allocator@UShaderPropertyDefinition@Eng.c)
 */

__int64 __fastcall Spectre::Engine::BaseShaderExtension::GetSerializableProperties_::_1_::dtor_23(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 40) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 40) &= ~1u;
    return std::vector<Spectre::Engine::ShaderPropertyDefinition>::~vector<Spectre::Engine::ShaderPropertyDefinition>();
  }
  return result;
}
