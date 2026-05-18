/*
 * XREFs of ??0ShaderPropertyBlock@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@@Z @ 0x180084404
 * Callers:
 *     ?CreateBlock@ShaderPropertyLayout@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@XZ @ 0x180082964 (-CreateBlock@ShaderPropertyLayout@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPropertyBlock@Engin.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180028FD4 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ?GetName@ShaderPropertyLayout@Engine@Spectre@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x180082F3C (-GetName@ShaderPropertyLayout@Engine@Spectre@@QEBAAEBV-$basic_string@DU-$char_traits@D@std@@V-$a.c)
 *     ?GetScope@ShaderPropertyLayout@Engine@Spectre@@QEBA?AW4EShaderPropertyScope@23@XZ @ 0x180083054 (-GetScope@ShaderPropertyLayout@Engine@Spectre@@QEBA-AW4EShaderPropertyScope@23@XZ.c)
 *     ??4?$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800845D0 (--4-$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V-$allocator@TValueElement@Shader.c)
 *     ??4?$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800845FC (--4-$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V-$allocator@UTextureElement@Sh.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Spectre::Engine::ShaderPropertyBlock::ShaderPropertyBlock(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rdx
  unsigned __int64 size_of; // rax
  _QWORD *v6; // rax

  *(_QWORD *)a1 = &Spectre::Engine::ShaderPropertyBlock::`vftable';
  *(_QWORD *)(a1 + 8) = Spectre::Engine::ShaderPropertyLayout::GetName(*a2);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    (_QWORD *)(a1 + 16),
    v4);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v6 = v6;
  v6[1] = v6;
  v6[2] = v6;
  *((_WORD *)v6 + 12) = 257;
  *(_QWORD *)(a1 + 88) = v6;
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_DWORD *)(a1 + 144) = Spectre::Engine::ShaderPropertyLayout::GetScope(*a2);
  *(_BYTE *)(a1 + 148) = *(_BYTE *)(*a2 + 1242);
  std::vector<Spectre::Engine::ShaderPropertyLayout::ValueElement>::operator=(a1 + 32, *a2 + 80);
  std::vector<Spectre::Engine::ShaderPropertyLayout::TextureElement>::operator=(a1 + 56, *a2 + 104);
  return a1;
}
