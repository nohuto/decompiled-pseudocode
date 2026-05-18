/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@std@@@2@@std@@AEAAX_K@Z @ 0x1800DA7C0
 * Callers:
 *     ?GetDisplays@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEBA?AV?$vector@V?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x1800D95D0 (-GetDisplays@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEBA-AV-$vector@V-$s.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180010B48 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@2@@std@@YAPEAV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@0@@Z @ 0x180012228 (--$_Uninitialized_move@PEAV-$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V-$allocator@V-$sha.c)
 */

void __fastcall std::vector<std::shared_ptr<Spectre::Engine::D3D11::Holographic::HolographicDisplayState>>::_Reallocate_exactly(
        char **a1,
        unsigned __int64 a2)
{
  __int64 v4; // rdi
  unsigned __int64 size_of; // rax
  _QWORD *v6; // rbx

  v4 = (a1[1] - *a1) >> 4;
  size_of = std::_Get_size_of_n<16>(a2);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  std::_Uninitialized_move<std::shared_ptr<Spectre::Engine::IRenderOutput> *,std::allocator<std::shared_ptr<Spectre::Engine::IRenderOutput>>>(
    *a1,
    a1[1],
    v6);
  std::vector<std::shared_ptr<Spectre::Utils::Tweening::Tween>>::_Change_array((__int64)a1, (__int64)v6, v4, a2);
}
