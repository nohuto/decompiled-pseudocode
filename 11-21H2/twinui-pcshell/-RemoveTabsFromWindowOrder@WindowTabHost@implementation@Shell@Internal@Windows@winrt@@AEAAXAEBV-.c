/*
 * XREFs of ?RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBV?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@8@@Z @ 0x18001BAC4
 * Callers:
 *     ?RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x18001B2F0 (-RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z.c)
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x18001B964 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 * Callees:
 *     ?erase@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEAA_KAEBUguid@winrt@@@Z @ 0x18001C36C (-erase@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid@winrt.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KUguid@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KUguid@winrt@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x18001CCDC (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KUguid@winrt@@V-$_Uhash_compare@_KU-$hash@_K@std@@U-$e.c)
 *     ??$_Emplace_back_internal@AEB_K@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXAEB_K@Z @ 0x18001CD88 (--$_Emplace_back_internal@AEB_K@-$deque@_KV-$allocator@_K@std@@@std@@AEAAXAEB_K@Z.c)
 *     ??0?$deque@_KV?$allocator@_K@std@@@std@@QEAA@XZ @ 0x18011EA58 (--0-$deque@_KV-$allocator@_K@std@@@std@@QEAA@XZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18013FF60 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??1?$deque@_KV?$allocator@_K@std@@@std@@QEAA@XZ @ 0x180177748 (--1-$deque@_KV-$allocator@_K@std@@@std@@QEAA@XZ.c)
 *     ??$_Try_emplace@AEBUguid@winrt@@$$V@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@_N@1@AEBUguid@winrt@@@Z @ 0x1805772D8 (--$_Try_emplace@AEBUguid@winrt@@$$V@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Ugu.c)
 *     ??$emplace_back@AEB_K@?$deque@_KV?$allocator@_K@std@@@std@@QEAAAEA_KAEB_K@Z @ 0x180577878 (--$emplace_back@AEB_K@-$deque@_KV-$allocator@_K@std@@@std@@QEAAAEA_KAEB_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveTabsFromWindowOrder(
        _QWORD *a1,
        __int64 *a2,
        unsigned __int64 j)
{
  _BYTE *v3; // r13
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rbx
  unsigned __int64 appended; // rsi
  unsigned __int64 v10; // r11
  _BYTE *v11; // r15
  unsigned __int64 k; // r11
  __int64 v14; // rdi
  __int64 m; // rbx
  char v17[8]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v18; // [rsp+40h] [rbp-21h]
  char v19[16]; // [rsp+48h] [rbp-19h] BYREF
  char v20[16]; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v21[24]; // [rsp+68h] [rbp+7h] BYREF
  unsigned __int64 v22; // [rsp+80h] [rbp+1Fh]
  _BYTE *v23; // [rsp+88h] [rbp+27h]
  _QWORD *i; // [rsp+C8h] [rbp+67h] BYREF

  std::deque<unsigned __int64>::deque<unsigned __int64>(v21);
  v8 = 0LL;
  for ( i = 0LL; (unsigned __int64)v8 < a1[88]; i = v8 )
  {
    appended = std::_Fnv1a_append_bytes(v7, (const unsigned __int8 *const)&i, 8uLL);
    v7 = *(_QWORD *)(std::_Hash<std::_Umap_traits<unsigned __int64,winrt::guid,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::guid>>,0>>::_Find_last<unsigned __int64>(
                       j,
                       v19,
                       &i,
                       appended)
                   + 8);
    if ( v7 && v7 != *(_QWORD *)(j + 8) )
    {
      v11 = v23;
      std::_Hash<std::_Umap_traits<unsigned __int64,winrt::guid,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::guid>>,0>>::_Find_last<unsigned __int64>(
        j,
        v17,
        &i,
        appended);
      if ( !v18 )
      {
        std::_Xout_of_range("invalid unordered_map<K, T> key");
        __debugbreak();
        goto LABEL_19;
      }
      *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Try_emplace<winrt::guid const &,>(
                               a1 + 89,
                               v20,
                               v18 + 24)
                + 32LL) = v11;
      std::deque<unsigned __int64>::_Emplace_back_internal<unsigned __int64 const &>(
        v21,
        *(_QWORD *)(a1[85] + 8 * ((((unsigned __int64)v8 + a1[87]) >> 1) & (a1[86] - 1LL)))
      + 8LL * (((unsigned int)a1[87] + (_DWORD)v8) & 1));
    }
    v8 = (_QWORD *)((char *)v8 + 1);
  }
  v8 = a1 + 84;
  if ( a1 + 84 != (_QWORD *)v21 )
  {
    v3 = &v23[v22];
    appended = a1[87];
    v10 = appended + a1[88];
    v11 = v21;
    for ( j = v22; (_BYTE *)j != v3; ++j )
    {
LABEL_19:
      if ( appended == v10 )
      {
        do
        {
          std::deque<unsigned __int64>::emplace_back<unsigned __int64 const &>(
            v8,
            *(_QWORD *)(*((_QWORD *)v11 + 1) + 8 * ((*((_QWORD *)v11 + 2) - 1LL) & (j >> 1))) + 8 * (j & 1));
          ++j;
        }
        while ( (_BYTE *)j != v3 );
        goto LABEL_11;
      }
      *(_QWORD *)(*(_QWORD *)(v8[1] + 8 * ((v8[2] - 1LL) & (appended >> 1))) + 8 * (appended & 1)) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 8 * ((j >> 1) & (*((_QWORD *)v11 + 2) - 1LL))) + 8 * (j & 1));
      ++appended;
    }
    for ( k = v10 - appended; k; --k )
    {
      if ( v8[4]-- == 1LL )
        v8[3] = 0LL;
    }
  }
LABEL_11:
  v14 = a2[1];
  for ( m = *a2; m != v14; m += 16LL )
    std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::erase(
      a1 + 89,
      m);
  return std::deque<unsigned __int64>::~deque<unsigned __int64>(v21);
}
