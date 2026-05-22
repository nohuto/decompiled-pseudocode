/*
 * XREFs of ?TryGetParameterType@CompositionAnimation@Composition@UI@Windows@@QEAA_NPEAUHSTRING__@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18003F980
 * Callers:
 *     ?ProcessFinalValueParameter@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ @ 0x18003E5A8 (-ProcessFinalValueParameter@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?GetElementForKey@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAUHSTRING__@@_NPEAPEAVParameterEntry@@PEA_N@Z @ 0x18003FDB4 (-GetElementForKey@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAUHSTRING__@@_NPEAPEAVPara.c)
 */

char __fastcall Windows::UI::Composition::CompositionAnimation::TryGetParameterType(
        Windows::UI::Composition::CompositionAnimation *this,
        HSTRING a2,
        enum DCOMPOSITION_EXPRESSION_TYPE *a3)
{
  char v4; // bl
  struct ParameterEntry *v6; // [rsp+30h] [rbp-18h] BYREF
  bool v7; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  Windows::UI::Composition::CompositionAnimation::GetElementForKey(this, a2, 0, &v6, &v7);
  if ( v6 )
  {
    v4 = 1;
    *(_DWORD *)a3 = *((_DWORD *)v6 + 2);
  }
  return v4;
}
