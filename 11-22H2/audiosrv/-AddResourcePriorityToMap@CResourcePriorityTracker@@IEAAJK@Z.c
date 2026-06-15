/*
 * XREFs of ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x180028DCC
 * Callers:
 *     ?UpdateResourcePriority@CResourcePriorityTracker@@QEAAJW4_ResourcePriorityAction@@KKPEA_N@Z @ 0x180028F38 (-UpdateResourcePriority@CResourcePriorityTracker@@QEAAJW4_ResourcePriorityAction@@KKPEA_N@Z.c)
 * Callees:
 *     ??$_Try_emplace@AEBK$$V@?$map@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180028E48 (--$_Try_emplace@AEBK$$V@-$map@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@@std@@AEAA-AU.c)
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@@1@AEBK@Z @ 0x180029154 (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@.c)
 */

__int64 __fastcall CResourcePriorityTracker::AddResourcePriorityToMap(CResourcePriorityTracker *this, int a2)
{
  __int64 lower; // rax
  unsigned int v3; // r10d
  __int64 v4; // r11
  __int64 v5; // rcx
  const char *v6; // r9
  __int64 result; // rax
  __int64 v8; // rax
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  lower = std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Find_lower_bound<unsigned long>(
            (char *)this + 40,
            v9,
            &v11);
  try
  {
    v5 = *(_QWORD *)(lower + 16);
    if ( *(_BYTE *)(v5 + 25) || v3 < *(_DWORD *)(v5 + 28) )
    {
      *(_DWORD *)(*(_QWORD *)std::map<unsigned long,unsigned long>::_Try_emplace<unsigned long const &,>(v4, v9, &v11)
                + 32LL) = 1;
    }
    else
    {
      v8 = std::map<unsigned long,unsigned long>::_Try_emplace<unsigned long const &,>(v4, v9, &v11);
      ++*(_DWORD *)(*(_QWORD *)v8 + 32LL);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x92,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                           v6);
  }
  return result;
}
