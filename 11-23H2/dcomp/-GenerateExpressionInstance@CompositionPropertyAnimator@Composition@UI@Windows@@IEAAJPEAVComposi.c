/*
 * XREFs of ?GenerateExpressionInstance@CompositionPropertyAnimator@Composition@UI@Windows@@IEAAJPEAVCompositionAnimation@234@PEAVExpressionAnimation@234@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAV1234@@Z @ 0x180190864
 * Callers:
 *     ?SetInitialValueExpressions@CompositionPropertyAnimator@Composition@UI@Windows@@IEAAJPEAVCompositionAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x18004D960 (-SetInitialValueExpressions@CompositionPropertyAnimator@Composition@UI@Windows@@IEAAJPEAVComposi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?GetOutputType@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAA?AW4DCOMPOSITION_EXPRESSION_TYPE@@XZ @ 0x18003E768 (-GetOutputType@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAA-AW4DCOMPOSITION_EXPRESSIO.c)
 *     ?GenerateInstance@ExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAUHSTRING__@@PEAVSubchannelMaskInfo@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x18004ECA0 (-GenerateInstance@ExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??$_Emplace_reallocate@AEBV?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@@?$vector@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAAPEAV?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV234@AEBV234@@Z @ 0x180186900 (--$_Emplace_reallocate@AEBV-$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertyAnimator::GenerateExpressionInstance(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        Microsoft::WRL2::NestableRuntimeClass *a6)
{
  Microsoft::WRL2::NestableRuntimeClass *v6; // rsi
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  int OutputType; // eax
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v18; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = a6;
  a6 = 0LL;
  *(_QWORD *)v6 = 0LL;
  v10 = Windows::UI::Composition::ExpressionAnimation::GenerateInstance(
          (Windows::UI::Composition::CompositorCommon **)a3,
          a2,
          0LL,
          0LL,
          0LL,
          a5,
          &a6);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = (unsigned int)v10;
    v13 = 487LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpropertyanimator.cpp",
      (const char *)v12);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&a6);
    return v11;
  }
  OutputType = Windows::UI::Composition::ExpressionAnimationBuilder::GetOutputType((_DWORD *)(a3 + 360));
  v15 = (unsigned int)(OutputType - 18);
  if ( (unsigned int)v15 > 0x35 || (v16 = 0x38000401020001LL, !_bittest64(&v16, v15)) )
  {
    v13 = 504LL;
    goto LABEL_14;
  }
  if ( OutputType != a4 )
  {
    v13 = 510LL;
LABEL_14:
    v11 = -2147024809;
    v12 = 2147942487LL;
    goto LABEL_15;
  }
  v17 = (_QWORD *)a1[33];
  if ( v17 == (_QWORD *)a1[34] )
  {
    std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertyAnimator>>::_Emplace_reallocate<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertyAnimator> const &>(
      a1 + 32,
      (__int64)v17,
      &a6);
    v18 = a6;
  }
  else
  {
    v18 = a6;
    *v17 = a6;
    if ( v18 )
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v18);
    a1[33] += 8LL;
  }
  *(_QWORD *)v6 = v18;
  return 0LL;
}
