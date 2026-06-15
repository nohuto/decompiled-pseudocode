/*
 * XREFs of ?UpdateResourcePriority@CResourcePriorityTracker@@QEAAJW4_ResourcePriorityAction@@KKPEA_N@Z @ 0x180028F38
 * Callers:
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180029450 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x1800294D0 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 * Callees:
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x180028DCC (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180029050 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKK@std@@@std@@@std@@QEAAPEAU-$_Tree_node.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18002911C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKK@std@@@std@.c)
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@@1@AEBK@Z @ 0x180029154 (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CResourcePriorityTracker::UpdateResourcePriority(
        __int64 a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        _BYTE *a5)
{
  _BYTE *v9; // rsi
  __int64 *v10; // r11
  __int64 v11; // r10
  __int64 v13; // r10
  __int64 v14; // r11
  void *v15; // rax
  int v16; // eax
  unsigned int v17; // edi
  int v18; // ecx
  int v20[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v23; // [rsp+68h] [rbp+10h] BYREF

  v9 = a5;
  *a5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  if ( a2 - 1 <= 1 )
  {
    v23 = a4;
    std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Find_lower_bound<unsigned long>(
      a1 + 40,
      v20,
      &v23);
    v11 = v21;
    if ( *(_BYTE *)(v21 + 25) || a4 < *(_DWORD *)(v21 + 28) )
      v11 = *v10;
    if ( (*(_DWORD *)(v11 + 32))-- == 1 )
    {
      a5 = (_BYTE *)v11;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>,std::_Iterator_base0>::operator++(&a5);
      v15 = (void *)std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Extract(
                      v14,
                      v13);
      operator delete(v15, 0x28uLL);
    }
  }
  if ( a2 <= 1
    && (v16 = CResourcePriorityTracker::AddResourcePriorityToMap((CResourcePriorityTracker *)a1, a3), v17 = v16, v16 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x74,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v16,
      v20[0]);
    if ( a1 )
      LeaveCriticalSection((LPCRITICAL_SECTION)a1);
    return v17;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 48) )
    {
      *v9 = 0;
      v18 = *(_DWORD *)(**(_QWORD **)(a1 + 40) + 28LL);
      if ( v18 != *(_DWORD *)(a1 + 56) )
      {
        *v9 = 1;
        *(_DWORD *)(a1 + 56) = v18;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)a1);
    return 0LL;
  }
}
