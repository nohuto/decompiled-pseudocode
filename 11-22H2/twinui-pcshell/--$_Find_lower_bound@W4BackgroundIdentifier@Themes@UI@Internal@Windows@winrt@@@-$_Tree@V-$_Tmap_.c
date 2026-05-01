/*
 * XREFs of ??$_Find_lower_bound@W4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@@?$_Tree@V?$_Tmap_traits@W4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_KU?$less@W4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@@std@@V?$allocator@U?$pair@$$CBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_K@std@@@8@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_K@std@@PEAX@std@@@1@AEBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@@Z @ 0x1806E08D8
 * Callers:
 *     ??$_Try_emplace@AEBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@$$V@?$map@W4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_KU?$less@W4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@@std@@V?$allocator@U?$pair@$$CBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_K@std@@@8@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_K@std@@PEAX@std@@_N@1@AEBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@@Z @ 0x1806E0978 (--$_Try_emplace@AEBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@$$V@-$map@W4Backgrou.c)
 *     ?GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA_KW4BackgroundIdentifier@34567@_N@Z @ 0x1806E2288 (-GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<enum winrt::Windows::Internal::UI::Themes::BackgroundIdentifier,unsigned __int64,std::less<enum winrt::Windows::Internal::UI::Themes::BackgroundIdentifier>,std::allocator<std::pair<enum winrt::Windows::Internal::UI::Themes::BackgroundIdentifier const,unsigned __int64>>,0>>::_Find_lower_bound<enum winrt::Windows::Internal::UI::Themes::BackgroundIdentifier>(
        __int64 *a1,
        __int64 a2,
        int *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  int v5; // r8d
  int v6; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v4 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v4;
  if ( !*((_BYTE *)v4 + 25) )
  {
    v5 = *a3;
    do
    {
      *(_QWORD *)a2 = v4;
      if ( *((_DWORD *)v4 + 8) >= v5 )
      {
        *(_QWORD *)(a2 + 16) = v4;
        v6 = 1;
        v4 = (__int64 *)*v4;
      }
      else
      {
        v4 = (__int64 *)v4[2];
        v6 = 0;
      }
      *(_DWORD *)(a2 + 8) = v6;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  return a2;
}
