/*
 * XREFs of ?GetReferencedPropertiesFromAllExpressions@ExpressionAnimation@Composition@UI@Windows@@UEAAXPEBGPEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x180085C40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetReferencedPropertiesFromExpression@CompositionAnimation@Composition@UI@Windows@@IEAAXPEBG0PEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x180021934 (-GetReferencedPropertiesFromExpression@CompositionAnimation@Composition@UI@Windows@@IEAAXPEBG0PE.c)
 *     ?GetReferencedPropertiesFromAllExpressions@CompositionAnimation@Composition@UI@Windows@@MEAAXPEBGPEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x180085CA0 (-GetReferencedPropertiesFromAllExpressions@CompositionAnimation@Composition@UI@Windows@@MEAAXPEB.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimation::GetReferencedPropertiesFromAllExpressions(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 result; // rax
  HSTRING v7; // rcx
  PCWSTR StringRawBuffer; // rax
  __int64 v9; // rcx

  result = Windows::UI::Composition::CompositionAnimation::GetReferencedPropertiesFromAllExpressions();
  v7 = *(HSTRING *)(a1 + 992);
  if ( v7 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(v7, 0LL);
    return Windows::UI::Composition::CompositionAnimation::GetReferencedPropertiesFromExpression(
             v9,
             a2,
             (__int64)StringRawBuffer,
             a3);
  }
  return result;
}
