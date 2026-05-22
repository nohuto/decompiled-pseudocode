/*
 * XREFs of ?List@PointerMetadata@@YAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@Z @ 0x1801C3350
 * Callers:
 *     <none>
 * Callees:
 *     ?clear@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAAXXZ @ 0x180154220 (-clear@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$alloc.c)
 *     ??$emplace@K@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@@std@@_N@1@$$QEAK@Z @ 0x1801C299C (--$emplace@K@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-.c)
 */

void __fastcall PointerMetadata::List(__int64 a1, _QWORD *a2)
{
  __int64 i; // rbx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+40h] [rbp+8h] BYREF

  std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::clear(a2);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 316); i = (unsigned int)(i + 1) )
  {
    v6 = *(_DWORD *)(a1 + 144 * i + 324);
    std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::emplace<unsigned long>(
      a2,
      (__int64)v5,
      (unsigned __int8 *)&v6);
  }
}
