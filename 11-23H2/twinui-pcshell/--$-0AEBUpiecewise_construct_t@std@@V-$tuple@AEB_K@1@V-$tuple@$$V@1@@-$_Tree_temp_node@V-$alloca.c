/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1806E0628
 * Callers:
 *     ??$_Try_emplace@AEB_K$$V@?$map@_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1806E0A4C (--$_Try_emplace@AEB_K$$V@-$map@_KU-$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@U-$less@.c)
 * Callees:
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x180093A9C (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,winrt::com_ptr<SharedDesktopBackgroundVisualHost>>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,winrt::com_ptr<SharedDesktopBackgroundVisualHost>>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD **a5)
{
  size_t size_of; // rax
  _QWORD *v8; // rax
  __int64 i; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<48>(1uLL);
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  a1[1] = v8;
  v8[4] = **a5;
  v8[5] = 0LL;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(a1[1] + i + 24) = 0;
  return a1;
}
