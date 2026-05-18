/*
 * XREFs of ?GetTexture@Material@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@W4ShaderProperty@23@@Z @ 0x180044400
 * Callers:
 *     ?TextureExists@Material@Engine@Spectre@@QEBA_NW4ShaderProperty@23@@Z @ 0x180044AD8 (-TextureExists@Material@Engine@Spectre@@QEBA_NW4ShaderProperty@23@@Z.c)
 * Callees:
 *     ?GetTexture@ShaderPropertyBlock@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@W4ShaderProperty@23@@Z @ 0x1800850D4 (-GetTexture@ShaderPropertyBlock@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Spectre@@@st.c)
 */

__int64 __fastcall Spectre::Engine::Material::GetTexture(__int64 a1, __int64 a2)
{
  Spectre::Engine::ShaderPropertyBlock::GetTexture(*(_QWORD *)(a1 + 120));
  return a2;
}
