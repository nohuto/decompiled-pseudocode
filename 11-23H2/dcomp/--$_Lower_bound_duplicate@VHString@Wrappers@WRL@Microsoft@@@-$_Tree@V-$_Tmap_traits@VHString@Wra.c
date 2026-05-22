/*
 * XREFs of ??$_Lower_bound_duplicate@VHString@Wrappers@WRL@Microsoft@@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@8@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@PEAX@1@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1801948A4
 * Callers:
 *     ??$_Emplace@U?$pair@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@8@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@PEAX@std@@_N@1@$$QEAU?$pair@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@1@@Z @ 0x180194690 (--$_Emplace@U-$pair@VHString@Wrappers@WRL@Microsoft@@V-$RefPtr@VCompositionAnimation@Composition.c)
 *     ?HasKey@InitialValueExpressionCollection@Composition@UI@Windows@@QEAA_NPEAUHSTRING__@@@Z @ 0x180194CF4 (-HasKey@InitialValueExpressionCollection@Composition@UI@Windows@@QEAA_NPEAUHSTRING__@@@Z.c)
 *     ?Lookup@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAU5@@Z @ 0x1801950C8 (-Lookup@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAU5@@Z.c)
 *     ?Remove@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z @ 0x180195224 (-Remove@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18005CCEC (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 */

bool __fastcall std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>,std::less<Microsoft::WRL::Wrappers::HString>,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>,0>>::_Lower_bound_duplicate<Microsoft::WRL::Wrappers::HString>(
        __int64 a1,
        __int64 a2,
        Microsoft::WRL::Wrappers::Details **a3)
{
  char v3; // bl

  v3 = 0;
  if ( !*(_BYTE *)(a2 + 25) )
    return (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                           *a3,
                           *(HSTRING *)(a2 + 32),
                           (HSTRING)a3) != -1;
  return v3;
}
