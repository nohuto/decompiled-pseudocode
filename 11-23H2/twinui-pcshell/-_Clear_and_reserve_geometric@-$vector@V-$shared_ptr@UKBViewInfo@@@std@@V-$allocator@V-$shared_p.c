/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAX_K@Z @ 0x18051C598
 * Callers:
 *     ?WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x18014A300 (-WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z.c)
 *     ?HideAllInputViews@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802DB4DC (-HideAllInputViews@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@AEBA_K_K@Z @ 0x180092034 (-_Calculate_growth@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1800C4228 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

char *__fastcall std::vector<std::shared_ptr<KBViewInfo>>::_Clear_and_reserve_geometric(void **a1, unsigned __int64 a2)
{
  __int64 v3; // rax
  char *v4; // rdi
  unsigned __int64 v5; // rsi
  char *v6; // rbp
  std::_Ref_count_base *v7; // rcx
  size_t size_of; // rax
  char *result; // rax

  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v3 = std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Calculate_growth(a1, a2);
  v4 = (char *)*a1;
  v5 = v3;
  if ( *a1 )
  {
    v6 = (char *)a1[1];
    while ( v4 != v6 )
    {
      v7 = (std::_Ref_count_base *)*((_QWORD *)v4 + 1);
      if ( v7 )
        std::_Ref_count_base::_Decref(v7);
      v4 += 16;
    }
    std::_Deallocate<16,0>(*a1, ((_BYTE *)a1[2] - (_BYTE *)*a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  size_of = std::_Get_size_of_n<16>(v5);
  result = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = result;
  a1[1] = result;
  a1[2] = &result[16 * v5];
  return result;
}
