/*
 * XREFs of ?GetAnimatablePropertyInfo@CompositionPointerEventRouter@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180153A10
 * Callers:
 *     ?GetAnimatablePropertyInfo@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@345@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18011D900 (-GetAnimatablePropertyInfo@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAA_NPE.c)
 * Callees:
 *     ?CompareAnimationNames@@YAHPEBG0@Z @ 0x18005BF14 (-CompareAnimationNames@@YAHPEBG0@Z.c)
 *     ?GetAnimatablePropertyInfo@CompositionObject@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800745C0 (-GetAnimatablePropertyInfo@CompositionObject@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4A.c)
 */

bool __fastcall Windows::UI::Composition::CompositionPointerEventRouter::GetAnimatablePropertyInfo(
        Windows::UI::Composition::CompositionPointerEventRouter *this,
        HSTRING a2,
        enum Windows::UI::Composition::AnimationBindingDirection *a3,
        struct ExpressionObjectPropertyInfo *a4,
        enum DCOMPOSITION_EXPRESSION_TYPE *a5)
{
  const unsigned __int16 *StringRawBuffer; // rbp
  int v10; // edx
  bool result; // al

  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"IsPositionXRailsEnabled") )
  {
    v10 = 13;
LABEL_5:
    *(_DWORD *)a4 = *((_DWORD *)this + 32);
    *((_DWORD *)a4 + 1) = v10;
    *(_DWORD *)a5 = 17;
    result = 1;
    *(_DWORD *)a3 = 3;
    return result;
  }
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"IsPositionYRailsEnabled") )
  {
    v10 = 14;
    goto LABEL_5;
  }
  return Windows::UI::Composition::CompositionObject::GetAnimatablePropertyInfo(this, a2, a3, a4, a5);
}
