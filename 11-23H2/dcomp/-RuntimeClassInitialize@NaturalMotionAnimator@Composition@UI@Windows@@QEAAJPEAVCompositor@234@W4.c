/*
 * XREFs of ?RuntimeClassInitialize@NaturalMotionAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAVNaturalMotionAnimation@234@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x1801A1A84
 * Callers:
 *     ??$MakeAndInitialize2@VNaturalMotionAnimator@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVNaturalMotionAnimation@234@V?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@AEAPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Details@WRL2@Microsoft@@YAJPEAPEAVNaturalMotionAnimator@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAW4DCOMPOSITION_EXPRESSION_TYPE@@$$QEAPEAVNaturalMotionAnimation@456@$$QEAV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@AEAPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x1801889E8 (--$MakeAndInitialize2@VNaturalMotionAnimator@Composition@UI@Windows@@V1234@PEAVCompositor@234@AE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetInitialValueExpressions@CompositionPropertyAnimator@Composition@UI@Windows@@IEAAJPEAVCompositionAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x18004D960 (-SetInitialValueExpressions@CompositionPropertyAnimator@Composition@UI@Windows@@IEAAJPEAVComposi.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RuntimeClassInitialize@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4AnimationValueSynchronizationBehavior@234@@Z @ 0x180191080 (-RuntimeClassInitialize@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@.c)
 */

__int64 __fastcall Windows::UI::Composition::NaturalMotionAnimator::RuntimeClassInitialize(
        __int64 a1,
        struct Windows::UI::Composition::Compositor *a2,
        int a3,
        Windows::UI::Composition::CompositionAnimation *a4,
        _OWORD *a5,
        __int64 a6)
{
  __int64 v6; // rbp
  int v9; // edi
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = a3;
  v9 = Windows::UI::Composition::CompositionPropertyAnimator::RuntimeClassInitialize(a1, a2, 112, (__int64)a4, 1);
  if ( v9 < 0 )
  {
    v10 = 26LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtnaturalanimator.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  DirectComposition::CDevice::ResourceSetIntegerProperty(
    *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
    *(_DWORD *)(a1 + 128),
    0,
    v6);
  *(_DWORD *)(a1 + 168) = v6;
  *(_OWORD *)(a1 + 288) = *a5;
  v9 = (*(__int64 (__fastcall **)(Windows::UI::Composition::CompositionAnimation *, __int64))(*(_QWORD *)a4 + 312LL))(
         a4,
         a1);
  if ( v9 < 0 )
  {
    v10 = 35LL;
    goto LABEL_3;
  }
  v9 = Windows::UI::Composition::CompositionPropertyAnimator::SetInitialValueExpressions(a1, a4, a6);
  if ( v9 < 0 )
  {
    v10 = 38LL;
    goto LABEL_3;
  }
  *(_BYTE *)(a1 + 152) |= 8u;
  return 0LL;
}
