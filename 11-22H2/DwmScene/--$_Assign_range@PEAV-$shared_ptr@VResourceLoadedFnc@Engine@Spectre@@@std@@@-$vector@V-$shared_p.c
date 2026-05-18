/*
 * XREFs of ??$_Assign_range@PEAV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@AEAAXPEAV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@1@0Uforward_iterator_tag@1@@Z @ 0x18009705C
 * Callers:
 *     ??4?$vector@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800975E4 (--4-$vector@V-$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VR.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@0@@Z @ 0x18001203C (--$_Destroy_range@V-$allocator@V-$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@std@@@std@@YA.c)
 *     ??$_Copy_unchecked@PEAV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@0@PEAV10@00@Z @ 0x18009718C (--$_Copy_unchecked@PEAV-$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@PEAV12@@std@@YAPEAV.c)
 *     ??$_Uninitialized_copy@PEAV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@YAPEAV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@0@@Z @ 0x1800972F0 (--$_Uninitialized_copy@PEAV-$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V-$allocator@V-.c)
 *     ?_Clear_and_reserve_geometric@?$vector@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@AEAAX_K@Z @ 0x180097810 (-_Clear_and_reserve_geometric@-$vector@V-$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V-.c)
 */

void __fastcall std::vector<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>::_Assign_range<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc> *>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rsi
  __int64 v8; // rsi
  __int64 v9; // rbx

  v3 = (a3 - a2) >> 4;
  v5 = (__int64)(a1[1] - *a1) >> 4;
  if ( v3 <= v5 )
  {
    v9 = *a1 + 16 * v3;
    std::_Copy_unchecked<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc> *,std::shared_ptr<Spectre::Engine::ResourceLoadedFnc> *>(
      a2,
      a3,
      *a1);
    std::_Destroy_range<std::allocator<std::shared_ptr<Spectre::Engine::IRenderOutput>>>(v9, a1[1]);
  }
  else
  {
    if ( v3 > (__int64)(a1[2] - *a1) >> 4 )
    {
      std::vector<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>::_Clear_and_reserve_geometric(a1, (a3 - a2) >> 4);
      v5 = 0LL;
    }
    v8 = a2 + 16 * v5;
    std::_Copy_unchecked<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc> *,std::shared_ptr<Spectre::Engine::ResourceLoadedFnc> *>(
      a2,
      v8,
      *a1);
    v9 = std::_Uninitialized_copy<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc> *,std::allocator<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>>(
           v8,
           a3,
           a1[1]);
  }
  a1[1] = v9;
}
