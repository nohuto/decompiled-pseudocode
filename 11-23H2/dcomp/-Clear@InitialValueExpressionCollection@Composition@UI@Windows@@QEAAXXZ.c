/*
 * XREFs of ?Clear@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAXXZ @ 0x1801949F4
 * Callers:
 *     ?Clear@Api@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAJXZ @ 0x180194990 (-Clear@Api@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?Destroy@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAXXZ @ 0x180194A30 (-Destroy@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?clear@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@8@$0A@@std@@@std@@QEAAXXZ @ 0x180195340 (-clear@-$_Tree@V-$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V-$RefPtr@VCompositionAnimation@.c)
 */

void __fastcall Windows::UI::Composition::InitialValueExpressionCollection::Clear(
        Windows::UI::Composition::InitialValueExpressionCollection *this)
{
  if ( *((_QWORD *)this + 20) )
  {
    std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>,std::less<Microsoft::WRL::Wrappers::HString>,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>,0>>::clear((char *)this + 152);
    ++*((_DWORD *)this + 44);
  }
}
