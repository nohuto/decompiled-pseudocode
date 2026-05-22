/*
 * XREFs of ?TryGetConstantParameter@CompositionAnimation@Composition@UI@Windows@@QEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@PEAUMatrix3x2@Numerics@Foundation@4@@Z @ 0x1800B7362
 * Callers:
 *     ?WriteConstantParameterToBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAE_KPEAUExpressionParameter@234@PEAVCompositionAnimation@234@PEAI@Z @ 0x1800599B0 (-WriteConstantParameterToBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAE_KPE.c)
 * Callees:
 *     ?TryGetParameterEntry@CompositionAnimation@Composition@UI@Windows@@AEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAVParameterEntry@@@Z @ 0x18003FD50 (-TryGetParameterEntry@CompositionAnimation@Composition@UI@Windows@@AEAA-AW4CompositionGetValueSt.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimation::TryGetConstantParameter(
        Windows::UI::Composition::CompositionAnimation *a1,
        HSTRING a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  result = Windows::UI::Composition::CompositionAnimation::TryGetParameterEntry(a1, a2, 104, &v6);
  if ( !(_DWORD)result )
  {
    v5 = *(_QWORD *)(v6 + 40);
    *(_OWORD *)a3 = *(_OWORD *)v5;
    *(_QWORD *)(a3 + 16) = *(_QWORD *)(v5 + 16);
  }
  return result;
}
