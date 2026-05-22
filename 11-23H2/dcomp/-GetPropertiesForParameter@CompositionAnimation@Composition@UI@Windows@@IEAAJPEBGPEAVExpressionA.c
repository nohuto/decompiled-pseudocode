/*
 * XREFs of ?GetPropertiesForParameter@CompositionAnimation@Composition@UI@Windows@@IEAAJPEBGPEAVExpressionAnimation@234@PEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x18014F34C
 * Callers:
 *     ?GetReferencedPropertiesFromAllExpressions@KeyFrameAnimation@Composition@UI@Windows@@UEAAXPEBGPEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x18000F820 (-GetReferencedPropertiesFromAllExpressions@KeyFrameAnimation@Composition@UI@Windows@@UEAAXPEBGPE.c)
 *     ?GetReferencedPropertiesFromAllExpressions@CompositionAnimation@Composition@UI@Windows@@MEAAXPEBGPEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x180085CA0 (-GetReferencedPropertiesFromAllExpressions@CompositionAnimation@Composition@UI@Windows@@MEAAXPEB.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetReferencedPropertiesFromExpression@CompositionAnimation@Composition@UI@Windows@@IEAAXPEBG0PEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x180021934 (-GetReferencedPropertiesFromExpression@CompositionAnimation@Composition@UI@Windows@@IEAAXPEBG0PE.c)
 *     ?GetExpression@ExpressionAnimation@Composition@UI@Windows@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800B7BB4 (-GetExpression@ExpressionAnimation@Composition@UI@Windows@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimation::GetPropertiesForParameter(
        HSTRING a1,
        __int64 a2,
        Windows::UI::Composition::ExpressionAnimation *a3,
        __int64 *a4)
{
  int Expression; // eax
  unsigned int v8; // ebx
  PCWSTR StringRawBuffer; // rax
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  string = a1;
  WindowsDeleteString(0LL);
  string = 0LL;
  Expression = Windows::UI::Composition::ExpressionAnimation::GetExpression(a3, &string);
  v8 = Expression;
  if ( Expression >= 0 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    Windows::UI::Composition::CompositionAnimation::GetReferencedPropertiesFromExpression(
      v10,
      a2,
      (__int64)StringRawBuffer,
      a4);
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60E,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionanimation.cpp",
      (const char *)(unsigned int)Expression);
  }
  WindowsDeleteString(string);
  return v8;
}
