/*
 * XREFs of ?GetAnimatablePropertyInfo@CompositionPathGeometry@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18016F810
 * Callers:
 *     <none>
 * Callees:
 *     ?CompareAnimationNames@@YAHPEBG0@Z @ 0x18005BF14 (-CompareAnimationNames@@YAHPEBG0@Z.c)
 *     ?GetAnimatablePropertyInfo@CompositionGeometry@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180189330 (-GetAnimatablePropertyInfo@CompositionGeometry@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW.c)
 */

bool __fastcall Windows::UI::Composition::CompositionPathGeometry::GetAnimatablePropertyInfo(
        Windows::UI::Composition::CompositionPathGeometry *this,
        HSTRING a2,
        enum Windows::UI::Composition::AnimationBindingDirection *a3,
        struct ExpressionObjectPropertyInfo *a4,
        enum DCOMPOSITION_EXPRESSION_TYPE *a5)
{
  const unsigned __int16 *StringRawBuffer; // rax
  bool result; // al

  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  if ( (unsigned int)CompareAnimationNames(StringRawBuffer, L"Path") )
    return Windows::UI::Composition::CompositionGeometry::GetAnimatablePropertyInfo(this, a2, a3, a4, a5);
  *(_DWORD *)a4 = *((_DWORD *)this + 32);
  *((_DWORD *)a4 + 1) = 4;
  *(_DWORD *)a5 = 11;
  result = 1;
  *(_DWORD *)a3 = 2;
  return result;
}
