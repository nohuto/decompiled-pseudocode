/*
 * XREFs of ?GetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAPEAGXZ @ 0x180069190
 * Callers:
 *     ?Conditional@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAV1234@0@Z @ 0x18003D728 (-Conditional@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAV1234@0@Z.c)
 *     ?ProcessSwizzleToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ @ 0x18003E668 (-ProcessSwizzleToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?ProcessScalarToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJ_N@Z @ 0x18003EBFC (-ProcessScalarToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJ_N@Z.c)
 *     ?ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@I@Z @ 0x18003EE48 (-ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeTy.c)
 *     ?RegisterAnimationTarget@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAVExpressionObjectPropertyInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAVSubchannelMaskInfo@@PEAVCompositionPropertyAnimator@234@@Z @ 0x180050220 (-RegisterAnimationTarget@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@23.c)
 *     ?ProcessReferenceParameterToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEBGIIPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@_N@Z @ 0x180056280 (-ProcessReferenceParameterToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEBGIIPEA.c)
 *     ?ParseName@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJ_NIPEAGPEAI@Z @ 0x180057660 (-ParseName@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJ_NIPEAGPEAI@Z.c)
 *     ?SetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAXPEBG@Z @ 0x180069158 (-SetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAXPEBG@Z.c)
 *     ?OriginateExpressionErrorInfo@Composition@UI@Windows@@YAXPEAUExpressionErrorInfo@123@PEBG@Z @ 0x1801499B4 (-OriginateExpressionErrorInfo@Composition@UI@Windows@@YAXPEAUExpressionErrorInfo@123@PEBG@Z.c)
 *     ?SetTarget@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAJPEAVExpressionObjectPropertyInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAVSubchannelMaskInfo@@@Z @ 0x180191134 (-SetTarget@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAJPEAVExpressionObjectProperty.c)
 *     ?SetParseError@ExpressionAnimationParser@Composition@UI@Windows@@AEAAXW4ExpressionErrorKind@234@IIPEBG@Z @ 0x180197848 (-SetParseError@ExpressionAnimationParser@Composition@UI@Windows@@AEAAXW4ExpressionErrorKind@234@.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x1800691D8 (--_U@YAPEAX_K@Z.c)
 *     ?OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z @ 0x180108EB4 (-OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z.c)
 */

unsigned __int16 *__fastcall Windows::UI::Composition::ExpressionErrorInfo::GetErrorContext(
        Windows::UI::Composition::ExpressionErrorInfo *this)
{
  _WORD *v2; // rax
  unsigned __int64 v3; // rcx

  if ( !*((_QWORD *)this + 2) )
  {
    v2 = operator new[](0xF2uLL);
    *((_QWORD *)this + 2) = v2;
    if ( !v2 )
      Microsoft::WRL2::FailFast::OutOfMemory(v3);
    *v2 = 0;
  }
  return (unsigned __int16 *)*((_QWORD *)this + 2);
}
