/*
 * XREFs of ??$_Insert_range@PEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@?$vector@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@2@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@std@@@std@@@1@PEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@1@1Uforward_iterator_tag@1@@Z @ 0x18002F200
 * Callers:
 *     ?ProcessNewResources@Engine@1Spectre@@IEAAXXZ @ 0x180035AA8 (-ProcessNewResources@Engine@1Spectre@@IEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@std@@@std@@YAXPEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@0@QEAV10@AEAV?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@0@@Z @ 0x1800109B0 (--$_Destroy_range@V-$allocator@V-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@std@@@std@@Y.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180010B48 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@@2@@std@@YAPEAV?$weak_ptr@VLoaderBase@Engine@Spectre@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@@0@@Z @ 0x180010C1C (--$_Uninitialized_move@PEAV-$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@V-$allocator@V-$weak_ptr.c)
 *     ?_Calculate_growth@?$vector@V?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@@2@@std@@AEBA_K_K@Z @ 0x1800118B0 (-_Calculate_growth@-$vector@V-$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@V-$allocator@V-$weak_p.c)
 *     ?_Change_array@?$vector@V?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@@2@@std@@AEAAXQEAV?$weak_ptr@VLoaderBase@Engine@Spectre@@@2@_K1@Z @ 0x1800118EC (-_Change_array@-$vector@V-$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@V-$allocator@V-$weak_ptr@V.c)
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 *     ??$_Uninitialized_copy@PEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@2@@std@@YAPEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@0@@Z @ 0x18002FF54 (--$_Uninitialized_copy@PEAV-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V-$allocator@V-$we.c)
 *     ??4?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800320E0 (--4-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

void __fastcall std::vector<std::weak_ptr<Spectre::Engine::RendererResource>>::_Insert_range<std::weak_ptr<Spectre::Engine::RendererResource> *>(
        __int64 a1,
        char *a2,
        __int64 a3,
        __int64 a4)
{
  char *v4; // r14
  char *v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v11; // rcx
  unsigned __int64 size_of; // rax
  _QWORD *v13; // rbp
  _QWORD *v14; // r8
  char *v15; // rcx
  __int64 v16; // r14
  char *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // [rsp+68h] [rbp+10h]
  __int64 v20; // [rsp+70h] [rbp+18h]

  v4 = *(char **)a1;
  v5 = *(char **)(a1 + 8);
  v6 = (a4 - a3) >> 4;
  if ( v6 )
  {
    if ( v6 <= (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v5) >> 4 )
    {
      v16 = 16 * v6;
      if ( v6 >= (v5 - a2) >> 4 )
      {
        *(_QWORD *)(a1 + 8) = std::_Uninitialized_move<std::weak_ptr<Spectre::Engine::LoaderBase> *,std::allocator<std::weak_ptr<Spectre::Engine::LoaderBase>>>(
                                a2,
                                v5,
                                &a2[v16]);
        v18 = (__int64)v5;
      }
      else
      {
        v17 = &v5[-v16];
        *(_QWORD *)(a1 + 8) = std::_Uninitialized_move<std::weak_ptr<Spectre::Engine::LoaderBase> *,std::allocator<std::weak_ptr<Spectre::Engine::LoaderBase>>>(
                                &v5[-v16],
                                *(char **)(a1 + 8),
                                *(_QWORD **)(a1 + 8));
        while ( v17 != a2 )
        {
          v17 -= 16;
          std::weak_ptr<Spectre::Engine::RendererResource>::operator=(&v17[v16], v17);
        }
        v18 = (__int64)&a2[v16];
      }
      std::_Destroy_range<std::allocator<std::weak_ptr<Spectre::Engine::RendererResource>>>((__int64)a2, v18);
      std::_Uninitialized_copy<std::weak_ptr<Spectre::Engine::RendererResource> *,std::allocator<std::weak_ptr<Spectre::Engine::RendererResource>>>(
        a3,
        a4,
        a2);
    }
    else
    {
      v11 = (v5 - v4) >> 4;
      if ( v6 > 0xFFFFFFFFFFFFFFFLL - v11 )
        std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
      v20 = v11 + v6;
      v19 = std::vector<std::weak_ptr<Spectre::Engine::LoaderBase>>::_Calculate_growth((_QWORD *)a1, v11 + v6);
      size_of = std::_Get_size_of_n<16>(v19);
      v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      std::_Uninitialized_copy<std::weak_ptr<Spectre::Engine::RendererResource> *,std::allocator<std::weak_ptr<Spectre::Engine::RendererResource>>>(
        a3,
        a4,
        &v13[2 * ((a2 - v4) >> 4)]);
      if ( v6 == 1 && a2 == v5 )
      {
        v14 = v13;
        v15 = v4;
      }
      else
      {
        std::_Uninitialized_move<std::weak_ptr<Spectre::Engine::LoaderBase> *,std::allocator<std::weak_ptr<Spectre::Engine::LoaderBase>>>(
          v4,
          a2,
          v13);
        v15 = a2;
        v14 = &v13[2 * v6 + 2 * ((a2 - v4) >> 4)];
      }
      std::_Uninitialized_move<std::weak_ptr<Spectre::Engine::LoaderBase> *,std::allocator<std::weak_ptr<Spectre::Engine::LoaderBase>>>(
        v15,
        v5,
        v14);
      std::vector<std::weak_ptr<Spectre::Engine::LoaderBase>>::_Change_array(a1, (__int64)v13, v20, v19);
    }
  }
}
