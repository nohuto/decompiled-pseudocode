/*
 * XREFs of ?ClearCancelledCallback@SimpleCancellationToken@Internal@Utils@Spectre@@UEAAXH@Z @ 0x1800E0230
 * Callers:
 *     <none>
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBHV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBHV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBHV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18001CA94 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBHV-$function@$$A6AXAEBV-$basic_string@_WU-$c.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@QEAAPEAU?$_Tree_node@_KPEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180028BD0 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@QEAAPEAU-$_Tree_node@_KPEAX@2@V-$_Tree.c)
 *     ??$_Find_lower_bound@H@?$_Tree@V?$_Tmap_traits@HV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBHV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@std@@PEAX@std@@@1@AEBH@Z @ 0x18002EFCC (--$_Find_lower_bound@H@-$_Tree@V-$_Tmap_traits@HV-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@.c)
 */

void __fastcall Spectre::Utils::Internal::SimpleCancellationToken::ClearCancelledCallback(
        Spectre::Utils::Internal::SimpleCancellationToken *this,
        int a2)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  _BYTE v6[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = a2;
  std::_Mutex_base::lock((Spectre::Utils::Internal::SimpleCancellationToken *)((char *)this + 8));
  std::_Tree<std::_Tmap_traits<int,std::shared_ptr<Spectre::Engine::LightProbe>,std::less<int>,std::allocator<std::pair<int const,std::shared_ptr<Spectre::Engine::LightProbe>>>,0>>::_Find_lower_bound<int>(
    (__int64 *)this + 12,
    (__int64)v6,
    &v8);
  if ( !*(_BYTE *)(v7 + 25) && a2 >= *(_DWORD *)(v7 + 32) && v7 != *((_QWORD *)this + 12) )
  {
    v4 = std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Extract((_QWORD *)this + 12, v7);
    std::_Tree_node<std::pair<int const,std::function<void (std::wstring const &)>>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<int const,std::function<void (std::wstring const &)>>,void *>>>(
      v5,
      (char *)v4);
  }
  _Mtx_unlock((Spectre::Utils::Internal::SimpleCancellationToken *)((char *)this + 8));
}
