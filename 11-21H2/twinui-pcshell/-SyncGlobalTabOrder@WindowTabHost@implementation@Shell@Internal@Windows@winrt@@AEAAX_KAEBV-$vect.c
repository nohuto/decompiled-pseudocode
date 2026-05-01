/*
 * XREFs of ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x18001B964
 * Callers:
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x180019CFC (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 *     ?OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelTabsChangedEventArgs@38456@@Z @ 0x180578930 (-OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabData.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@Uguid@winrt@@PEAX@std@@@std@@@?$_List_node@Uguid@winrt@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@Uguid@winrt@@PEAX@std@@@1@PEAU01@@Z @ 0x18001B2B8 (--$_Free_non_head@V-$allocator@U-$_List_node@Uguid@winrt@@PEAX@std@@@std@@@-$_List_node@Uguid@wi.c)
 *     ?RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBV?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@8@@Z @ 0x18001BAC4 (-RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV-.c)
 *     ??$emplace@AEBUguid@winrt@@AEA_K@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@std@@_N@1@AEBUguid@winrt@@AEA_K@Z @ 0x18001BC14 (--$emplace@AEBUguid@winrt@@AEA_K@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@.c)
 *     ??$find@X@?$_Hash@V?$_Uset_traits@Uguid@winrt@@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@Uguid@winrt@@@4@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@Uguid@winrt@@@std@@@std@@@1@AEBUguid@winrt@@@Z @ 0x18001C42C (--$find@X@-$_Hash@V-$_Uset_traits@Uguid@winrt@@V-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid@winr.c)
 *     ??$emplace@AEBUguid@winrt@@@?$_Hash@V?$_Uset_traits@Uguid@winrt@@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@Uguid@winrt@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@Uguid@winrt@@@std@@@std@@@std@@_N@1@AEBUguid@winrt@@@Z @ 0x18001C49C (--$emplace@AEBUguid@winrt@@@-$_Hash@V-$_Uset_traits@Uguid@winrt@@V-$_Uhash_compare@Uguid@winrt@@.c)
 *     ??0?$deque@_KV?$allocator@_K@std@@@std@@QEAA@_KAEB_K@Z @ 0x18001CD10 (--0-$deque@_KV-$allocator@_K@std@@@std@@QEAA@_KAEB_K@Z.c)
 *     ??0?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@std@@QEAA@XZ @ 0x18001CFA8 (--0-$unordered_map@_KUguid@winrt@@U-$hash@_K@std@@U-$equal_to@_K@4@V-$allocator@U-$pair@$$CB_KUg.c)
 *     ??0?$_Hash@V?$_Uset_traits@Uguid@winrt@@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@Uguid@winrt@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@1@AEBV?$allocator@Uguid@winrt@@@1@@Z @ 0x18001D110 (--0-$_Hash@V-$_Uset_traits@Uguid@winrt@@V-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid@winrt@@@std.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?_Swap_proxy_and_iterators@_Container_base12@std@@QEAAXAEAU12@@Z @ 0x1801217A0 (-_Swap_proxy_and_iterators@_Container_base12@std@@QEAAXAEAU12@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$deque@_KV?$allocator@_K@std@@@std@@QEAA@XZ @ 0x180177748 (--1-$deque@_KV-$allocator@_K@std@@@std@@QEAA@XZ.c)
 *     ?_Tidy@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXXZ @ 0x180177774 (-_Tidy@-$deque@_KV-$allocator@_K@std@@@std@@AEAAXXZ.c)
 *     ??$emplace@AEA_KAEBUguid@winrt@@@?$_Hash@V?$_Umap_traits@_KUguid@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@std@@_N@1@AEA_KAEBUguid@winrt@@@Z @ 0x180577410 (--$emplace@AEA_KAEBUguid@winrt@@@-$_Hash@V-$_Umap_traits@_KUguid@winrt@@V-$_Uhash_compare@_KU-$h.c)
 *     ??$emplace@AEBUguid@winrt@@_K@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@std@@_N@1@AEBUguid@winrt@@$$QEA_K@Z @ 0x1805775AC (--$emplace@AEBUguid@winrt@@_K@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@win.c)
 *     ?push_front@?$deque@_KV?$allocator@_K@std@@@std@@QEAAXAEB_K@Z @ 0x180579644 (-push_front@-$deque@_KV-$allocator@_K@std@@@std@@QEAAXAEB_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncGlobalTabOrder(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4)
{
  __int64 v6; // r13
  __int64 v8; // rdi
  __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  __int64 v11; // r9
  struct std::_Container_base12 *v12; // rbx
  _QWORD **v14; // rdi
  _QWORD *i; // rbx
  _QWORD *v16; // rax
  _QWORD **v17; // rcx
  _QWORD *v18; // rcx
  _QWORD *v19; // rbx
  __int64 v20; // rcx
  _QWORD *v21; // rcx
  _QWORD *j; // rax
  __int64 v23; // rdx
  __int64 v24; // rdi
  _QWORD v25[2]; // [rsp+20h] [rbp-79h] BYREF
  _BYTE v26[8]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v27; // [rsp+38h] [rbp-61h]
  __int64 v28; // [rsp+48h] [rbp-51h]
  __int128 v29; // [rsp+50h] [rbp-49h]
  _BYTE v30[8]; // [rsp+70h] [rbp-29h] BYREF
  _QWORD **v31; // [rsp+78h] [rbp-21h]
  __int64 v32; // [rsp+88h] [rbp-11h]
  __int128 v33; // [rsp+90h] [rbp-9h]
  _BYTE v34[64]; // [rsp+B0h] [rbp+17h] BYREF
  unsigned __int64 v35; // [rsp+100h] [rbp+67h] BYREF
  __int64 v36; // [rsp+108h] [rbp+6Fh] BYREF
  char v37; // [rsp+110h] [rbp+77h] BYREF

  v36 = a2;
  v6 = a2;
  wil::AcquireSRWLockExclusive(&v37, a1 + 75);
  v8 = a4[1];
  v9 = *a4;
  v10 = 0LL;
  if ( (v8 - *a4) >> 4 )
  {
    LODWORD(v35) = 0;
    std::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>(
      v26,
      &v35);
    while ( v9 != v8 )
    {
      std::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>::emplace<winrt::guid const &>(
        v26,
        v25,
        v9);
      v9 += 16LL;
    }
    std::unordered_map<unsigned __int64,winrt::guid>::unordered_map<unsigned __int64,winrt::guid>(v30);
    v14 = (_QWORD **)a1[90];
    for ( i = *v14; i != v14; i = (_QWORD *)*i )
    {
      v16 = (_QWORD *)std::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>::find<void>(
                        v26,
                        &v35,
                        i + 2);
      if ( *v16 == v27 )
        std::_Hash<std::_Umap_traits<unsigned __int64,winrt::guid,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::guid>>,0>>::emplace<unsigned __int64 &,winrt::guid const &>(
          v30,
          v25,
          i + 4);
    }
    winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveTabsFromWindowOrder(a1, a4, v30);
    std::_Deallocate<16,0>(v32, (v33 - v32) & 0xFFFFFFFFFFFFFFF8uLL);
    v32 = 0LL;
    v33 = 0LL;
    v17 = v31;
    *v31[1] = 0LL;
    v18 = *v17;
    if ( v18 )
    {
      do
      {
        v19 = (_QWORD *)*v18;
        std::_Deallocate<16,0>(v18, 40LL);
        v18 = v19;
      }
      while ( v19 );
    }
    std::_Deallocate<16,0>(v31, 40LL);
    std::_Deallocate<16,0>(v28, (v29 - v28) & 0xFFFFFFFFFFFFFFF8uLL);
    v28 = 0LL;
    v29 = 0LL;
    std::_List_node<winrt::guid,void *>::_Free_non_head<std::allocator<std::_List_node<winrt::guid,void *>>>(v20, v27);
    std::_Deallocate<16,0>(v27, 32LL);
    v6 = v36;
  }
  v11 = (__int64)(a3[1] - *a3) >> 4;
  if ( v11 )
  {
    if ( a1[88] )
    {
      v21 = (_QWORD *)a1[90];
      for ( j = (_QWORD *)*v21; j != v21; j = (_QWORD *)*j )
      {
        v23 = j[4];
        if ( v23 )
          j[4] = v11 + v23;
      }
      if ( (__int64)(a3[1] - *a3) >> 4 )
      {
        v25[0] = a1 + 84;
        v24 = 0LL;
        do
        {
          std::deque<unsigned __int64>::push_front(
            a1 + 84,
            *(_QWORD *)(a1[85] + 8 * ((a1[87] >> 1) & (a1[86] - 1LL))) + 8 * (a1[87] & 1LL));
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25[0] + 8LL)
                                + 8 * (((unsigned __int64)(a1[87] + 1LL) >> 1) & (*(_QWORD *)(v25[0] + 16LL) - 1LL)))
                    + 8LL * ((*((_DWORD *)a1 + 174) + 1) & 1)) = v6;
          v35 = ++v10;
          std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::emplace<winrt::guid const &,unsigned __int64>(
            a1 + 89,
            v34,
            v24 + *a3,
            &v35);
          v24 += 16LL;
        }
        while ( v10 < (__int64)(a3[1] - *a3) >> 4 );
      }
    }
    else
    {
      v12 = (struct std::_Container_base12 *)std::deque<unsigned __int64>::deque<unsigned __int64>(
                                               v26,
                                               (__int64)(a3[1] - *a3) >> 4,
                                               &v36);
      if ( a1 + 84 != (_QWORD *)v12 )
      {
        std::deque<unsigned __int64>::_Tidy(a1 + 84);
        std::_Container_base12::_Swap_proxy_and_iterators((std::_Container_base12 *)(a1 + 84), v12);
        a1[85] = *((_QWORD *)v12 + 1);
        a1[86] = *((_QWORD *)v12 + 2);
        a1[87] = *((_QWORD *)v12 + 3);
        a1[88] = *((_QWORD *)v12 + 4);
        *((_QWORD *)v12 + 1) = 0LL;
        *((_QWORD *)v12 + 2) = 0LL;
        *((_QWORD *)v12 + 3) = 0LL;
        *((_QWORD *)v12 + 4) = 0LL;
      }
      std::deque<unsigned __int64>::~deque<unsigned __int64>(v26);
      v35 = 0LL;
      if ( (__int64)(a3[1] - *a3) >> 4 )
      {
        do
        {
          std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::emplace<winrt::guid const &,unsigned __int64 &>(
            a1 + 89,
            v25,
            *a3 + 16 * v10,
            &v35);
          v10 = v35 + 1;
          v35 = v10;
        }
        while ( v10 < (__int64)(a3[1] - *a3) >> 4 );
      }
    }
  }
  return wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v37);
}
