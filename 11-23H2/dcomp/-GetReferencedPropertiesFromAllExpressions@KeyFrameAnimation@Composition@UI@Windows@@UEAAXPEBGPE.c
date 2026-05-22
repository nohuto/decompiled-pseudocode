/*
 * XREFs of ?GetReferencedPropertiesFromAllExpressions@KeyFrameAnimation@Composition@UI@Windows@@UEAAXPEBGPEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x18000F820
 * Callers:
 *     <none>
 * Callees:
 *     ?GetReferencedPropertiesFromAllExpressions@CompositionAnimation@Composition@UI@Windows@@MEAAXPEBGPEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x180085CA0 (-GetReferencedPropertiesFromAllExpressions@CompositionAnimation@Composition@UI@Windows@@MEAAXPEB.c)
 *     ?GetPropertiesForParameter@CompositionAnimation@Composition@UI@Windows@@IEAAJPEBGPEAVExpressionAnimation@234@PEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x18014F34C (-GetPropertiesForParameter@CompositionAnimation@Composition@UI@Windows@@IEAAJPEBGPEAVExpressionA.c)
 */

__int64 __fastcall Windows::UI::Composition::KeyFrameAnimation::GetReferencedPropertiesFromAllExpressions(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 i; // rbx

  result = Windows::UI::Composition::CompositionAnimation::GetReferencedPropertiesFromAllExpressions();
  if ( (*(_BYTE *)(a1 + 480) & 1) != 0 )
  {
    for ( i = *(_QWORD *)(a1 + 424); i; i = *(_QWORD *)(i + 48) )
    {
      if ( *(_DWORD *)(i + 24) == 2 )
        result = Windows::UI::Composition::CompositionAnimation::GetPropertiesForParameter(
                   v7,
                   a2,
                   *(_QWORD *)(i + 32),
                   a3);
    }
  }
  return result;
}
