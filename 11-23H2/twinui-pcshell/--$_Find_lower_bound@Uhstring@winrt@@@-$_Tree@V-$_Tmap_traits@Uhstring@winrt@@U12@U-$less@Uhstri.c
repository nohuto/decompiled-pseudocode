/*
 * XREFs of ??$_Find_lower_bound@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$00@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@1@AEBUhstring@winrt@@@Z @ 0x18070A6A8
 * Callers:
 *     ??$_Emplace@AEBUhstring@winrt@@AEBURemoteSystem@Shell@Internal@Windows@2@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@AEBURemoteSystem@Shell@Internal@Windows@4@@Z @ 0x18070A1A4 (--$_Emplace@AEBUhstring@winrt@@AEBURemoteSystem@Shell@Internal@Windows@2@@-$_Tree@V-$_Tmap_trait.c)
 *     ??$_Find@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@PEAX@1@AEBUhstring@winrt@@@Z @ 0x18070A624 (--$_Find@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@URemoteSystem@Shell@Internal@W.c)
 *     ??$_Find@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$00@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@1@AEBUhstring@winrt@@@Z @ 0x18072B25C (--$_Find@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@U12@U-$less@Uhstring@winrt@@@s.c)
 * Callees:
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800B5528 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x1802D21B6 (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<winrt::hstring,winrt::hstring,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,1>>::_Find_lower_bound<winrt::hstring>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rax
  __int64 *v6; // rbx
  __m128i v7; // xmm6
  char **v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v6 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v6;
  while ( !*((_BYTE *)v6 + 25) )
  {
    *(_QWORD *)a2 = v6;
    v7 = *(__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>(a3, &v12);
    v8 = (char **)winrt::hstring::operator std::basic_string_view<unsigned short>(v6 + 4, &v13);
    LOBYTE(v9) = std::_Traits_compare<std::char_traits<unsigned short>>(
                   *v8,
                   _mm_srli_si128(*(__m128i *)v8, 8).m128i_u64[0],
                   (char *)v7.m128i_i64[0],
                   _mm_srli_si128(v7, 8).m128i_u64[0]);
    if ( v9 >= 0 )
    {
      *(_QWORD *)(a2 + 16) = v6;
      v10 = 1;
      v6 = (__int64 *)*v6;
    }
    else
    {
      v6 = (__int64 *)v6[2];
      v10 = 0;
    }
    *(_DWORD *)(a2 + 8) = v10;
  }
  return a2;
}
