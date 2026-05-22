/*
 * XREFs of ?GetReferencedPropertiesFromAllExpressions@CompositionAnimation@Composition@UI@Windows@@MEAAXPEBGPEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x180085CA0
 * Callers:
 *     ?GetReferencedPropertiesFromAllExpressions@KeyFrameAnimation@Composition@UI@Windows@@UEAAXPEBGPEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x18000F820 (-GetReferencedPropertiesFromAllExpressions@KeyFrameAnimation@Composition@UI@Windows@@UEAAXPEBGPE.c)
 *     ?GetReferencedPropertiesFromAllExpressions@ExpressionAnimation@Composition@UI@Windows@@UEAAXPEBGPEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x180085C40 (-GetReferencedPropertiesFromAllExpressions@ExpressionAnimation@Composition@UI@Windows@@UEAAXPEBG.c)
 * Callees:
 *     ?HasInitialValueExpressions@CompositionAnimation@Composition@UI@Windows@@QEBA_NXZ @ 0x180085CD0 (-HasInitialValueExpressions@CompositionAnimation@Composition@UI@Windows@@QEBA_NXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180098660 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBVHString@Wrap.c)
 *     ?GetPropertiesForParameter@CompositionAnimation@Composition@UI@Windows@@IEAAJPEBGPEAVExpressionAnimation@234@PEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x18014F34C (-GetPropertiesForParameter@CompositionAnimation@Composition@UI@Windows@@IEAAJPEBGPEAVExpressionA.c)
 */

char __fastcall Windows::UI::Composition::CompositionAnimation::GetReferencedPropertiesFromAllExpressions(
        Windows::UI::Composition::CompositionAnimation *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  LOBYTE(v5) = Windows::UI::Composition::CompositionAnimation::HasInitialValueExpressions(a1);
  if ( (_BYTE)v5 )
  {
    v5 = *(_QWORD *)(v6 + 264);
    v7 = **(_QWORD **)(v5 + 152);
    v9 = v7;
    while ( !*(_BYTE *)(v7 + 25) )
    {
      Windows::UI::Composition::CompositionAnimation::GetPropertiesForParameter(v6, a2, *(_QWORD *)(v7 + 40), a3);
      LOBYTE(v5) = std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>>,std::_Iterator_base0>::operator++(&v9);
      v7 = v9;
    }
  }
  return v5;
}
