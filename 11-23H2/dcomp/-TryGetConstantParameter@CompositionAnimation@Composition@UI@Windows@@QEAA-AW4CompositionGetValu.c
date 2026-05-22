/*
 * XREFs of ?TryGetConstantParameter@CompositionAnimation@Composition@UI@Windows@@QEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@PEAUMatrix4x4@Numerics@Foundation@4@@Z @ 0x18003FCB8
 * Callers:
 *     ?WriteConstantParameterToBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAE_KPEAUExpressionParameter@234@PEAVCompositionAnimation@234@PEAI@Z @ 0x1800599B0 (-WriteConstantParameterToBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAE_KPE.c)
 * Callees:
 *     ?TryGetParameterEntry@CompositionAnimation@Composition@UI@Windows@@AEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAVParameterEntry@@@Z @ 0x18003FD50 (-TryGetParameterEntry@CompositionAnimation@Composition@UI@Windows@@AEAA-AW4CompositionGetValueSt.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimation::TryGetConstantParameter(
        __int64 a1,
        __int64 a2,
        _OWORD *a3)
{
  __int64 result; // rax
  _OWORD *v5; // rdx
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  result = Windows::UI::Composition::CompositionAnimation::TryGetParameterEntry(a1, a2, 265LL, &v6);
  if ( !(_DWORD)result )
  {
    v5 = *(_OWORD **)(v6 + 40);
    *a3 = *v5;
    a3[1] = v5[1];
    a3[2] = v5[2];
    a3[3] = v5[3];
  }
  return result;
}
