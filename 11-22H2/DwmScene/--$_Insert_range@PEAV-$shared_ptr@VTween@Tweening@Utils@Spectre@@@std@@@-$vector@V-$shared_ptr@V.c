/*
 * XREFs of ??$_Insert_range@PEAV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@?$vector@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@V?$allocator@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@2@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@std@@@std@@@1@PEAV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@1@1Uforward_iterator_tag@1@@Z @ 0x1800E0510
 * Callers:
 *     ??$insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@std@@@std@@@std@@$0A@@?$vector@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@V?$allocator@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@std@@@std@@@1@V21@1@Z @ 0x1800E06BC (--$insert@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@VTween@Tweening@Util.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180010B48 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Calculate_growth@?$vector@V?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@@2@@std@@AEBA_K_K@Z @ 0x1800118B0 (-_Calculate_growth@-$vector@V-$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@V-$allocator@V-$weak_p.c)
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@0@@Z @ 0x18001203C (--$_Destroy_range@V-$allocator@V-$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@std@@@std@@YA.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@2@@std@@YAPEAV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@0@@Z @ 0x180012228 (--$_Uninitialized_move@PEAV-$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V-$allocator@V-$sha.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@V?$allocator@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@2@_K1@Z @ 0x18001306C (-_Change_array@-$vector@V-$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@V-$allocator@V-$share.c)
 *     ??$_Uninitialized_copy@PEAV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@YAPEAV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@0@@Z @ 0x1800972F0 (--$_Uninitialized_copy@PEAV-$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V-$allocator@V-.c)
 */

void __fastcall std::vector<std::shared_ptr<Spectre::Utils::Tweening::Tween>>::_Insert_range<std::shared_ptr<Spectre::Utils::Tweening::Tween> *>(
        __int64 a1,
        char *a2,
        char *a3,
        char *a4)
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
  __int64 *v17; // rsi
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
        *(_QWORD *)(a1 + 8) = std::_Uninitialized_move<std::shared_ptr<Spectre::Engine::IRenderOutput> *,std::allocator<std::shared_ptr<Spectre::Engine::IRenderOutput>>>(
                                a2,
                                v5,
                                &a2[v16]);
        v18 = (__int64)v5;
      }
      else
      {
        v17 = (__int64 *)&v5[-v16];
        *(_QWORD *)(a1 + 8) = std::_Uninitialized_move<std::shared_ptr<Spectre::Engine::IRenderOutput> *,std::allocator<std::shared_ptr<Spectre::Engine::IRenderOutput>>>(
                                &v5[-v16],
                                *(char **)(a1 + 8),
                                *(_QWORD **)(a1 + 8));
        while ( v17 != (__int64 *)a2 )
        {
          v17 -= 2;
          std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(&v17[(unsigned __int64)v16 / 8], v17);
        }
        v18 = (__int64)&a2[v16];
      }
      std::_Destroy_range<std::allocator<std::shared_ptr<Spectre::Engine::IRenderOutput>>>((__int64)a2, v18);
      std::_Uninitialized_copy<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc> *,std::allocator<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>>(
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
      std::_Uninitialized_copy<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc> *,std::allocator<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>>(
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
        std::_Uninitialized_move<std::shared_ptr<Spectre::Engine::IRenderOutput> *,std::allocator<std::shared_ptr<Spectre::Engine::IRenderOutput>>>(
          v4,
          a2,
          v13);
        v15 = a2;
        v14 = &v13[2 * v6 + 2 * ((a2 - v4) >> 4)];
      }
      std::_Uninitialized_move<std::shared_ptr<Spectre::Engine::IRenderOutput> *,std::allocator<std::shared_ptr<Spectre::Engine::IRenderOutput>>>(
        v15,
        v5,
        v14);
      std::vector<std::shared_ptr<Spectre::Utils::Tweening::Tween>>::_Change_array(a1, (__int64)v13, v20, v19);
    }
  }
}
