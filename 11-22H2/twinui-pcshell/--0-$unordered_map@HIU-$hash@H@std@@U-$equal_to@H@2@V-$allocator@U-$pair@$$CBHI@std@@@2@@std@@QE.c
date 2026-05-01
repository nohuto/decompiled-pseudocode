/*
 * XREFs of ??0?$unordered_map@HIU?$hash@H@std@@U?$equal_to@H@2@V?$allocator@U?$pair@$$CBHI@std@@@2@@std@@QEAA@XZ @ 0x1802215AC
 * Callers:
 *     ??0CShellSnapComponent@@QEAA@XZ @ 0x180109480 (--0CShellSnapComponent@@QEAA@XZ.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@HIV?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHI@std@@@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@1@AEBV?$allocator@U?$pair@$$CBHI@std@@@1@@Z @ 0x18022124C (--0-$_Hash@V-$_Umap_traits@HIV-$_Uhash_compare@HU-$hash@H@std@@U-$equal_to@H@2@@std@@V-$allocato.c)
 */

__int64 __fastcall std::unordered_map<int,unsigned int>::unordered_map<int,unsigned int>(__int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  std::_Hash<std::_Umap_traits<int,unsigned int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>,std::allocator<std::pair<int const,unsigned int>>,0>>::_Hash<std::_Umap_traits<int,unsigned int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>,std::allocator<std::pair<int const,unsigned int>>,0>>(
    a1,
    &v3);
  return a1;
}
