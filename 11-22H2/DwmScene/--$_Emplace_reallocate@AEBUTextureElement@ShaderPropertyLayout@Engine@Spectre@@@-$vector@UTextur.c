/*
 * XREFs of ??$_Emplace_reallocate@AEBUTextureElement@ShaderPropertyLayout@Engine@Spectre@@@?$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@QEAAPEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@QEAU2345@AEBU2345@@Z @ 0x180081744
 * Callers:
 *     ?AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@W4EShaderPropertyLinkage@23@@Z @ 0x180082518 (-AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA-AW4ShaderProperty@23@AEBUShaderPropertyDe.c)
 *     ?ExtendLayoutWithProperty@ShaderPropertyBlock@Engine@Spectre@@AEAA?AW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@W4EShaderPropertyLinkage@23@@Z @ 0x180084D94 (-ExtendLayoutWithProperty@ShaderPropertyBlock@Engine@Spectre@@AEAA-AW4ShaderProperty@23@AEBUShad.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180028FD4 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@YAPEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@0@@Z @ 0x180081B94 (--$_Uninitialized_move@PEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@V-$allocator@UTex.c)
 *     ??0TextureElement@ShaderPropertyLayout@Engine@Spectre@@QEAA@AEBU0123@@Z @ 0x180081EB8 (--0TextureElement@ShaderPropertyLayout@Engine@Spectre@@QEAA@AEBU0123@@Z.c)
 *     ?_Calculate_growth@?$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEBA_K_K@Z @ 0x18008388C (-_Calculate_growth@-$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V-$allocator@UT.c)
 *     ?_Change_array@?$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXQEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@_K1@Z @ 0x180083A30 (-_Change_array@-$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V-$allocator@UTextu.c)
 */

char *__fastcall std::vector<Spectre::Engine::ShaderPropertyLayout::TextureElement>::_Emplace_reallocate<Spectre::Engine::ShaderPropertyLayout::TextureElement const &>(
        __int64 *a1,
        __int64 a2,
        const struct Spectre::Engine::ShaderPropertyLayout::TextureElement *a3)
{
  __int64 v3; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r15
  unsigned __int64 size_of; // rax
  char *v11; // rdi
  unsigned __int64 v12; // rdx
  char *v13; // rbp
  __int64 v14; // rdx
  char *v15; // r8
  __int64 v16; // rcx

  v3 = *a1;
  v7 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
  if ( v7 == 0x666666666666666LL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = std::vector<Spectre::Engine::ShaderPropertyLayout::TextureElement>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<40>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = (__int64)((unsigned __int128)((a2 - v3) * (__int128)0x6666666666666667LL) >> 64) >> 4;
  v13 = &v11[40 * ((a2 - v3) / 40)];
  Spectre::Engine::ShaderPropertyLayout::TextureElement::TextureElement(
    (Spectre::Engine::ShaderPropertyLayout::TextureElement *)&v11[40 * (v12 >> 63) + 40 * v12],
    a3);
  v14 = a1[1];
  v15 = v11;
  v16 = *a1;
  if ( a2 != v14 )
  {
    std::_Uninitialized_move<Spectre::Engine::ShaderPropertyLayout::TextureElement *>(v16, a2, v11);
    v14 = a1[1];
    v15 = v13 + 40;
    v16 = a2;
  }
  std::_Uninitialized_move<Spectre::Engine::ShaderPropertyLayout::TextureElement *>(v16, v14, v15);
  std::vector<Spectre::Engine::ShaderPropertyLayout::TextureElement>::_Change_array(a1, v11, v8, v9);
  return v13;
}
