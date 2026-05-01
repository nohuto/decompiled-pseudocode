/*
 * XREFs of ?RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBV?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@8@@Z @ 0x1800327D4
 * Callers:
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x180031A50 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 *     ?RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x180032BE0 (-RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z.c)
 * Callees:
 *     ??$_Emplace_back_internal@AEB_K@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXAEB_K@Z @ 0x180031514 (--$_Emplace_back_internal@AEB_K@-$deque@_KV-$allocator@_K@std@@@std@@AEAAXAEB_K@Z.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KUguid@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KUguid@winrt@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x180032928 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KUguid@winrt@@V-$_Uhash_compare@_KU-$hash@_K@std@@U-$e.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEAA_KAEBUguid@winrt@@@Z @ 0x18003295C (-erase@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid@winrt.c)
 *     ??0?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@QEAA@XZ @ 0x18008B3D0 (--0-$deque@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_clock@chrono@.c)
 *     ??1?$deque@_KV?$allocator@_K@std@@@std@@QEAA@XZ @ 0x180145218 (--1-$deque@_KV-$allocator@_K@std@@@std@@QEAA@XZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18014DC58 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Try_emplace@AEBUguid@winrt@@$$V@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@_N@1@AEBUguid@winrt@@@Z @ 0x1806353A0 (--$_Try_emplace@AEBUguid@winrt@@$$V@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Ugu.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveTabsFromWindowOrder(
        _QWORD *a1,
        __int64 *a2,
        _BYTE *a3)
{
  unsigned __int64 v6; // rcx
  _QWORD *v7; // rbx
  unsigned __int64 i; // rdi
  char v9; // r13
  unsigned __int64 appended; // r15
  _QWORD *v11; // rcx
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r9
  unsigned __int64 j; // r10
  __int64 v17; // rdi
  __int64 k; // rbx
  __int64 v20; // rax
  _BYTE *v21; // [rsp+20h] [rbp-60h] BYREF
  _QWORD *v22; // [rsp+28h] [rbp-58h]
  char v23[16]; // [rsp+30h] [rbp-50h] BYREF
  char v24[16]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v25[24]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD *v26; // [rsp+68h] [rbp-18h]
  __int64 v27; // [rsp+70h] [rbp-10h]
  _QWORD *v28; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v29; // [rsp+D8h] [rbp+58h]

  std::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>(v25);
  v7 = 0LL;
  v28 = 0LL;
  if ( a1[90] )
  {
    i = (unsigned __int64)(a3 + 8);
    v9 = (_BYTE)a3 + 8;
    do
    {
      appended = std::_Fnv1a_append_bytes(v6, (const unsigned __int8 *const)&v28, 8uLL);
      v6 = *(_QWORD *)(std::_Hash<std::_Umap_traits<unsigned __int64,winrt::guid,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::guid>>,0>>::_Find_last<unsigned __int64>(
                         a3,
                         v23,
                         &v28,
                         appended)
                     + 8);
      if ( v6 )
      {
        if ( v6 != *(_QWORD *)i )
        {
          v29 = v27;
          std::_Hash<std::_Umap_traits<unsigned __int64,winrt::guid,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::guid>>,0>>::_Find_last<unsigned __int64>(
            a3,
            &v21,
            &v28,
            appended);
          if ( !v22 )
          {
            std::_Xout_of_range("invalid unordered_map<K, T> key");
            __debugbreak();
            goto LABEL_21;
          }
          v20 = std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Try_emplace<winrt::guid const &,>(
                  a1 + 91,
                  v24,
                  v22 + 3);
          *(_QWORD *)(*(_QWORD *)v20 + 32LL) = v29;
          std::deque<unsigned __int64>::_Emplace_back_internal<unsigned __int64 const &>(
            (__int64)v25,
            (__int64 *)(*(_QWORD *)(a1[87] + 8 * ((((unsigned __int64)v7 + a1[89]) >> 1) & (a1[88] - 1LL)))
                      + 8LL * (((_DWORD)v7 + *((_DWORD *)a1 + 178)) & 1)));
        }
      }
      else
      {
        i = (unsigned __int64)(a3 + 8);
      }
      v7 = (_QWORD *)((char *)v7 + 1);
      v28 = v7;
    }
    while ( (unsigned __int64)v7 < a1[90] );
  }
  v7 = a1 + 86;
  if ( a1 + 86 != (_QWORD *)v25 )
  {
    v11 = v26;
    appended = (unsigned __int64)v26 + v27;
    v21 = v25;
    v22 = v26;
    v12 = a1[89];
    v13 = v12 + a1[90];
    a3 = v25;
    for ( i = (unsigned __int64)v26; ; i = (unsigned __int64)v28 + 1 )
    {
      v28 = v11;
      v9 = (char)v11;
      v14 = (unsigned __int64)v11;
      if ( v11 == (_QWORD *)appended )
        break;
LABEL_21:
      if ( v12 == v13 )
      {
        do
        {
          std::deque<unsigned __int64>::_Emplace_back_internal<unsigned __int64 const &>(
            (__int64)v7,
            (__int64 *)(*(_QWORD *)(*((_QWORD *)a3 + 1) + 8 * ((*((_QWORD *)a3 + 2) - 1LL) & (i >> 1))) + 8 * (i & 1)));
          ++i;
        }
        while ( i != appended );
        goto LABEL_13;
      }
      *(_QWORD *)(*(_QWORD *)(v7[1] + 8 * ((v7[2] - 1LL) & (v12 >> 1))) + 8 * (v12 & 1)) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 1) + 8 * ((*((_QWORD *)a3 + 2) - 1LL) & (v14 >> 1))) + 8LL * (v9 & 1));
      ++v12;
      v11 = (_QWORD *)((char *)v28 + 1);
    }
    for ( j = v13 - v12; j; --j )
    {
      if ( v7[4]-- == 1LL )
        v7[3] = 0LL;
    }
  }
LABEL_13:
  v17 = a2[1];
  for ( k = *a2; k != v17; k += 16LL )
    std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::erase(
      a1 + 91,
      k);
  return std::deque<unsigned __int64>::~deque<unsigned __int64>(v25);
}
