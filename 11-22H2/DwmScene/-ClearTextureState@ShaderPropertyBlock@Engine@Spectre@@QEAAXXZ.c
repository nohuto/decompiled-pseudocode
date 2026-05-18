/*
 * XREFs of ?ClearTextureState@ShaderPropertyBlock@Engine@Spectre@@QEAAXXZ @ 0x180084C40
 * Callers:
 *     ?ClearGlobalTextureState@ShaderManager@Engine@Spectre@@QEAAXXZ @ 0x18004F684 (-ClearGlobalTextureState@ShaderManager@Engine@Spectre@@QEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetPropertyCount@ShaderPropertyLayout@Engine@Spectre@@QEBAIXZ @ 0x180082F48 (-GetPropertyCount@ShaderPropertyLayout@Engine@Spectre@@QEBAIXZ.c)
 *     ?GetPropertyInfoForIndex@ShaderPropertyLayout@Engine@Spectre@@AEBAAEBUPropertyInfo@123@G@Z @ 0x180082F88 (-GetPropertyInfoForIndex@ShaderPropertyLayout@Engine@Spectre@@AEBAAEBUPropertyInfo@123@G@Z.c)
 *     ?GetLayout@ShaderPropertyBlock@Engine@Spectre@@QEBA?AV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@XZ @ 0x1800850B0 (-GetLayout@ShaderPropertyBlock@Engine@Spectre@@QEBA-AV-$shared_ptr@VShaderPropertyLayout@Engine@.c)
 *     ?SetTexture@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VTexture@Engine@Spectre@@@5@@Z @ 0x180085600 (-SetTexture@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V.c)
 *     ?SetTextureSampler@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VSampler@Engine@Spectre@@@5@@Z @ 0x1800857F0 (-SetTextureSampler@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::ShaderPropertyBlock::ClearTextureState(Spectre::Engine::ShaderPropertyBlock *this)
{
  unsigned __int16 i; // bx
  const struct Spectre::Engine::ShaderPropertyLayout::PropertyInfo *PropertyInfoForIndex; // rax
  const struct Spectre::Engine::ShaderPropertyLayout::PropertyInfo *v4; // rsi
  Spectre::Engine::ShaderPropertyLayout *v5; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-20h]
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  Spectre::Engine::ShaderPropertyBlock::GetLayout(this, &v5);
  for ( i = 0; i < (unsigned int)Spectre::Engine::ShaderPropertyLayout::GetPropertyCount(v5); ++i )
  {
    PropertyInfoForIndex = Spectre::Engine::ShaderPropertyLayout::GetPropertyInfoForIndex(v5, i);
    v4 = PropertyInfoForIndex;
    if ( *((_DWORD *)PropertyInfoForIndex + 9) == 8 )
    {
      v7 = 0LL;
      Spectre::Engine::ShaderPropertyBlock::SetTexture(this, PropertyInfoForIndex, &v7);
      v7 = 0LL;
      Spectre::Engine::ShaderPropertyBlock::SetTextureSampler(this, v4, &v7);
    }
  }
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
}
