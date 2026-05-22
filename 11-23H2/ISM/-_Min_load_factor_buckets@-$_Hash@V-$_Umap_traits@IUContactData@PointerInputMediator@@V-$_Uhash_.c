/*
 * XREFs of ?_Min_load_factor_buckets@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800FD1F4
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x1800FD398 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@IUContactData@PointerInputMediator@@V-$_Uhash_compare@IU-.c)
 *     ?reserve@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAAX_K@Z @ 0x1800FD7EC (-reserve@-$_Hash@V-$_Umap_traits@IUContactData@PointerInputMediator@@V-$_Uhash_compare@IU-$hash@.c)
 * Callees:
 *     _o_ceilf_0 @ 0x1800565C8 (_o_ceilf_0.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::_Min_load_factor_buckets(
        float *a1,
        __int64 a2)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  unsigned __int64 v4; // rcx

  if ( a2 < 0 )
    v2 = (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1))
       + (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1));
  else
    v2 = (float)(int)a2;
  v3 = o_ceilf_0(v2 / *a1);
  v4 = 0LL;
  if ( v3 >= 9.223372e18 )
  {
    v3 = v3 - 9.223372e18;
    if ( v3 < 9.223372e18 )
      v4 = 0x8000000000000000uLL;
  }
  return v4 + (unsigned int)(int)v3;
}
