/*
 * XREFs of ?Make@PointerMetadata@@YAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@Z @ 0x1801A5430
 * Callers:
 *     <none>
 * Callees:
 *     ??$count@X@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x1800DDA6C (--$count@X@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$a.c)
 */

void __fastcall PointerMetadata::Make(__int64 a1, __int64 a2)
{
  __int64 i; // rdi
  int v5; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 316); i = (unsigned int)(i + 1) )
  {
    v5 = *(_DWORD *)(a1 + 144 * i + 324);
    if ( std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::count<void>(
           a2,
           (const unsigned __int8 *)&v5) )
    {
      *(_DWORD *)(a1 + 144 * i + 332) |= 0x10000u;
    }
  }
}
