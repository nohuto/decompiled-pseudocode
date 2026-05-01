/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@9@$0A@@std@@@std@@QEAA_KAEBUguid@winrt@@@Z @ 0x18063A5D8
 * Callers:
 *     ?RemoveTab@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x18063A0A8 (-RemoveTab@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 * Callees:
 *     ??$_Find_last@Uguid@winrt@@@?$_Hash@V?$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@9@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@PEAX@std@@@1@AEBUguid@winrt@@_K@Z @ 0x180034014 (--$_Find_last@Uguid@winrt@@@-$_Hash@V-$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Interna.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::guid,winrt::Windows::Internal::UI::Shell::WindowTabView,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>>,0>>::erase(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 i; // r8
  __int64 v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 0x10; ++i )
  {
    v5 = *(unsigned __int8 *)(i + a2);
    v3 = 0x100000001B3LL * (v5 ^ v3);
  }
  v6 = (_QWORD *)std::_Hash<std::_Umap_traits<winrt::guid,winrt::Windows::Internal::UI::Shell::WindowTabView,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>>,0>>::_Find_last<winrt::guid>(
                   a1,
                   v12,
                   a2,
                   v3)[1];
  if ( !v6 )
    return 0LL;
  v7 = a1[3];
  v8 = 2 * (v3 & a1[6]);
  if ( *(_QWORD **)(v7 + 16 * (v3 & a1[6]) + 8) == v6 )
  {
    if ( *(_QWORD **)(v7 + 16 * (v3 & a1[6])) == v6 )
    {
      v9 = a1[1];
      *(_QWORD *)(v7 + 16 * (v3 & a1[6])) = v9;
    }
    else
    {
      v9 = v6[1];
    }
    *(_QWORD *)(v7 + 8 * v8 + 8) = v9;
  }
  else if ( *(_QWORD **)(v7 + 16 * (v3 & a1[6])) == v6 )
  {
    *(_QWORD *)(v7 + 16 * (v3 & a1[6])) = *v6;
  }
  v10 = *v6;
  --a1[2];
  *(_QWORD *)v6[1] = v10;
  *(_QWORD *)(v10 + 8) = v6[1];
  if ( v6[4] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(v6 + 4));
  std::_Deallocate<16,0>(v6, 0x28uLL);
  return 1LL;
}
