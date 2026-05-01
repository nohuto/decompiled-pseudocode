/*
 * XREFs of ?ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z @ 0x1802E79E0
 * Callers:
 *     ?ActivateTabAndUpdateTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUWindowTabView@3UI@456@_KAEBU738456@@Z @ 0x180636ADC (-ActivateTabAndUpdateTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA-.c)
 * Callees:
 *     ?at@?$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U?$hash@_K@std@@U?$equal_to@_K@8@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@@std@@QEAAAEAUWindowData@implementation@Shell@Internal@Windows@winrt@@AEB_K@Z @ 0x180033370 (-at@-$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U-$hash@_K@std@@U.c)
 *     ??$_Try_emplace@AEBUguid@winrt@@$$V@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@_N@1@AEBUguid@winrt@@@Z @ 0x1806353A0 (--$_Try_emplace@AEBUguid@winrt@@$$V@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Ugu.c)
 *     ??$emplace_front@AEB_K@?$deque@_KV?$allocator@_K@std@@@std@@QEAA?A_TAEB_K@Z @ 0x180635FB8 (--$emplace_front@AEB_K@-$deque@_KV-$allocator@_K@std@@@std@@QEAA-A_TAEB_K@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@1@AEBUguid@winrt@@@Z @ 0x180636090 (--$find@X@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid@wi.c)
 *     ?erase@?$deque@_KV?$allocator@_K@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@2@0@Z @ 0x1806389EC (-erase@-$deque@_KV-$allocator@_K@std@@@std@@QEAA-AV-$_Deque_iterator@V-$_Deque_val@U-$_Deque_sim.c)
 *     ?ActivateTab@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_NUguid@6@@Z @ 0x180639BC4 (-ActivateTab@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_NUguid@6@@Z.c)
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::ActivateTab(
        _QWORD *a1,
        __int64 a2,
        __int128 *a3)
{
  __int64 v5; // rax
  char v6; // r13
  unsigned __int64 v7; // rbx
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  _QWORD *v11; // rcx
  _QWORD *i; // rax
  unsigned __int64 v13; // rdx
  __int128 v15; // [rsp+20h] [rbp-60h] BYREF
  __int64 v16; // [rsp+30h] [rbp-50h]
  __int64 v17; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v19; // [rsp+58h] [rbp-28h]
  _BYTE v20[32]; // [rsp+60h] [rbp-20h] BYREF

  v17 = a2;
  v5 = std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
         (unsigned __int64)(a1 + 78),
         (const unsigned __int8 *)&v17);
  v15 = *a3;
  v6 = winrt::Windows::Internal::Shell::implementation::WindowData::ActivateTab(v5, &v15);
  if ( v6 )
  {
    v7 = a1[90];
    if ( *(_QWORD *)std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::find<void>(
                      a1 + 91,
                      &v15,
                      a3) != a1[92] )
    {
      v8 = a1[89];
      v9 = a1[86];
      v10 = std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Try_emplace<winrt::guid const &,>(
              a1 + 91,
              &v15,
              a3);
      v18[1] = 0LL;
      v18[0] = v9;
      v19 = v8 + *(_QWORD *)(*(_QWORD *)v10 + 32LL);
      v15 = v9;
      v16 = v19 + 1;
      ((void (__fastcall *)(_QWORD *, _BYTE *, _QWORD *, __int128 *))std::deque<unsigned __int64>::erase)(
        a1 + 86,
        v20,
        v18,
        &v15);
      v7 = *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Try_emplace<winrt::guid const &,>(
                                    a1 + 91,
                                    &v15,
                                    a3)
                     + 32LL);
    }
    v11 = (_QWORD *)a1[92];
    for ( i = (_QWORD *)*v11; i != v11; i = (_QWORD *)*i )
    {
      v13 = i[4];
      if ( v13 < v7 )
        i[4] = v13 + 1;
    }
    *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Try_emplace<winrt::guid const &,>(
                             a1 + 91,
                             &v15,
                             a3)
              + 32LL) = 0LL;
    std::deque<unsigned __int64>::emplace_front<unsigned __int64 const &>(a1 + 86, &v17);
  }
  return v6;
}
