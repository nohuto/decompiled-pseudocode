/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@5@$0A@@std@@@std@@QEAA_KAEBUhstring@winrt@@@Z @ 0x180730118
 * Callers:
 *     ?Remove@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x18073002C (-Remove@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@.c)
 * Callees:
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800B5528 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18014DC58 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@Uhstring@winrt@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U12@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@1@AEBUhstring@winrt@@_K@Z @ 0x1802204FC (--$_Find_last@Uhstring@winrt@@@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@U12@V-$_Uhash_compare@Uhs.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@PEAX@2@QEAU32@@Z @ 0x1807300B0 (-_Unchecked_erase@-$list@U-$pair@$$CBUhstring@winrt@@U-$com_ptr@UIVirtualDesktop@@@2@@std@@V-$al.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::hstring,winrt::com_ptr<IVirtualDesktop>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>>,0>>::erase(
        _QWORD *a1,
        __int64 *a2)
{
  const unsigned __int8 *const *v3; // rax
  __int64 v4; // rcx
  __int64 appended; // rdi
  __int64 v6; // r11
  _QWORD *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = (const unsigned __int8 *const *)winrt::hstring::operator std::basic_string_view<unsigned short>(a2, &v12);
  appended = std::_Fnv1a_append_bytes(v4, *v3, 2 * _mm_srli_si128(*(__m128i *)v3, 8).m128i_u64[0]);
  v7 = (_QWORD *)std::_Hash<std::_Umap_traits<winrt::hstring,winrt::hstring,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,0>>::_Find_last<winrt::hstring>(
                   a1,
                   v13,
                   v6,
                   appended)[1];
  if ( !v7 )
    return 0LL;
  v8 = a1[3];
  v9 = 2 * (appended & a1[6]);
  if ( *(_QWORD **)(v8 + 16 * (appended & a1[6]) + 8) == v7 )
  {
    if ( *(_QWORD **)(v8 + 16 * (appended & a1[6])) == v7 )
    {
      v10 = a1[1];
      *(_QWORD *)(v8 + 16 * (appended & a1[6])) = v10;
    }
    else
    {
      v10 = v7[1];
    }
    *(_QWORD *)(v8 + 8 * v9 + 8) = v10;
  }
  else if ( *(_QWORD **)(v8 + 16 * (appended & a1[6])) == v7 )
  {
    *(_QWORD *)(v8 + 16 * (appended & a1[6])) = *v7;
  }
  std::list<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>>::_Unchecked_erase((__int64)(a1 + 1), v7);
  return 1LL;
}
