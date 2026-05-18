/*
 * XREFs of ?size@?$initializer_list@UShaderPropertyDefinition@Engine@Spectre@@@std@@QEBA_KXZ @ 0x18009BB94
 * Callers:
 *     ?GetSerializableProperties@BaseShaderExtension@Engine@Spectre@@UEBA?AV?$vector@UShaderPropertyDefinition@Engine@Spectre@@V?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std@@XZ @ 0x18009A3B0 (-GetSerializableProperties@BaseShaderExtension@Engine@Spectre@@UEBA-AV-$vector@UShaderPropertyDe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::initializer_list<Spectre::Engine::ShaderPropertyDefinition>::size(_QWORD *a1)
{
  return (__int64)(a1[1] - *a1) >> 6;
}
