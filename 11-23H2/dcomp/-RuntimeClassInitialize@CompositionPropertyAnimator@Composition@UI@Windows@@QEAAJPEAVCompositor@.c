/*
 * XREFs of ?RuntimeClassInitialize@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4AnimationValueSynchronizationBehavior@234@@Z @ 0x180191080
 * Callers:
 *     ?RuntimeClassInitialize@ConditionalExpressionAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionAnimation@234@PEAVConditionalExpressionAnimation@234@@Z @ 0x18019AEA8 (-RuntimeClassInitialize@ConditionalExpressionAnimator@Composition@UI@Windows@@QEAAJPEAVComposito.c)
 *     ?RuntimeClassInitialize@InjectionAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVInjectionAnimation@234@@Z @ 0x18019B838 (-RuntimeClassInitialize@InjectionAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVIn.c)
 *     ?RuntimeClassInitialize@NaturalMotionAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAVNaturalMotionAnimation@234@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x1801A1A84 (-RuntimeClassInitialize@NaturalMotionAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertyAnimator::RuntimeClassInitialize(
        __int64 a1,
        struct Windows::UI::Composition::Compositor *a2,
        int a3,
        __int64 a4,
        int a5)
{
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(
         (Windows::UI::Composition::ProxyObject *)a1,
         a2,
         a3,
         0);
  v7 = v6;
  if ( v6 >= 0 )
  {
    *(_BYTE *)(a1 + 152) &= ~2u;
    *(_DWORD *)(a1 + 196) = a5;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpropertyanimator.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
