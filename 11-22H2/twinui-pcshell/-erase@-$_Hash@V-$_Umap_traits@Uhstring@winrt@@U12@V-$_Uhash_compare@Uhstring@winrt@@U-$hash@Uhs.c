/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U12@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$0A@@std@@@std@@QEAA_KAEBUhstring@winrt@@@Z @ 0x18071B25C
 * Callers:
 *     ?ClearCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x18070FA5C (-ClearCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@A.c)
 * Callees:
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800B5528 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18014DC58 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Find_last@Uhstring@winrt@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U12@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@1@AEBUhstring@winrt@@_K@Z @ 0x1802204FC (--$_Find_last@Uhstring@winrt@@@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@U12@V-$_Uhash_compare@Uhs.c)
 *     ??_G?$pair@$$CBUhstring@winrt@@U12@@std@@QEAAPEAXI@Z @ 0x1806C7680 (--_G-$pair@$$CBUhstring@winrt@@U12@@std@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::hstring,winrt::hstring,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,0>>::erase(
        _QWORD *a1,
        __int64 *a2)
{
  const unsigned __int8 *const *v3; // rax
  __int64 v4; // rcx
  __int64 appended; // rsi
  __int64 v6; // r11
  volatile signed __int32 **v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rax
  volatile signed __int32 *v11; // rdx
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = (const unsigned __int8 *const *)winrt::hstring::operator std::basic_string_view<unsigned short>(a2, &v13);
  appended = std::_Fnv1a_append_bytes(v4, *v3, 2 * _mm_srli_si128(*(__m128i *)v3, 8).m128i_u64[0]);
  v7 = (volatile signed __int32 **)std::_Hash<std::_Umap_traits<winrt::hstring,winrt::hstring,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,0>>::_Find_last<winrt::hstring>(
                                     a1,
                                     v14,
                                     v6,
                                     appended)[1];
  if ( !v7 )
    return 0LL;
  v8 = a1[3];
  v9 = 2 * (appended & a1[6]);
  if ( *(volatile signed __int32 ***)(v8 + 16 * (appended & a1[6]) + 8) == v7 )
  {
    if ( *(volatile signed __int32 ***)(v8 + 16 * (appended & a1[6])) == v7 )
    {
      v10 = (volatile signed __int32 *)a1[1];
      *(_QWORD *)(v8 + 16 * (appended & a1[6])) = v10;
    }
    else
    {
      v10 = v7[1];
    }
    *(_QWORD *)(v8 + 8 * v9 + 8) = v10;
  }
  else if ( *(volatile signed __int32 ***)(v8 + 16 * (appended & a1[6])) == v7 )
  {
    *(_QWORD *)(v8 + 16 * (appended & a1[6])) = *v7;
  }
  v11 = *v7;
  --a1[2];
  *(_QWORD *)v7[1] = v11;
  *((_QWORD *)v11 + 1) = v7[1];
  std::pair<winrt::hstring const,winrt::hstring>::`scalar deleting destructor'(v7 + 2);
  std::_Deallocate<16,0>(v7, 0x20uLL);
  return 1LL;
}
