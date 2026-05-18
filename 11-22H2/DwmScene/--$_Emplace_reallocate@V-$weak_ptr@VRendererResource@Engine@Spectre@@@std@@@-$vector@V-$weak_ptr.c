/*
 * XREFs of ??$_Emplace_reallocate@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@?$vector@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@1@QEAV21@$$QEAV21@@Z @ 0x1800109F0
 * Callers:
 *     ?push_back@?$vector@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@2@@std@@QEAAX$$QEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@2@@Z @ 0x180011D0C (-push_back@-$vector@V-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V-$allocator@V-$weak_ptr.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180010B48 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@@2@@std@@YAPEAV?$weak_ptr@VLoaderBase@Engine@Spectre@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@@0@@Z @ 0x180010C1C (--$_Uninitialized_move@PEAV-$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@V-$allocator@V-$weak_ptr.c)
 *     ?_Calculate_growth@?$vector@V?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@@2@@std@@AEBA_K_K@Z @ 0x1800118B0 (-_Calculate_growth@-$vector@V-$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@V-$allocator@V-$weak_p.c)
 *     ?_Change_array@?$vector@V?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@@2@@std@@AEAAXQEAV?$weak_ptr@VLoaderBase@Engine@Spectre@@@2@_K1@Z @ 0x1800118EC (-_Change_array@-$vector@V-$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@V-$allocator@V-$weak_ptr@V.c)
 */

char *__fastcall std::vector<std::weak_ptr<Spectre::Engine::RendererResource>>::_Emplace_reallocate<std::weak_ptr<Spectre::Engine::RendererResource>>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r12
  __int64 v9; // r13
  unsigned __int64 size_of; // rax
  char *v11; // rdi
  _QWORD *v12; // r8
  char *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = std::vector<std::weak_ptr<Spectre::Engine::LoaderBase>>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<16>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = v11;
  v13 = &v11[(a2 - v3) & 0xFFFFFFFFFFFFFFF0uLL];
  *(_QWORD *)v13 = 0LL;
  *((_QWORD *)v13 + 1) = 0LL;
  *(_QWORD *)v13 = *a3;
  *((_QWORD *)v13 + 1) = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v14 = a1[1];
  v15 = *a1;
  if ( a2 != v14 )
  {
    std::_Uninitialized_move<std::weak_ptr<Spectre::Engine::LoaderBase> *,std::allocator<std::weak_ptr<Spectre::Engine::LoaderBase>>>(
      v15,
      a2,
      v11);
    v14 = a1[1];
    v12 = v13 + 16;
    v15 = a2;
  }
  std::_Uninitialized_move<std::weak_ptr<Spectre::Engine::LoaderBase> *,std::allocator<std::weak_ptr<Spectre::Engine::LoaderBase>>>(
    v15,
    v14,
    v12);
  std::vector<std::weak_ptr<Spectre::Engine::LoaderBase>>::_Change_array(a1, v11, v8, v9);
  return &v11[(a2 - v3) & 0xFFFFFFFFFFFFFFF0uLL];
}
