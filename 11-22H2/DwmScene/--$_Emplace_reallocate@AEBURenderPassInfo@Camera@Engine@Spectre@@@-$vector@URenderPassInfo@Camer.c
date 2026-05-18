/*
 * XREFs of ??$_Emplace_reallocate@AEBURenderPassInfo@Camera@Engine@Spectre@@@?$vector@URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@QEAAPEAURenderPassInfo@Camera@Engine@Spectre@@QEAU2345@AEBU2345@@Z @ 0x180058988
 * Callers:
 *     ?AddRenderPass@Camera@Engine@Spectre@@QEAAH_K0V?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@std@@0@Z @ 0x180059E28 (-AddRenderPass@Camera@Engine@Spectre@@QEAAH_K0V-$shared_ptr@VISceneNodeTraversal@Engine@Spectre@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x18002F1D0 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAURenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@YAPEAURenderPassInfo@Camera@Engine@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@0@@Z @ 0x180058EC4 (--$_Uninitialized_move@PEAURenderPassInfo@Camera@Engine@Spectre@@V-$allocator@URenderPassInfo@Ca.c)
 *     ??0RenderPassInfo@Camera@Engine@Spectre@@QEAA@AEBU0123@@Z @ 0x18005962C (--0RenderPassInfo@Camera@Engine@Spectre@@QEAA@AEBU0123@@Z.c)
 *     ?_Calculate_growth@?$vector@URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@AEBA_K_K@Z @ 0x18005E5F0 (-_Calculate_growth@-$vector@URenderPassInfo@Camera@Engine@Spectre@@V-$allocator@URenderPassInfo@.c)
 *     ?_Change_array@?$vector@URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@AEAAXQEAURenderPassInfo@Camera@Engine@Spectre@@_K1@Z @ 0x18005E638 (-_Change_array@-$vector@URenderPassInfo@Camera@Engine@Spectre@@V-$allocator@URenderPassInfo@Came.c)
 */

Spectre::Engine::Camera::RenderPassInfo *__fastcall std::vector<Spectre::Engine::Camera::RenderPassInfo>::_Emplace_reallocate<Spectre::Engine::Camera::RenderPassInfo const &>(
        __int64 *a1,
        __int64 a2,
        const struct Spectre::Engine::Camera::RenderPassInfo *a3)
{
  __int64 v3; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r15
  unsigned __int64 size_of; // rax
  char *v11; // rdi
  Spectre::Engine::Camera::RenderPassInfo *v12; // rbp
  __int64 v13; // rdx
  char *v14; // r8
  __int64 v15; // rcx

  v3 = *a1;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 4);
  if ( v7 == 0x555555555555555LL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = std::vector<Spectre::Engine::Camera::RenderPassInfo>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<48>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = (Spectre::Engine::Camera::RenderPassInfo *)&v11[48 * ((a2 - v3) / 48)];
  Spectre::Engine::Camera::RenderPassInfo::RenderPassInfo(v12, a3);
  v13 = a1[1];
  v14 = v11;
  v15 = *a1;
  if ( a2 != v13 )
  {
    std::_Uninitialized_move<Spectre::Engine::Camera::RenderPassInfo *>(v15, a2, v11);
    v13 = a1[1];
    v14 = (char *)v12 + 48;
    v15 = a2;
  }
  std::_Uninitialized_move<Spectre::Engine::Camera::RenderPassInfo *>(v15, v13, v14);
  std::vector<Spectre::Engine::Camera::RenderPassInfo>::_Change_array(a1, v11, v8, v9);
  return v12;
}
