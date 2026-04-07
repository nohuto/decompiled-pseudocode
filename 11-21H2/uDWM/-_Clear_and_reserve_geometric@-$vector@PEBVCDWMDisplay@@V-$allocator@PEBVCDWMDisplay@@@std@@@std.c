/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@AEAAX_K@Z @ 0x1800B5230
 * Callers:
 *     ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x18003BB2C (-CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180037FCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800441F4 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x1800B5180 (-_Calculate_growth@-$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V-$allocator@UUserResizeVi.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180107A14 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

unsigned __int64 __fastcall std::vector<CDWMDisplay const *>::_Clear_and_reserve_geometric(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 size_of; // rax
  __int64 v5; // rax
  unsigned __int64 result; // rax

  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error((const char *)a1);
  v3 = std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Calculate_growth((_QWORD *)a1, a2);
  if ( *(_QWORD *)a1 )
  {
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(a1 + 8) = v5;
  result = v5 + 8 * v3;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
