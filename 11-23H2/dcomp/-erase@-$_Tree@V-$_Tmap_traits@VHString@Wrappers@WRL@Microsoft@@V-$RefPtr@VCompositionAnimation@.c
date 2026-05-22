/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@8@$0A@@std@@@std@@QEAA_KAEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180195380
 * Callers:
 *     ?Remove@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z @ 0x180195224 (-Remove@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180098660 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBVHString@Wrap.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@QEAAPEAU?$_Tree_node@UObjectPropertyPair@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800E71BC (-_Extract@-$_Tree_val@U-$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@QEAAPEAU-$_Tree_nod.c)
 *     ??1?$pair@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@QEAA@XZ @ 0x18014EE88 (--1-$pair@VHString@Wrappers@WRL@Microsoft@@V-$RefPtr@VCompositionAnimation@Composition@UI@Window.c)
 *     ??$_Eqrange@VHString@Wrappers@WRL@Microsoft@@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@8@$0A@@std@@@std@@IEBA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@PEAX@std@@PEAU12@@1@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180194764 (--$_Eqrange@VHString@Wrappers@WRL@Microsoft@@@-$_Tree@V-$_Tmap_traits@VHString@Wrappers@WRL@Micr.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@8@$0A@@std@@@std@@QEAAXXZ @ 0x180195340 (-clear@-$_Tree@V-$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V-$RefPtr@VCompositionAnimation@.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>,std::less<Microsoft::WRL::Wrappers::HString>,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>,0>>::erase(
        __int64 *a1,
        Microsoft::WRL::Wrappers::Details **a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rbx
  __int64 v14[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>,std::less<Microsoft::WRL::Wrappers::HString>,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>,0>>::_Eqrange<Microsoft::WRL::Wrappers::HString>(
    a1,
    v14,
    a2);
  v5 = v14[0];
  v6 = 0LL;
  v7 = v14[1];
  v8 = v14[0];
  v15 = v14[0];
  while ( v8 != v7 )
  {
    ++v6;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>>,std::_Iterator_base0>::operator++(
      &v15,
      v3,
      v4,
      v5);
    v8 = v15;
  }
  v9 = (_QWORD *)*a1;
  v15 = v5;
  if ( v5 == *v9 && *(_BYTE *)(v7 + 25) )
  {
    std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>,std::less<Microsoft::WRL::Wrappers::HString>,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>,0>>::clear(a1);
  }
  else
  {
    while ( v5 != v7 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>>,std::_Iterator_base0>::operator++(
        &v15,
        v3,
        v4,
        v5);
      v13 = std::_Tree_val<std::_Tree_simple_types<ObjectPropertyPair>>::_Extract(a1, v12, v11, v12);
      std::pair<Microsoft::WRL::Wrappers::HString,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>::~pair<Microsoft::WRL::Wrappers::HString,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>((__int64)(v13 + 4));
      std::_Deallocate<16,0>(v13, 0x30uLL);
      v5 = v15;
    }
  }
  return v6;
}
