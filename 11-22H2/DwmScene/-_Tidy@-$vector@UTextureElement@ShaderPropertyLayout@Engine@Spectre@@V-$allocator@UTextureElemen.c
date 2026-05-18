/*
 * XREFs of ?_Tidy@?$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x180083B3C
 * Callers:
 *     ??1?$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x180081EEC (--1-$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V-$allocator@UTextureElement@Sh.c)
 *     ??1ShaderPropertyLayout@Engine@Spectre@@QEAA@XZ @ 0x180081EF8 (--1ShaderPropertyLayout@Engine@Spectre@@QEAA@XZ.c)
 *     ??1ShaderPropertyBlock@Engine@Spectre@@QEAA@XZ @ 0x180084568 (--1ShaderPropertyBlock@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@YAXPEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@QEAU1234@AEAV?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@0@@Z @ 0x1800815D0 (--$_Destroy_range@V-$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@.c)
 */

void __fastcall std::vector<Spectre::Engine::ShaderPropertyLayout::TextureElement>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Spectre::Engine::ShaderPropertyLayout::TextureElement>>(
      (__int64)v2,
      *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
