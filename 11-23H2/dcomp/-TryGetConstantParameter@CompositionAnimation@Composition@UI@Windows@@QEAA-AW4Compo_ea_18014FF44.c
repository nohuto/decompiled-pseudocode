/*
 * XREFs of ?TryGetConstantParameter@CompositionAnimation@Composition@UI@Windows@@QEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@PEAUVector2@Numerics@Foundation@4@@Z @ 0x18014FF44
 * Callers:
 *     ?WriteConstantParameterToBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAE_KPEAUExpressionParameter@234@PEAVCompositionAnimation@234@PEAI@Z @ 0x1800599B0 (-WriteConstantParameterToBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAE_KPE.c)
 * Callees:
 *     ?TryGetParameterEntry@CompositionAnimation@Composition@UI@Windows@@AEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAVParameterEntry@@@Z @ 0x18003FD50 (-TryGetParameterEntry@CompositionAnimation@Composition@UI@Windows@@AEAA-AW4CompositionGetValueSt.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimation::TryGetConstantParameter(
        Windows::UI::Composition::CompositionAnimation *a1,
        HSTRING a2,
        _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+48h] [rbp+20h] BYREF

  result = Windows::UI::Composition::CompositionAnimation::TryGetParameterEntry(a1, a2, 35, &v5);
  if ( !(_DWORD)result )
    *a3 = *(_QWORD *)(v5 + 40);
  return result;
}
