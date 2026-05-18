/*
 * XREFs of ??$_Destroy_range@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@YAXPEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@QEAU1234@AEAV?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@0@@Z @ 0x1800815D0
 * Callers:
 *     ??$_Uninitialized_move@PEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@YAPEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@0@@Z @ 0x180081B94 (--$_Uninitialized_move@PEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@V-$allocator@UTex.c)
 *     ?_Change_array@?$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXQEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@_K1@Z @ 0x180083A30 (-_Change_array@-$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V-$allocator@UTextu.c)
 *     ?_Tidy@?$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x180083B3C (-_Tidy@-$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V-$allocator@UTextureElemen.c)
 *     ??$_Assign_range@PEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@@?$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXPEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@0Uforward_iterator_tag@1@@Z @ 0x180083FF8 (--$_Assign_range@PEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@@-$vector@UTextureEleme.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x180085C4C (-_Clear_and_reserve_geometric@-$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V-$a.c)
 * Callees:
 *     ??1?$pair@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$shared_ptr@VMesh@Engine@Spectre@@@2@@std@@QEAA@XZ @ 0x180071F04 (--1-$pair@V-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V-$shared_ptr@VMesh@Engine@Spectre@@@2@.c)
 */

void __fastcall std::_Destroy_range<std::allocator<Spectre::Engine::ShaderPropertyLayout::TextureElement>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      std::pair<std::shared_ptr<Spectre::Engine::SceneNode>,std::shared_ptr<Spectre::Engine::Mesh>>::~pair<std::shared_ptr<Spectre::Engine::SceneNode>,std::shared_ptr<Spectre::Engine::Mesh>>(v3);
      v3 += 40LL;
    }
    while ( v3 != a2 );
  }
}
