/*
 * XREFs of ?TryGetParameterEntry@CompositionAnimation@Composition@UI@Windows@@AEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAVParameterEntry@@@Z @ 0x18003FD50
 * Callers:
 *     ?TryGetConstantParameter@CompositionAnimation@Composition@UI@Windows@@QEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@PEAUMatrix4x4@Numerics@Foundation@4@@Z @ 0x18003FCB8 (-TryGetConstantParameter@CompositionAnimation@Composition@UI@Windows@@QEAA-AW4CompositionGetValu.c)
 *     ?WriteConstantParameterToBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAE_KPEAUExpressionParameter@234@PEAVCompositionAnimation@234@PEAI@Z @ 0x1800599B0 (-WriteConstantParameterToBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAE_KPE.c)
 *     ?TryGetConstantParameter@CompositionAnimation@Composition@UI@Windows@@QEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@PEAUMatrix3x2@Numerics@Foundation@4@@Z @ 0x1800B7362 (-TryGetConstantParameter@CompositionAnimation@Composition@UI@Windows@@QEAA-AW4Compo_ea_1800B7362.c)
 *     ?TryGetConstantParameter@CompositionAnimation@Composition@UI@Windows@@QEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@PEAU_D3DCOLORVALUE@@@Z @ 0x1800B73A6 (-TryGetConstantParameter@CompositionAnimation@Composition@UI@Windows@@QEAA-AW4Compo_ea_1800B73A6.c)
 *     ?TryGetConstantParameter@CompositionAnimation@Composition@UI@Windows@@QEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@PEAUQuaternion@Numerics@Foundation@4@@Z @ 0x18014FF0C (-TryGetConstantParameter@CompositionAnimation@Composition@UI@Windows@@QEAA-AW4Compo_ea_18014FF0C.c)
 *     ?TryGetConstantParameter@CompositionAnimation@Composition@UI@Windows@@QEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@PEAUVector2@Numerics@Foundation@4@@Z @ 0x18014FF44 (-TryGetConstantParameter@CompositionAnimation@Composition@UI@Windows@@QEAA-AW4Compo_ea_18014FF44.c)
 *     ?TryGetConstantParameter@CompositionAnimation@Composition@UI@Windows@@QEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@PEAUVector4@Numerics@Foundation@4@@Z @ 0x18014FF7C (-TryGetConstantParameter@CompositionAnimation@Composition@UI@Windows@@QEAA-AW4Compo_ea_18014FF7C.c)
 *     ?TryGetReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@PEAPEAVCompositionObject@234@PEAW4AnimationReferenceType@@@Z @ 0x18014FFB4 (-TryGetReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAA-AW4CompositionGetVal.c)
 * Callees:
 *     ?GetElementForKey@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAUHSTRING__@@_NPEAPEAVParameterEntry@@PEA_N@Z @ 0x18003FDB4 (-GetElementForKey@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAUHSTRING__@@_NPEAPEAVPara.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimation::TryGetParameterEntry(
        Windows::UI::Composition::CompositionAnimation *a1,
        HSTRING a2,
        int a3,
        _QWORD *a4)
{
  unsigned int v6; // ebx
  bool v8; // [rsp+30h] [rbp-18h] BYREF
  struct ParameterEntry *v9; // [rsp+38h] [rbp-10h] BYREF

  v6 = 2;
  Windows::UI::Composition::CompositionAnimation::GetElementForKey(a1, a2, 0, &v9, &v8);
  if ( v9 )
  {
    if ( *((_DWORD *)v9 + 2) == a3 )
    {
      *a4 = v9;
      return 0;
    }
    else
    {
      return 1;
    }
  }
  return v6;
}
