/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBHV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180052798
 * Callers:
 *     ??$_Try_emplace@AEB_K$$V@?$map@_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1800525D4 (--$_Try_emplace@AEB_K$$V@-$map@_KV-$function@$$A6A-AV-$shared_ptr@VRendererResource@Engine@Spect.c)
 *     ??$_Try_emplace@AEBH$$V@?$map@HV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBHV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@@std@@PEAX@std@@_N@1@AEBH@Z @ 0x1800DD8AC (--$_Try_emplace@AEBH$$V@-$map@HV-$function@$$A6AXAEBV-$basic_string@_WU-$char_traits@_W@std@@V-$.c)
 *     ??$_Try_emplace@AEBH$$V@?$map@HV?$function@$$A6AXXZ@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$function@$$A6AXXZ@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBHV?$function@$$A6AXXZ@std@@@std@@PEAX@std@@_N@1@AEBH@Z @ 0x1800DFC90 (--$_Try_emplace@AEBH$$V@-$map@HV-$function@$$A6AXXZ@std@@U-$less@H@2@V-$allocator@U-$pair@$$CBHV.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18001DD9C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<int const,std::function<void (std::wstring const &)>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<int const,std::function<void (std::wstring const &)>>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    std::_Func_class<void,>::_Tidy(v3 + 40, a2);
  std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<int const,std::function<void (void)>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<int const,std::function<void (void)>>,void *>>>(a1);
}
