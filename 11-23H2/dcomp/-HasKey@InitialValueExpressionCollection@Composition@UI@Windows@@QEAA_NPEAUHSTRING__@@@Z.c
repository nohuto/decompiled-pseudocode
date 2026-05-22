/*
 * XREFs of ?HasKey@InitialValueExpressionCollection@Composition@UI@Windows@@QEAA_NPEAUHSTRING__@@@Z @ 0x180194CF4
 * Callers:
 *     ?HasKey@Api@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x180194C60 (-HasKey@Api@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z.c)
 *     ?HasKey@Api@InitialValueExpressionCollectionMapView@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x1801A24D0 (-HasKey@Api@InitialValueExpressionCollectionMapView@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18004434C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ??$_Find_lower_bound@VHString@Wrappers@WRL@Microsoft@@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@8@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@PEAX@std@@@1@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180194830 (--$_Find_lower_bound@VHString@Wrappers@WRL@Microsoft@@@-$_Tree@V-$_Tmap_traits@VHString@Wrappers.c)
 *     ??$_Lower_bound_duplicate@VHString@Wrappers@WRL@Microsoft@@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@8@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@PEAX@1@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1801948A4 (--$_Lower_bound_duplicate@VHString@Wrappers@WRL@Microsoft@@@-$_Tree@V-$_Tmap_traits@VHString@Wra.c)
 */

bool __fastcall Windows::UI::Composition::InitialValueExpressionCollection::HasKey(
        Windows::UI::Composition::InitialValueExpressionCollection *this,
        HSTRING a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  bool v5; // bl
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  HSTRING string; // [rsp+50h] [rbp+8h] BYREF
  HSTRING v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = a2;
  string = 0LL;
  Microsoft::WRL::Wrappers::HString::Set(&string, &v10);
  std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>,std::less<Microsoft::WRL::Wrappers::HString>,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>,0>>::_Find_lower_bound<Microsoft::WRL::Wrappers::HString>(
    (__int64 *)this + 19,
    (__int64)v7,
    (HSTRING)&string);
  v3 = v8;
  if ( !std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>,std::less<Microsoft::WRL::Wrappers::HString>,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>,0>>::_Lower_bound_duplicate<Microsoft::WRL::Wrappers::HString>(
          v4,
          v8,
          (Microsoft::WRL::Wrappers::Details **)&string) )
    v3 = *((_QWORD *)this + 19);
  v5 = v3 != *((_QWORD *)this + 19);
  WindowsDeleteString(string);
  return v5;
}
