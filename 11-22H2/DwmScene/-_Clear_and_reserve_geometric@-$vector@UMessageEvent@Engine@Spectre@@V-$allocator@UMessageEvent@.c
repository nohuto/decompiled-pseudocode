/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@UMessageEvent@Engine@Spectre@@V?$allocator@UMessageEvent@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x1800744CC
 * Callers:
 *     ??$_Assign_range@PEAUMessageEvent@Engine@Spectre@@@?$vector@UMessageEvent@Engine@Spectre@@V?$allocator@UMessageEvent@Engine@Spectre@@@std@@@std@@AEAAXPEAUMessageEvent@Engine@Spectre@@0Uforward_iterator_tag@1@@Z @ 0x1800742D8 (--$_Assign_range@PEAUMessageEvent@Engine@Spectre@@@-$vector@UMessageEvent@Engine@Spectre@@V-$all.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 *     ?_Calculate_growth@?$vector@UMessageEvent@Engine@Spectre@@V?$allocator@UMessageEvent@Engine@Spectre@@@std@@@std@@AEBA_K_K@Z @ 0x180074490 (-_Calculate_growth@-$vector@UMessageEvent@Engine@Spectre@@V-$allocator@UMessageEvent@Engine@Spec.c)
 */

char *__fastcall std::vector<Spectre::Engine::MessageEvent>::_Clear_and_reserve_geometric(
        void **a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi

  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
  v3 = std::vector<Spectre::Engine::MessageEvent>::_Calculate_growth(a1, a2);
  if ( *a1 )
  {
    std::_Deallocate<16,0>(*a1, ((_BYTE *)a1[2] - (_BYTE *)*a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return std::vector<Spectre::Engine::MessageEvent>::_Buy_raw(a1, v3);
}
