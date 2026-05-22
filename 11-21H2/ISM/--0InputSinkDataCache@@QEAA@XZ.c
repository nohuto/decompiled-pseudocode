/*
 * XREFs of ??0InputSinkDataCache@@QEAA@XZ @ 0x18003BCE4
 * Callers:
 *     ?GetInstance@InputSinkDataCache@@SAAEAV1@XZ @ 0x180003F34 (-GetInstance@InputSinkDataCache@@SAAEAV1@XZ.c)
 *     ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x180014E30 (-UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@std@@@std@@@2@@Z @ 0x18003A998 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_18003A998.c)
 */

// Hidden C++ exception states: #wind=2
InputSinkDataCache *__fastcall InputSinkDataCache::InputSinkDataCache(InputSinkDataCache *this)
{
  _QWORD *v1; // rax

  stru_180242950.Ptr = 0LL;
  dword_180242958 = 0;
  qword_180242960 = 0LL;
  qword_180242968 = 0LL;
  v1 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v1 = v1;
  v1[1] = v1;
  qword_180242960 = (__int64)v1;
  xmmword_180242970 = 0LL;
  qword_180242980 = 0LL;
  qword_180242988 = 7LL;
  qword_180242990 = 8LL;
  dword_180242958 = LODWORD(FLOAT_1_0);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>>>>>>>::_Assign_grow(
    (__int64)&xmmword_180242970,
    0x10uLL,
    (unsigned __int64)v1);
  qword_180242998 = 0LL;
  xmmword_1802429A0 = 0LL;
  qword_1802429B0 = 0LL;
  byte_1802429B8 = 0;
  return (InputSinkDataCache *)&stru_180242950;
}
