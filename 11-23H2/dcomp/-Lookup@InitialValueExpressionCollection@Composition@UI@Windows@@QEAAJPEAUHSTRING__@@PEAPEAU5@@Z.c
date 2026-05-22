/*
 * XREFs of ?Lookup@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAU5@@Z @ 0x1801950C8
 * Callers:
 *     ?Lookup@Api@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU6@@Z @ 0x180195030 (-Lookup@Api@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU.c)
 *     ?Lookup@Api@InitialValueExpressionCollectionMapView@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU6@@Z @ 0x1801A2570 (-Lookup@Api@InitialValueExpressionCollectionMapView@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18004434C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?GetExpression@ExpressionAnimation@Composition@UI@Windows@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800B7BB4 (-GetExpression@ExpressionAnimation@Composition@UI@Windows@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ??$_Find_lower_bound@VHString@Wrappers@WRL@Microsoft@@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@8@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@PEAX@std@@@1@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180194830 (--$_Find_lower_bound@VHString@Wrappers@WRL@Microsoft@@@-$_Tree@V-$_Tmap_traits@VHString@Wrappers.c)
 *     ??$_Lower_bound_duplicate@VHString@Wrappers@WRL@Microsoft@@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@8@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@PEAX@1@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1801948A4 (--$_Lower_bound_duplicate@VHString@Wrappers@WRL@Microsoft@@@-$_Tree@V-$_Tmap_traits@VHString@Wra.c)
 */

__int64 __fastcall Windows::UI::Composition::InitialValueExpressionCollection::Lookup(
        Windows::UI::Composition::InitialValueExpressionCollection *this,
        HSTRING a2,
        HSTRING *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v7; // rbx
  int Expression; // eax
  unsigned int v9; // ebx
  _BYTE v11[16]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v12; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  HSTRING string; // [rsp+60h] [rbp+20h] BYREF
  HSTRING v15; // [rsp+68h] [rbp+28h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v16; // [rsp+70h] [rbp+30h] BYREF

  v15 = a2;
  *a3 = 0LL;
  string = 0LL;
  Microsoft::WRL::Wrappers::HString::Set(&string, &v15);
  std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>,std::less<Microsoft::WRL::Wrappers::HString>,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>,0>>::_Find_lower_bound<Microsoft::WRL::Wrappers::HString>(
    (__int64 *)this + 19,
    (__int64)v11,
    (HSTRING)&string);
  v5 = v12;
  if ( !std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>,std::less<Microsoft::WRL::Wrappers::HString>,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>,0>>::_Lower_bound_duplicate<Microsoft::WRL::Wrappers::HString>(
          v6,
          v12,
          (Microsoft::WRL::Wrappers::Details **)&string)
    || v5 == *((_QWORD *)this + 19) )
  {
    goto LABEL_8;
  }
  v7 = *(Microsoft::WRL2::NestableRuntimeClass **)(v5 + 40);
  v16 = v7;
  if ( v7 )
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v7);
  Expression = Windows::UI::Composition::ExpressionAnimation::GetExpression(v7, a3);
  v9 = Expression;
  if ( Expression >= 0 )
  {
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v16);
LABEL_8:
    v9 = 0;
    goto LABEL_9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x69,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinitialvalueexpressioncollection.cpp",
    (const char *)(unsigned int)Expression);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v16);
LABEL_9:
  WindowsDeleteString(string);
  return v9;
}
