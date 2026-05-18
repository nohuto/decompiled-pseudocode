/*
 * XREFs of ??$_Assign_range@PEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@@?$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXPEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@0Uforward_iterator_tag@1@@Z @ 0x180083FF8
 * Callers:
 *     ??4?$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800845FC (--4-$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V-$allocator@UTextureElement@Sh.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@YAXPEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@QEAU1234@AEAV?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@0@@Z @ 0x1800815D0 (--$_Destroy_range@V-$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@.c)
 *     ??0TextureElement@ShaderPropertyLayout@Engine@Spectre@@QEAA@AEBU0123@@Z @ 0x180081EB8 (--0TextureElement@ShaderPropertyLayout@Engine@Spectre@@QEAA@AEBU0123@@Z.c)
 *     ??$_Copy_unchecked@PEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@PEAU1234@@std@@YAPEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@PEAU1234@00@Z @ 0x180084120 (--$_Copy_unchecked@PEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@PEAU1234@@std@@YAPEAU.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x180085C4C (-_Clear_and_reserve_geometric@-$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V-$a.c)
 */

void __fastcall std::vector<Spectre::Engine::ShaderPropertyLayout::TextureElement>::_Assign_range<Spectre::Engine::ShaderPropertyLayout::TextureElement *>(
        __int64 *a1,
        __int64 a2,
        const struct Spectre::Engine::ShaderPropertyLayout::TextureElement *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  const struct Spectre::Engine::ShaderPropertyLayout::TextureElement *v10; // rdi
  Spectre::Engine::ShaderPropertyLayout::TextureElement *i; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx

  v6 = ((__int64)a3 - a2) >> 3;
  v7 = *a1;
  v8 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
  v9 = 0xCCCCCCCCCCCCCCCDuLL * v6;
  if ( v9 <= v8 )
  {
    i = (Spectre::Engine::ShaderPropertyLayout::TextureElement *)(v7 + 40 * v9);
    std::_Copy_unchecked<Spectre::Engine::ShaderPropertyLayout::TextureElement *,Spectre::Engine::ShaderPropertyLayout::TextureElement *>(
      a2,
      a3);
    v13 = a1[1];
    v12 = (__int64)i;
  }
  else
  {
    if ( v9 > 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - v7) >> 3) )
    {
      std::vector<Spectre::Engine::ShaderPropertyLayout::TextureElement>::_Clear_and_reserve_geometric(a1, v9);
      v8 = 0LL;
    }
    v10 = (const struct Spectre::Engine::ShaderPropertyLayout::TextureElement *)(a2 + 40 * v8);
    std::_Copy_unchecked<Spectre::Engine::ShaderPropertyLayout::TextureElement *,Spectre::Engine::ShaderPropertyLayout::TextureElement *>(
      a2,
      v10);
    for ( i = (Spectre::Engine::ShaderPropertyLayout::TextureElement *)a1[1];
          ;
          i = (Spectre::Engine::ShaderPropertyLayout::TextureElement *)((char *)i + 40) )
    {
      v12 = (__int64)i;
      if ( v10 == a3 )
        break;
      Spectre::Engine::ShaderPropertyLayout::TextureElement::TextureElement(i, v10);
      v10 = (const struct Spectre::Engine::ShaderPropertyLayout::TextureElement *)((char *)v10 + 40);
    }
    v13 = (__int64)i;
  }
  std::_Destroy_range<std::allocator<Spectre::Engine::ShaderPropertyLayout::TextureElement>>(v12, v13);
  a1[1] = (__int64)i;
}
