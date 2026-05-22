/*
 * XREFs of ??$_Find_lower_bound@VHString@Wrappers@WRL@Microsoft@@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@8@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@PEAX@std@@@1@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180194830
 * Callers:
 *     ??$_Emplace@U?$pair@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@8@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@PEAX@std@@_N@1@$$QEAU?$pair@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@1@@Z @ 0x180194690 (--$_Emplace@U-$pair@VHString@Wrappers@WRL@Microsoft@@V-$RefPtr@VCompositionAnimation@Composition.c)
 *     ?HasKey@InitialValueExpressionCollection@Composition@UI@Windows@@QEAA_NPEAUHSTRING__@@@Z @ 0x180194CF4 (-HasKey@InitialValueExpressionCollection@Composition@UI@Windows@@QEAA_NPEAUHSTRING__@@@Z.c)
 *     ?Lookup@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAU5@@Z @ 0x1801950C8 (-Lookup@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAU5@@Z.c)
 *     ?Remove@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z @ 0x180195224 (-Remove@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18005CCEC (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>,std::less<Microsoft::WRL::Wrappers::HString>,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>,0>>::_Find_lower_bound<Microsoft::WRL::Wrappers::HString>(
        __int64 *a1,
        __int64 a2,
        HSTRING a3)
{
  __int64 v3; // rax
  __int64 *v6; // rbx
  HSTRING v7; // rdx
  Microsoft::WRL::Wrappers::Details *v8; // rcx
  int v9; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v6 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v6;
  while ( !*((_BYTE *)v6 + 25) )
  {
    v7 = *(HSTRING *)a3;
    v8 = (Microsoft::WRL::Wrappers::Details *)v6[4];
    *(_QWORD *)a2 = v6;
    if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(v8, v7, a3) == -1 )
    {
      v6 = (__int64 *)v6[2];
      v9 = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 16) = v6;
      v9 = 1;
      v6 = (__int64 *)*v6;
    }
    *(_DWORD *)(a2 + 8) = v9;
  }
  return a2;
}
