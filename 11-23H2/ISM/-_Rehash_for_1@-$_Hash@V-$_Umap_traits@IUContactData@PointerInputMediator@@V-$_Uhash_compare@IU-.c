/*
 * XREFs of ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x1800FD398
 * Callers:
 *     ??$emplace@AEAIUContactData@PointerInputMediator@@@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@std@@@std@@@std@@_N@1@AEAI$$QEAUContactData@PointerInputMediator@@@Z @ 0x1800FC520 (--$emplace@AEAIUContactData@PointerInputMediator@@@-$_Hash@V-$_Umap_traits@IUContactData@Pointer.c)
 * Callees:
 *     ?_Min_load_factor_buckets@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800FD1F4 (-_Min_load_factor_buckets@-$_Hash@V-$_Umap_traits@IUContactData@PointerInputMediator@@V-$_Uhash_.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::_Rehash_for_1(
        __int64 a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 factor_buckets; // rax
  unsigned __int64 v4; // rdx

  v2 = *(_QWORD *)(a1 + 56);
  factor_buckets = std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::_Min_load_factor_buckets(
                     (float *)a1,
                     *(_QWORD *)(a1 + 16) + 1LL);
  v4 = 8LL;
  if ( factor_buckets > 8 )
    v4 = factor_buckets;
  if ( v2 < v4 )
  {
    if ( v2 >= 0x200 || (v2 *= 8LL, v2 < v4) )
      v2 = v4;
  }
  return std::_Hash<std::_Umap_traits<unsigned long,ShellGesturesRecognizer::ContactState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>>,0>>::_Forced_rehash(
           (_QWORD *)a1,
           v2);
}
