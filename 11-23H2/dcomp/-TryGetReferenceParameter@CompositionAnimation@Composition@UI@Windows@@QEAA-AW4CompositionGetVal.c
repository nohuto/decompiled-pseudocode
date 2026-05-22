/*
 * XREFs of ?TryGetReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@PEAPEAVCompositionObject@234@PEAW4AnimationReferenceType@@@Z @ 0x18014FFB4
 * Callers:
 *     ?ProcessFinalValueParameter@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ @ 0x18003E5A8 (-ProcessFinalValueParameter@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?CompareAnimationNames@@YAHPEAUHSTRING__@@PEBG@Z @ 0x18000C820 (-CompareAnimationNames@@YAHPEAUHSTRING__@@PEBG@Z.c)
 *     ?TryGetParameterEntry@CompositionAnimation@Composition@UI@Windows@@AEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAVParameterEntry@@@Z @ 0x18003FD50 (-TryGetParameterEntry@CompositionAnimation@Composition@UI@Windows@@AEAA-AW4CompositionGetValueSt.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimation::TryGetReferenceParameter(
        Windows::UI::Composition::CompositionAnimation *a1,
        HSTRING a2,
        _QWORD *a3,
        _DWORD *a4)
{
  unsigned int ParameterEntry; // esi
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  *a4 = 0;
  ParameterEntry = Windows::UI::Composition::CompositionAnimation::TryGetParameterEntry(a1, a2, 0, &v9);
  if ( !ParameterEntry )
  {
    *a3 = *(_QWORD *)(v9 + 16);
    if ( (unsigned int)CompareAnimationNames(a2, L"this") )
    {
      if ( !(unsigned int)CompareAnimationNames(a2, L"this.target") )
        *a4 = 2;
    }
    else
    {
      *a4 = 1;
    }
  }
  return ParameterEntry;
}
