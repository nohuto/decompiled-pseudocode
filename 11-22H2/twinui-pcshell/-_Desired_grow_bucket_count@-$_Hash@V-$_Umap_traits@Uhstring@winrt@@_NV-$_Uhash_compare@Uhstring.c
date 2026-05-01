/*
 * XREFs of ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1806F6564
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x1806F6A34 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uhash_compare@Uhstring@winrt@@U-$ha.c)
 * Callees:
 *     _o_ceilf_0 @ 0x1801C7464 (_o_ceilf_0.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::_Desired_grow_bucket_count(
        __int64 a1,
        __int64 a2)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 result; // rax

  if ( a2 < 0 )
    v2 = (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1))
       + (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1));
  else
    v2 = (float)(int)a2;
  v3 = o_ceilf_0(v2 / *(float *)&dword_180990150);
  v4 = 0LL;
  if ( v3 >= 9.223372e18 )
  {
    v3 = v3 - 9.223372e18;
    if ( v3 < 9.223372e18 )
      v4 = 0x8000000000000000uLL;
  }
  v5 = v4 + (unsigned int)(int)v3;
  v6 = 8LL;
  if ( v5 > 8 )
    v6 = v5;
  result = qword_180990188;
  if ( qword_180990188 < v6 )
  {
    if ( (unsigned __int64)qword_180990188 < 0x200 && 8 * qword_180990188 >= v6 )
      return 8 * qword_180990188;
    return v6;
  }
  return result;
}
